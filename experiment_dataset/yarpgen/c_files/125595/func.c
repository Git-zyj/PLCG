/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125595
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << ((((+(((/* implicit */int) var_9)))) - (10436)))));
    var_13 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) var_7))));
    var_14 += ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */_Bool) arr_1 [i_3] [i_4]);
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((arr_11 [i_0] [i_1] [i_2 - 1] [(signed char)4] [(signed char)5] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 1] [i_0]))))))));
                                var_17 = ((((((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_9)) - (10428))))) > (((/* implicit */int) max((arr_5 [i_0]), (var_6)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_0 + 2] [i_3 + 1] [i_2 - 1]))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (arr_8 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_4] [(signed char)8] [(signed char)8])))))))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) arr_4 [i_0 - 1] [(unsigned short)12]))))) ^ (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_3] [i_4])) ? (arr_8 [i_4] [i_4] [(unsigned short)12] [i_2] [i_0 + 1]) : (arr_8 [i_3] [(unsigned short)21] [(unsigned short)14] [i_0 + 2] [i_0 + 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) var_10);
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_7))));
                                var_22 = ((/* implicit */unsigned char) arr_11 [17] [i_1] [7ULL] [i_1] [i_5] [i_6] [i_6]);
                                var_23 = ((((/* implicit */int) var_0)) > (arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_6 + 1] [(unsigned char)11] [i_6]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_4)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                var_25 = ((/* implicit */_Bool) arr_15 [i_8] [i_7] [i_0] [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) (+(((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0])) ^ (((/* implicit */int) arr_14 [i_2 + 1]))))));
                }
            } 
        } 
    } 
}
