/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170830
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
    var_11 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((_Bool) var_8));
        arr_5 [i_0] [(unsigned char)11] = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) -1079491284)))))))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_1] [i_1]))) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2798930418524786693LL)) ? ((~(((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_7 [i_1] [i_1])))))));
        arr_9 [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */int) arr_6 [i_1])), (var_8))), (((/* implicit */int) min((arr_7 [i_1 - 1] [i_1]), (arr_6 [i_1]))))));
        arr_10 [i_1] = ((/* implicit */unsigned char) (((-(min((var_9), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((35184372087808ULL) - (35184372087789ULL))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_9))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_16 [8] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 8386560U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2])))))));
            arr_17 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (signed char)75))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        arr_28 [i_2] [(unsigned char)2] [i_2] [i_2] [i_6] [i_2] = ((/* implicit */unsigned char) arr_13 [(unsigned short)10]);
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) arr_25 [i_4] [i_4] [i_6 + 2] [(signed char)6] [i_6] [i_6 + 3])) : (((/* implicit */int) arr_0 [i_2] [i_4])))))));
                        var_14 -= ((/* implicit */short) var_7);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
                    {
                        arr_31 [i_8] [i_8] [(signed char)5] [i_6] [i_2] [i_2] = var_10;
                        var_15 = ((/* implicit */_Bool) min((var_15), (((_Bool) arr_29 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 + 3]))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((var_10) << (((((/* implicit */int) (unsigned char)13)) - (13))))))));
                    }
                    var_17 = ((/* implicit */int) arr_29 [5ULL] [5ULL] [i_5] [5ULL] [5ULL]);
                }
                for (int i_9 = 1; i_9 < 9; i_9 += 4) /* same iter space */
                {
                    var_18 *= ((/* implicit */signed char) ((unsigned short) arr_32 [i_5] [i_5] [i_9 + 1] [i_9] [i_9 + 1]));
                    var_19 ^= ((/* implicit */unsigned char) (~(var_7)));
                }
                for (int i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
                {
                    arr_37 [i_2] [2U] [i_2] [i_5] [i_10 + 3] [i_10 + 1] = ((/* implicit */unsigned short) var_9);
                    var_20 = ((/* implicit */unsigned long long int) (unsigned short)27300);
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [(_Bool)1] [i_11] = ((/* implicit */_Bool) arr_18 [i_2] [5LL] [i_5]);
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (short)-11904))));
                    }
                    var_22 = arr_2 [i_10 + 2] [i_10 + 3];
                }
                arr_42 [10] [i_4] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_2] [i_4] [(signed char)6] [(unsigned short)2] [i_5] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [0LL] [0LL] [i_4] [(signed char)6] [i_5] [0LL]))) : (var_4)));
            }
            arr_43 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)38235)) | (((/* implicit */int) (unsigned short)27305))));
        }
        arr_44 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */long long int) (((_Bool)1) ? (4286580724U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59)))))) : (((long long int) arr_36 [i_2] [i_2] [i_2] [(_Bool)1]))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_10)) : ((~(var_7)))));
}
