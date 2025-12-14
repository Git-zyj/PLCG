/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16973
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
    var_14 = ((/* implicit */unsigned char) var_13);
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) max((var_4), (arr_0 [i_2]))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 218484042)) ? (7491224521708924614ULL) : (9779431215925939647ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10955519552000626982ULL)))))) : (((((/* implicit */_Bool) 10955519552000626982ULL)) ? (10955519552000626997ULL) : (10955519552000627009ULL)))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((((arr_7 [i_1] [i_0 + 1] [i_2]) + (2147483647))) << (((((arr_7 [i_2] [i_1] [i_0]) + (554206686))) - (15))))), (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_3 [i_0 - 2])))))))));
                                arr_14 [i_3] [i_3] [i_3] [i_0] = max((((((/* implicit */_Bool) arr_8 [i_0 - 4] [i_0] [i_0] [i_0])) ? (((int) var_4)) : ((+(((/* implicit */int) arr_0 [i_2])))))), (((((/* implicit */_Bool) arr_9 [i_0 - 4] [i_0 - 2] [i_0 - 2] [i_0 - 3])) ? (((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 3] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 3] [i_0 - 4] [i_0 + 2])))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_10 [i_0] [4] [i_2] [i_2]))))));
                    arr_15 [i_0] = var_8;
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 2])) * (((/* implicit */int) arr_3 [i_0 - 2]))))) ? (((((/* implicit */int) arr_3 [i_0 - 2])) << (((((/* implicit */int) arr_3 [i_0 - 2])) - (31117))))) : ((-(((/* implicit */int) arr_3 [i_0 - 2]))))));
                }
            } 
        } 
    } 
}
