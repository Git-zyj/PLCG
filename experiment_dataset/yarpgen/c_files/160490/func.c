/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160490
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
    var_13 = var_5;
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_3))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (var_3)))))) ? (((/* implicit */long long int) var_12)) : (max(((+(var_3))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-16)) ^ (((/* implicit */int) (unsigned short)20445)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */unsigned short) (signed char)19);
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0] [i_1])))) ? ((~(arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 3]))) : (((/* implicit */int) var_1))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)22076)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */int) arr_13 [i_0]);
                                var_19 *= ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) >= (((arr_10 [i_0] [i_2 - 1] [i_2] [i_0] [i_1]) << ((((((-(((/* implicit */int) arr_4 [2LL] [i_0] [i_0])))) + (53565))) - (14))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) arr_6 [i_1] [i_4])))) : (((/* implicit */int) var_9))))) ? (min((((/* implicit */long long int) min(((signed char)-92), (((/* implicit */signed char) var_11))))), (arr_7 [i_1] [i_2] [i_1] [i_2]))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) == (465586432324639796LL)))))))));
                                var_21 = max((((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 4] [i_2 - 3] [i_2]))))), ((signed char)19));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
