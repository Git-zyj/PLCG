/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125574
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
    var_18 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_2 [i_2 - 2]))))))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((var_3) >= (((/* implicit */long long int) arr_7 [i_1])))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [15ULL] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16454))) : (arr_4 [i_1]))) >> (((((/* implicit */int) arr_0 [i_1])) - (113)))))))))));
                }
                for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    var_21 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((arr_2 [i_1]) >> (((((/* implicit */int) arr_0 [i_0])) - (111))))) : (((/* implicit */long long int) arr_7 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((arr_2 [i_1]) >> (((((((/* implicit */int) arr_0 [i_0])) - (111))) + (102))))) : (((/* implicit */long long int) arr_7 [i_0])))));
                    var_22 -= ((/* implicit */int) min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1]))))))), (max((((/* implicit */long long int) var_9)), (var_4)))));
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((8329850262876970620ULL), (((/* implicit */unsigned long long int) arr_5 [i_3 - 1])))))));
                    var_24 = var_6;
                    var_25 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((2553527648U), (((/* implicit */unsigned int) arr_11 [i_3 + 1] [i_3] [i_3 - 2]))))), (((var_16) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));
                }
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_16)), (arr_8 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_6))))))))));
                                var_27 = ((/* implicit */signed char) arr_11 [i_0] [i_5] [i_6]);
                                var_28 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_4] [i_5]);
                                var_29 = ((/* implicit */signed char) min((var_29), ((signed char)1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
