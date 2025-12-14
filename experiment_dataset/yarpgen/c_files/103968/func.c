/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103968
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 - 2]))));
                arr_4 [i_1] = ((/* implicit */int) max((((((unsigned int) var_6)) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)5] [i_1]))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2147483647ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))))))));
            }
        } 
    } 
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) + (((2147483662ULL) + (((/* implicit */unsigned long long int) var_9))))))) ? (var_1) : (((/* implicit */unsigned int) var_0)));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    var_13 = ((/* implicit */unsigned int) (!(var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        var_14 -= ((/* implicit */signed char) ((unsigned int) arr_6 [i_2 + 3]));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 2) 
                    {
                        arr_15 [i_5] [i_5] [i_4] [i_3] [(short)17] [i_2 + 3] = (_Bool)1;
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                        var_17 = (-(((((/* implicit */unsigned int) arr_10 [(unsigned short)11] [(unsigned short)11] [(unsigned char)16] [(signed char)17])) * (var_6))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_18 [i_2 + 2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2 + 3] [i_6])) ? (arr_14 [i_2] [i_2] [5] [i_2 + 3] [i_2 + 3] [i_2]) : (((/* implicit */int) ((18446744071562067964ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_12 [5U] [i_3] [i_4] [i_6]))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_2))));
                    }
                    for (short i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)6))));
                        var_22 = ((/* implicit */long long int) ((2) < (((/* implicit */int) arr_21 [i_2 + 1] [i_7 - 2] [i_7 + 1] [i_7 - 2]))));
                    }
                    arr_22 [5LL] = ((/* implicit */_Bool) 18446744071562067968ULL);
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2 - 1]))) < (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_9 [i_4]) : (var_1)))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 - 1]))));
                        arr_26 [(_Bool)1] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_2 + 2]))) < (arr_9 [i_2 - 1])));
                        var_25 = ((/* implicit */signed char) (+(1489406792U)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_30 [i_9] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 4] [i_4] [i_9]))));
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(signed char)3] [i_9])) || (((/* implicit */_Bool) var_8)))))));
                        arr_31 [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((int) var_1));
                        arr_32 [i_2] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((signed char) (-(arr_10 [i_2] [i_3] [i_4] [3]))));
                        var_27 -= ((/* implicit */int) arr_27 [i_2 + 4] [i_2 - 1] [i_2 + 3] [i_2 + 3]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [(_Bool)1] [i_2] [i_2 - 1] [i_2])) ? (562949953420288LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 4] [i_10]))))))));
                        var_29 = ((/* implicit */unsigned char) var_1);
                        var_30 = ((/* implicit */short) (+(((long long int) var_5))));
                        arr_36 [i_2] [2U] [6U] [i_10] [i_10] = ((/* implicit */signed char) ((long long int) var_1));
                        arr_37 [i_2] [i_4] [(_Bool)1] [i_10] [i_4] [i_3] = ((/* implicit */signed char) ((arr_10 [i_2 + 3] [i_2 + 3] [i_10] [i_4]) - (((/* implicit */int) arr_6 [i_2 + 1]))));
                    }
                }
            } 
        } 
    }
    for (short i_11 = 4; i_11 < 24; i_11 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_38 [i_11] [i_11 - 3]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((unsigned short) arr_38 [i_11] [i_11])))))) ? (((((/* implicit */_Bool) ((var_5) ? (arr_38 [i_11] [i_11 - 4]) : (arr_38 [i_11] [i_11 - 1])))) ? (((/* implicit */int) arr_39 [i_11 - 2])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_39 [i_11])) : (((/* implicit */int) arr_39 [i_11])))))) : (((/* implicit */int) arr_39 [i_11]))));
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_38 [i_11] [i_11])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((-562949953420288LL) | (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) var_2)))))))));
        var_33 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) arr_39 [i_11])) ? (arr_38 [i_11] [12]) : (((/* implicit */long long int) var_2))))) ? ((+(arr_38 [i_11 - 1] [i_11 - 3]))) : (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) arr_39 [i_11])), (var_6))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        arr_42 [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (0)));
        arr_43 [7LL] = ((/* implicit */_Bool) max((arr_1 [i_12] [7U]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_12] [i_12] [i_12] [i_12]))) != (var_6))))));
    }
}
