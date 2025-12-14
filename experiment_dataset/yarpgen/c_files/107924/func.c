/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107924
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
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned int) arr_0 [i_2 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0];
                            var_13 = ((/* implicit */unsigned short) var_4);
                            var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1] [i_2 + 2] [i_0 + 2] [i_3] [i_1 + 1] [i_3])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4])) ? (((/* implicit */int) var_4)) : (1382593400))) : (((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_1] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_5)))))) >> (((1234974685U) - (1234974657U)))));
                        }
                        var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_12 [(unsigned char)17] [i_0] [i_1 + 3] [i_0] [i_1] [i_1] [i_3])) >> ((((~(var_11))) + (2265103868136996332LL))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(arr_4 [i_2 + 2] [i_2] [i_2]))))));
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) << (((((/* implicit */int) var_4)) - (26)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))) : (var_11)))) ? (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (arr_10 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0]));
                    }
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_16 [i_5] [i_1] [i_0] = ((/* implicit */long long int) max(((-(14190102577971822312ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((unsigned int) -1382593401)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (long long int i_7 = 4; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) -1382593389)), (9154863184603604563ULL)));
                                var_19 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_7 [i_0] [(signed char)0] [i_1] [i_1] [i_7 + 1]))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_6] [i_7 - 3])) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0] [i_1] [i_1 + 2] [i_7 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0] [i_7 - 3]))))));
                                arr_21 [i_6] [i_1 - 1] [i_5] [i_6] [i_7] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(4256641495737729274ULL))), (((/* implicit */unsigned long long int) 1382593371))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1 + 1])), (((((/* implicit */_Bool) 1382593371)) ? (14190102577971822312ULL) : (14190102577971822338ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_6])))))));
                                arr_22 [i_1] [i_1] [3U] [i_1] [i_7] = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned char)255)), (9291880889105947046ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((9154863184603604565ULL), (((/* implicit */unsigned long long int) (signed char)-19)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [8]))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((((-1382593372) + (2147483647))) >> (((1382593400) - (1382593397)))))));
                            arr_28 [i_9] [i_1] [i_1] [i_0 - 3] = max((((unsigned short) arr_14 [i_1 + 3] [i_1 + 1] [i_1 + 3])), (((/* implicit */unsigned short) max((arr_23 [i_1] [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_1])))))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? ((~(arr_27 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) : (arr_5 [i_0] [i_1 + 1]))))));
                            var_23 -= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((((/* implicit */_Bool) 9291880889105947052ULL)) || (((/* implicit */_Bool) 9291880889105947073ULL))))))), (((arr_10 [i_0 - 1] [i_1 - 1] [i_8] [i_0 - 1] [i_9] [i_9]) << (((arr_10 [i_0 + 3] [i_1 + 2] [i_8] [i_9] [i_9] [i_9]) - (824450392)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) (+(max((9154863184603604542ULL), (9154863184603604525ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        for (short i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            {
                var_25 = ((/* implicit */signed char) arr_0 [i_11 - 3]);
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) 1382593371)) ^ (7010679088273209091ULL))))));
            }
        } 
    } 
}
