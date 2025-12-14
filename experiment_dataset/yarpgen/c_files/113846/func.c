/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113846
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (arr_0 [i_0])))) : (((((/* implicit */long long int) arr_0 [i_0])) & (var_4)))));
        var_21 ^= ((/* implicit */int) (+(arr_0 [i_0])));
        var_22 = ((/* implicit */short) (((-(((var_10) - (((/* implicit */unsigned long long int) var_16)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) var_6)))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_23 = ((/* implicit */long long int) ((short) var_15));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_0] [i_1 + 1] [i_2] [i_1] [i_4] [i_4] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_8 [(unsigned char)9] [i_1 + 1] [i_1 + 1])) ? (arr_6 [i_0] [i_1 - 1] [i_1]) : (arr_6 [i_0] [i_1] [i_1])))));
                            var_24 = ((((/* implicit */_Bool) (~(((arr_13 [i_1] [i_0] [5U] [i_2] [i_3] [i_4]) % (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_4] [i_1] [i_2] [i_0] [i_1] [i_1] [i_0]))) && (((/* implicit */_Bool) arr_4 [i_1 - 1])))))) : (((long long int) arr_8 [i_4] [i_3] [i_1 + 1])));
                            var_25 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [i_1 - 1] [i_0]) : (arr_3 [1U] [i_1 + 1] [i_0])))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((unsigned int) (~(((((/* implicit */unsigned int) arr_1 [i_2])) - (var_13)))));
                            var_26 = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_19))) ^ (((/* implicit */long long int) arr_5 [i_0] [i_3] [i_2])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_13))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */int) (~(((long long int) arr_12 [i_1 - 1] [i_1] [i_1] [i_3] [i_5]))));
                            arr_20 [i_0] [i_2] [7] [i_1] [i_5] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (arr_17 [i_1 + 1] [i_1] [i_1 - 1] [7ULL] [i_1 - 1] [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_13) >= (((/* implicit */unsigned int) arr_10 [i_5] [i_3] [7U] [(unsigned char)0] [i_0]))))))));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_14)) ? (arr_6 [i_1 + 1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) var_14)))));
                        arr_22 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) (~((~(max((arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_10 [i_3] [i_3] [i_2] [i_0] [i_3]))))))));
                        var_27 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1 - 1])) ? (var_11) : (((/* implicit */unsigned int) arr_10 [2U] [i_1] [i_2] [i_2] [i_1 + 1])))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_0] [i_2] [i_2] [i_2] [(unsigned char)4] [i_3] [i_0]) == (((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_0])) < (var_9)))))))) | (arr_3 [i_3] [8ULL] [i_0]))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? ((~(arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) : ((-(arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))))));
        }
        for (long long int i_6 = 3; i_6 < 8; i_6 += 2) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)31621)) ? (((/* implicit */int) (unsigned char)229)) : (1048575)));
            var_31 *= ((/* implicit */unsigned char) ((((arr_8 [i_0] [i_0] [i_0]) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_18)))))) * (((/* implicit */int) (((~(var_18))) > (((/* implicit */unsigned long long int) ((7635819013415946559LL) ^ (((/* implicit */long long int) var_0))))))))));
        }
        var_32 = ((((((unsigned int) var_7)) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) -1048571)) : (4294967283U));
    }
    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_32 [8LL] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_29 [(_Bool)1] [11U] [i_8])) | (((/* implicit */int) arr_28 [i_7] [i_7])))))) ? (((/* implicit */int) ((var_18) < (min((((/* implicit */unsigned long long int) arr_29 [i_7] [i_8] [i_7])), (var_5)))))) : (((/* implicit */int) ((((var_2) && (((/* implicit */_Bool) arr_26 [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_8] [i_8] [i_7])) & (arr_26 [i_7])))))))));
            var_33 -= (~(((/* implicit */int) ((var_7) == (((/* implicit */int) var_15))))));
            arr_33 [i_7] [i_8] [i_7] = arr_28 [i_7] [i_8];
            var_34 = ((/* implicit */unsigned int) var_17);
            arr_34 [i_8] [i_7] = ((/* implicit */long long int) ((unsigned char) ((((unsigned long long int) var_0)) % (((/* implicit */unsigned long long int) (~(var_9)))))));
        }
        arr_35 [i_7] [i_7] = ((/* implicit */unsigned long long int) (((~(arr_25 [i_7]))) ^ (((/* implicit */long long int) arr_31 [(unsigned char)2] [i_7] [i_7]))));
        var_35 = ((/* implicit */long long int) arr_26 [i_7]);
        arr_36 [i_7] [i_7] = ((/* implicit */int) ((((unsigned int) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_7] [i_7])))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) 1617031125)))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_36 *= ((/* implicit */unsigned int) var_15);
        arr_41 [i_9] = ((/* implicit */unsigned int) (-(arr_39 [i_9] [i_9])));
        arr_42 [i_9] = ((/* implicit */unsigned char) ((long long int) arr_37 [i_9] [i_9]));
        arr_43 [i_9] = ((/* implicit */int) ((_Bool) arr_40 [i_9]));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        var_37 *= ((/* implicit */unsigned int) (-((-(arr_46 [i_10] [i_10])))));
        arr_47 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_10] [i_10])) ? (arr_37 [i_10] [i_10]) : (var_16)));
        arr_48 [i_10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (arr_46 [i_10] [i_10])))) : (((unsigned long long int) var_4))));
    }
    var_38 = ((((/* implicit */unsigned int) max((1048549), (((/* implicit */int) (unsigned char)76))))) / (var_11));
}
