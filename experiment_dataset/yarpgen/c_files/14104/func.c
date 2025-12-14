/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14104
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
    var_20 = ((/* implicit */short) var_9);
    var_21 = max((var_2), (((/* implicit */long long int) max((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))))));
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (short)22374))), ((~(((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_8 [i_1 + 1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_0] [i_1 + 2] [i_2] [i_2]) : (((/* implicit */int) var_3))))) ? (min((((/* implicit */unsigned long long int) var_15)), (var_18))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_6 [i_0] [(signed char)17] [i_2] [i_0]) : (((/* implicit */int) var_17))))))));
                    arr_9 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((~(arr_5 [i_1 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_2]))))));
                                var_23 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                                var_24 = ((/* implicit */short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))) < ((-(((/* implicit */int) ((_Bool) (short)22374)))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_11)))))))));
                }
                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)31702), (((/* implicit */unsigned short) (_Bool)0)))))));
            }
        } 
    } 
}
