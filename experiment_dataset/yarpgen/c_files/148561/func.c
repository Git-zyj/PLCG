/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148561
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
    var_17 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((short) ((((/* implicit */_Bool) ((int) arr_5 [(unsigned char)6] [i_1] [i_2]))) ? (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) arr_2 [i_0]))))) : (((arr_6 [i_0] [i_1] [i_2] [i_2]) / (var_16)))));
                    var_19 = ((/* implicit */unsigned short) (((+((((_Bool)1) ? (14812066646684302860ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)4831), (((/* implicit */unsigned short) var_3))))))));
                    arr_8 [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)53632)) + ((+(((/* implicit */int) (signed char)-42)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (~(0LL)))))), (var_3)));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_12))));
    var_22 = ((/* implicit */long long int) var_7);
}
