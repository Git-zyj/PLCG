/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128478
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) % ((~(min((var_10), (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 + 3] [i_2 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))), (((/* implicit */long long int) ((_Bool) arr_0 [i_0 - 1])))))) ? (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15719))))) ^ (max((((/* implicit */long long int) var_11)), (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)16301)) & (1604976395))))))))));
                    arr_8 [i_1 + 4] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned short) (short)-16302);
                    var_14 = ((/* implicit */_Bool) min((var_14), (((((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_1))))) & (((/* implicit */int) ((arr_6 [i_2] [i_2 - 3] [i_1 + 1] [i_0 - 2]) != (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) <= (((/* implicit */int) ((unsigned short) (short)-16300)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 463155983))));
                        arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0] &= ((/* implicit */_Bool) ((int) var_1));
                        arr_12 [i_0 + 1] [i_0 - 1] [i_0 - 1] &= max((((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_2 - 1] [i_3])) ? (max((var_0), (((/* implicit */long long int) arr_0 [i_0 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17833))))), (((/* implicit */long long int) (-(max((1741398265U), (((/* implicit */unsigned int) var_12))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */int) (unsigned short)511);
                        var_17 = ((/* implicit */long long int) ((unsigned char) ((var_0) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2121762418)))))))));
                        var_18 = ((/* implicit */_Bool) max((arr_6 [i_0] [i_1 - 1] [i_2] [i_4]), (((/* implicit */long long int) max((463155960), (463156001))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_4);
}
