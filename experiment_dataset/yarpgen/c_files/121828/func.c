/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121828
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)47578)) >= (((/* implicit */int) var_10))))))))));
                            arr_16 [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) != (4095ULL)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)17958)) || ((_Bool)1))))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) 4294967295U))));
                            arr_19 [i_3] [11U] [i_2] [(signed char)19] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 1])) ? (arr_13 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]) : (arr_13 [i_2 - 2] [i_2] [i_2] [i_2] [i_2])));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_0 - 1] [i_3 + 1] [i_2 - 2])))))));
                        }
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_6))));
                    }
                    arr_20 [i_0] [i_1] [i_2] [11U] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) var_0)), ((-(arr_8 [i_0] [17U] [i_1] [i_1]))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_9 [i_0 - 1] [i_2 + 1] [i_2 + 1])), (arr_10 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2]))))));
                    arr_21 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 - 2]), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -1LL)) ? (1023U) : (arr_6 [i_0] [(signed char)0] [i_0])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7391))))) ? (((/* implicit */long long int) 4294967295U)) : (6LL)))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (min((min((((/* implicit */unsigned int) var_5)), (2060266726U))), (min((((/* implicit */unsigned int) arr_18 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_2 - 3] [i_2 - 3])), (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    var_18 = 4294967295U;
}
