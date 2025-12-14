/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136426
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) var_7);
        var_12 = ((/* implicit */int) ((((((/* implicit */long long int) ((int) var_10))) != (((long long int) var_5)))) ? (var_4) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(min((max((0ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_0 [17LL])))))))));
        var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))))))))), (min((((/* implicit */long long int) ((int) (unsigned short)65522))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [(signed char)12] [(signed char)12]) : (arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 0ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)10]))) : ((+(4212473399U)))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_15 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15))))) > (((var_4) >> (((arr_14 [i_4] [i_4] [i_4] [4U] [13LL] [(_Bool)1] [i_4]) + (5086456468305804110LL))))))))) != (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */long long int) ((unsigned int) (unsigned char)142))) : (max((((/* implicit */long long int) 3623452752U)), (arr_14 [i_5] [i_4] [i_2] [20] [i_2] [i_2] [i_1])))))));
                            arr_17 [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) var_3)))));
                            arr_18 [(unsigned char)16] [6] [(signed char)0] [7] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) (signed char)90)))))));
                            arr_19 [i_1] [i_1] [15LL] [i_4] [i_5] = ((((/* implicit */_Bool) ((unsigned short) 671514543U))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))) | (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) 8426056955499898382LL)))))) : (((/* implicit */unsigned long long int) 4143176753U)));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 4212473390U)) : (var_4))) : (((/* implicit */unsigned long long int) (~(arr_22 [i_6] [i_4] [i_3] [i_2] [i_1])))))));
                            arr_24 [i_1] [8U] [i_3] [i_6] [(_Bool)1] = (~(((int) var_4)));
                        }
                        for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            arr_27 [i_1] [(signed char)10] [i_3] [i_3] [9U] [9U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [8U] [i_3] [i_2] [(unsigned short)9])))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (var_8)));
                            var_17 += ((/* implicit */unsigned long long int) var_9);
                            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_10 [i_1] [i_1] [(_Bool)1] [i_4])))) ? ((+(arr_10 [8LL] [i_2] [i_3] [i_4]))) : (min((arr_10 [i_7] [i_4] [i_1] [i_1]), (arr_10 [i_3] [i_4] [i_3] [i_4])))));
                            arr_28 [3] [i_7] [i_7] [15] [i_7] [(signed char)8] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_9), ((unsigned short)6343)))) : (arr_3 [13ULL] [i_2])))), (var_1)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            arr_32 [0] [i_4] [i_3] [i_3] [i_8] [i_3] = ((/* implicit */signed char) var_7);
                            var_19 = ((/* implicit */unsigned char) var_3);
                        }
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(signed char)16] [(signed char)9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_4] [i_4])))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))) : (82493906U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2608550052U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) : (4212473372U)))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (var_4))))))))));
                    }
                    var_21 = ((/* implicit */int) var_4);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (-(arr_30 [9ULL] [i_9] [i_9] [i_9] [9ULL] [i_9] [i_10])))) : (max((var_2), (((/* implicit */unsigned long long int) min((var_1), (var_1))))))));
                    arr_38 [i_1] [i_9] [i_9] [i_10] = ((/* implicit */int) (+(max((var_5), (((/* implicit */unsigned long long int) arr_35 [i_1] [19U] [i_10]))))));
                }
            } 
        } 
        var_23 *= ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_0 [i_1])))));
        var_24 = ((/* implicit */unsigned int) var_9);
        arr_39 [i_1] |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_2))))));
    }
    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) var_6);
        arr_42 [(unsigned char)14] [(unsigned char)14] &= (+(arr_3 [i_11] [i_11]));
        var_26 += ((/* implicit */signed char) (+((~(arr_6 [i_11] [i_11])))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_8);
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_4))));
}
