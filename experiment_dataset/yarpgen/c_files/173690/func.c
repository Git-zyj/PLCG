/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173690
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
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_21 &= ((/* implicit */long long int) min((2285096367U), (2285096382U)));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 4; i_4 < 9; i_4 += 3) /* same iter space */
                            {
                                arr_15 [11] [11] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_2] [(short)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(unsigned char)5] [i_2] [9LL] [i_3] [i_4])))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [(signed char)7] [i_2]))) | (1668684563U)))) : (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_10 [(unsigned char)6] [(unsigned char)6] [i_2]))))))));
                                var_22 = ((/* implicit */_Bool) var_4);
                            }
                            for (unsigned int i_5 = 4; i_5 < 9; i_5 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */int) min(((-(((arr_0 [i_0]) ? (14675384585177779513ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [0ULL] [(unsigned short)8] [i_3] [i_5]))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)4] [i_0])) ? (var_18) : (((/* implicit */unsigned long long int) 4294967295U))))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5 - 1]))))))))));
                            }
                        }
                    } 
                } 
                var_25 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) 1675426608)) : (arr_11 [i_0])))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-31)))) >> (((((((/* implicit */_Bool) var_0)) ? (8788519744585151323ULL) : (((/* implicit */unsigned long long int) arr_2 [(unsigned char)11] [i_1])))) - (8788519744585151306ULL)))))) ? (max((((/* implicit */unsigned long long int) (signed char)121)), (max((arr_18 [i_0] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)25022)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [i_1])))))));
                arr_19 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [6U] [i_0] [i_1] [1U]))) <= (arr_2 [(unsigned short)10] [4LL]))))))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
            }
        } 
    } 
    var_27 = (~(var_18));
}
