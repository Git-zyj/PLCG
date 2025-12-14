/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121250
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) (unsigned short)25113)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_6 [(unsigned short)10] [i_0] [(unsigned short)5])))))) > ((+(((/* implicit */int) arr_4 [i_0 + 3] [i_0] [i_2]))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_16))));
                    var_19 |= ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned short) (short)-32003))) % (((/* implicit */int) arr_4 [i_0 + 2] [i_2] [i_0 - 1])))) - (min((((/* implicit */int) ((arr_3 [i_2]) >= (var_13)))), (((((/* implicit */_Bool) (unsigned short)36354)) ? (1920240927) : (((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) min(((unsigned short)29181), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_16)))))))));
    var_21 = ((unsigned int) max((max((((/* implicit */unsigned int) var_16)), (var_13))), (((/* implicit */unsigned int) var_7))));
}
