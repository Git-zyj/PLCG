/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180198
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */signed char) (unsigned char)101);
    var_20 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (7538507005076642414LL)))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_0)) - (13696)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14760)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (1489731788U) : (((/* implicit */unsigned int) var_8))))))))));
                    var_21 ^= ((/* implicit */unsigned char) (signed char)-117);
                    var_22 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 4])), (12542765978699121414ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1 - 4] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_0])))))));
                }
            } 
        } 
    } 
}
