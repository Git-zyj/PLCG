/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131069
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
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65535))))))));
    var_19 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_14)))))) || (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))))), (max((((/* implicit */int) var_9)), (var_1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) 127);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [10] [3] [(unsigned char)8] [i_3] [i_2] = ((/* implicit */signed char) arr_0 [i_4] [i_1 + 1]);
                                var_21 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_10 [8] [i_1 - 1] [i_1 - 3] [i_0] [8]))));
                                var_22 = (~(((/* implicit */int) (unsigned char)24)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_2 + 3] [i_1 + 1] [i_0])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_2))))) ? ((~(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [9]))) : (min((4294967295U), (((/* implicit */unsigned int) min((arr_9 [(unsigned short)0] [(_Bool)1] [(unsigned short)0]), (var_3))))))));
                                var_24 = ((/* implicit */short) (((+(((/* implicit */int) arr_3 [i_0])))) * (((/* implicit */int) arr_10 [i_2] [i_1] [i_2 + 2] [i_5] [13U]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-((-(var_8)))))) / ((((+(var_6))) / (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))))));
                }
            } 
        } 
    } 
    var_26 = ((((/* implicit */_Bool) min((var_1), (((((/* implicit */int) var_16)) & (((/* implicit */int) (unsigned short)14))))))) ? ((~(((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_2))))))) : (((/* implicit */int) var_16)));
}
