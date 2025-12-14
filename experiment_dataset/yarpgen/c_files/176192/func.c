/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176192
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
    var_20 &= ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-28415))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1]))))) * (((/* implicit */int) ((short) arr_0 [i_2]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)6] [i_2]))) : (arr_4 [i_1] [4U] [7])))) ? (((unsigned long long int) arr_3 [i_0 - 2])) : (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [(unsigned char)1] [i_1] [i_2] [i_1]))))) - (12414ULL)))));
                        var_23 -= ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3]))))) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [10ULL] [i_2])) ? (((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [(short)3])) : (((/* implicit */int) arr_8 [i_0] [i_0 + 4] [i_3]))))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [3ULL] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3]))) : (arr_6 [i_3] [i_3] [i_3] [10]))))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */short) (+((+(arr_12 [i_0 + 1] [i_0 + 3] [i_1 - 1] [i_2] [i_2] [i_4] [i_4])))));
                            var_25 = ((((((/* implicit */int) arr_11 [(unsigned char)8] [(signed char)8] [(unsigned char)12] [i_4 + 1] [(unsigned char)8])) >= (((/* implicit */int) arr_11 [11] [i_4] [i_4 + 1] [i_4 + 1] [i_4])))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_4 + 1])) : (((/* implicit */int) arr_11 [i_3] [i_1] [i_3] [6U] [i_4])))))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [9LL] [i_2 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_0 [(unsigned char)7])) : ((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? ((-(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_4 + 1] [i_4])))) : (((/* implicit */int) arr_9 [(short)4] [1] [i_2] [(unsigned char)9]))));
                        }
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((_Bool) arr_15 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_7 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned char)8] [i_3] [i_5])) ? (arr_7 [(_Bool)1]) : (arr_12 [i_0 + 2] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [1U] [i_3] [i_3] [(unsigned char)12] [1U] [(short)6])))))));
                            var_28 |= ((/* implicit */signed char) ((short) (-(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_7 [7U]))))));
                            var_29 -= ((/* implicit */short) (+((~(arr_6 [i_3] [i_2 + 1] [(signed char)4] [(signed char)4])))));
                        }
                    }
                } 
            } 
        }
        for (long long int i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~((~(((unsigned long long int) arr_2 [i_0] [i_0])))))))));
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_31 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) arr_16 [12] [(unsigned char)4] [i_7] [i_7] [i_7] [i_7] [i_7])) - (arr_19 [i_0] [9ULL] [1] [8U])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 4] [6] [i_8]))) : (arr_7 [i_0])));
                        var_32 = ((/* implicit */signed char) (~((-((-(((/* implicit */int) (signed char)1))))))));
                    }
                } 
            } 
            arr_23 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(short)6])) & (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6])))))));
            var_33 ^= ((unsigned char) (!(((/* implicit */_Bool) arr_15 [i_6] [(short)8] [i_6] [i_6 + 1] [(short)3] [(short)8]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (short i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    {
                        arr_32 [i_10] = ((/* implicit */short) arr_6 [i_10] [(short)2] [i_10 - 1] [i_11]);
                        var_34 &= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_18 [i_9] [i_9] [4])))));
                    }
                } 
            } 
            var_35 = (-(arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 4] [i_0 - 1]));
            var_36 = ((/* implicit */short) (-(((/* implicit */int) (short)24880))));
        }
        arr_33 [i_0 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (unsigned char)3)))));
    }
    /* LoopSeq 1 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        var_37 |= ((/* implicit */short) (+((~(arr_36 [i_12])))));
        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((long long int) ((arr_34 [i_12 - 1]) + (((/* implicit */int) arr_37 [i_12 - 1] [i_12 - 1]))))))));
    }
    var_39 &= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_18) : (((/* implicit */unsigned int) var_3))))))));
    var_40 += ((/* implicit */unsigned long long int) var_10);
}
