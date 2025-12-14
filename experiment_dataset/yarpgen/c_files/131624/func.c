/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131624
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_1] [(unsigned char)13] [i_1] = arr_2 [i_0];
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [6] [(unsigned short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))));
                            var_11 = (unsigned short)65535;
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                            {
                                var_12 |= max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4] [i_2]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0])))))), (((/* implicit */int) (unsigned short)54139)));
                                var_13 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65512))))), (arr_9 [i_3] [i_3]))) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_2]), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4])))))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 20; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_6] [i_0] [i_7 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_6 + 1] [i_6] [i_6 + 1] [i_7 + 1]), (var_8)))) ? (min((arr_21 [i_5] [i_6] [i_6 + 1] [i_6] [i_5]), (((/* implicit */int) (unsigned short)18)))) : (((((/* implicit */int) arr_13 [i_6] [i_0] [i_1] [i_1] [i_5] [i_6] [i_7])) / (((/* implicit */int) arr_17 [i_1]))))));
                                var_14 *= ((max((((((/* implicit */_Bool) (unsigned short)0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_6] [(unsigned short)10]))))), (((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0] [i_6] [i_7]))))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_18 [i_7 + 1] [i_7 + 1] [i_5] [i_6 + 1]), (arr_18 [i_7 + 1] [i_1] [i_1] [i_6 + 1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) ((((((_Bool) arr_21 [i_0] [i_1] [(unsigned char)14] [(unsigned char)14] [(unsigned char)14])) ? (((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_4 [i_1]))))) << (((((/* implicit */int) arr_5 [i_0] [i_5])) - (118)))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_0);
    var_17 = (-2147483647 - 1);
    var_18 = ((/* implicit */int) var_6);
}
