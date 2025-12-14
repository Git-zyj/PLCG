/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156947
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_5)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((var_10), (var_2)));
                    var_11 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_7 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) var_6)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_3] &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_10 [i_1] [(unsigned short)7] [i_2 - 1] [i_3] [i_3]))))) & (((/* implicit */int) var_9))));
                        var_12 = ((/* implicit */short) var_2);
                        var_13 |= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-15)), ((unsigned short)5039)))), (14719027490556623294ULL))), (((/* implicit */unsigned long long int) (unsigned short)64197))));
                        arr_13 [i_0] [i_2] [i_2] [(_Bool)1] [i_3] [2ULL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(6619882245722205957LL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))), (((/* implicit */int) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-25)), (-211083744)))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_9 [i_2 - 1]))) / (max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_6)))) != (((/* implicit */int) ((((/* implicit */int) (signed char)123)) == (((/* implicit */int) (signed char)(-127 - 1))))))));
                            arr_20 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5])))))));
                            var_15 = ((/* implicit */short) var_5);
                        }
                        arr_21 [i_2] [i_4] = ((/* implicit */long long int) var_8);
                        arr_22 [i_0] [i_0] [i_2] [7LL] [(signed char)9] [i_0] = ((/* implicit */int) var_5);
                    }
                    var_16 = ((/* implicit */unsigned long long int) (~(max((min((0LL), (((/* implicit */long long int) (unsigned char)253)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (211083744) : (((/* implicit */int) (signed char)-109)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) var_5);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((arr_6 [i_6] [i_6] [i_6]) >> (((((long long int) var_0)) - (123LL))))))));
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    var_19 = var_1;
    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_5), (var_2)))) : (((/* implicit */int) var_9))))));
}
