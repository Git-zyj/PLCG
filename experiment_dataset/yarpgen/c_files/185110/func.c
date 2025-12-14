/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185110
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
    var_10 = ((/* implicit */unsigned int) 9223372036854775804LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned short)7] = ((/* implicit */signed char) 17592184995840LL);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [(unsigned short)0] [i_3] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-19099))))))), ((+(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [(unsigned short)0]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_3] [i_2]))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_7 [i_2] [i_1 + 1])))))));
                                var_12 = ((/* implicit */short) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1] [16U])))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(287948901175001088LL))))));
                                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-76)) + (2147483647))) << (((((/* implicit */int) (short)2678)) - (2678)))));
                            }
                            var_15 &= ((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((((/* implicit */int) var_8)) << ((((~(arr_7 [i_0] [i_0]))) + (5426691251936816688LL)))))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (arr_11 [i_0] [i_2] [i_2] [(signed char)8] [i_0])));
                        }
                    } 
                } 
                var_17 ^= ((unsigned short) ((((/* implicit */int) arr_0 [i_1 + 1])) / (((/* implicit */int) arr_0 [i_1 + 1]))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_7 = 2; i_7 < 15; i_7 += 4) 
                            {
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_8))));
                                var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned char) var_5))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))))) == (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) (signed char)14)), ((unsigned short)12103)))))));
                                var_20 = ((/* implicit */short) (unsigned char)165);
                                var_21 -= ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) -7275154381130804953LL)))), (var_1)));
                            }
                            arr_22 [i_0] [i_0] [9U] [i_6 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)48))));
                            var_22 = ((/* implicit */unsigned char) (unsigned short)29708);
                            arr_23 [i_1 + 1] = arr_21 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [(signed char)0] [i_1 - 1] [i_1];
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_2);
}
