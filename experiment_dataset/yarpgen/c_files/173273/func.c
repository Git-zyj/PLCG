/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173273
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
    var_20 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_9)), (1125899906777088LL))), (((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_7))), (min((((/* implicit */int) var_18)), (var_16))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned char)217)) & (((/* implicit */int) (_Bool)1)))));
                            arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_3 [(_Bool)1] [i_1] [i_1]);
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3])))));
                            arr_20 [i_5] [(_Bool)1] [i_2] [i_1] [i_0] = arr_12 [i_0] [i_1] [(unsigned char)7] [i_5];
                            var_23 = ((/* implicit */_Bool) arr_18 [(short)3] [i_5] [i_2] [i_3] [(signed char)9] [i_3]);
                        }
                        var_24 = ((/* implicit */long long int) max((((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])) & (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_2] [i_2] [i_1] [(signed char)8] [i_0] [i_3] [(signed char)8])), (arr_15 [i_0] [4ULL] [i_0] [i_1] [i_0] [i_1]))))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (arr_1 [i_6 - 1])));
                        arr_23 [i_0] [i_1] [i_2] = arr_22 [i_0] [i_1] [i_2] [i_6];
                        arr_24 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_6 - 2] [4LL] [i_2 + 4])) + (((/* implicit */int) arr_6 [i_6 + 2] [i_2 + 1] [i_2 + 1])))) & (((/* implicit */int) ((short) var_6)))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_11 [i_0] [(short)6] [i_1] [i_0] [i_0])))))) & (((/* implicit */int) arr_2 [(unsigned char)9]))));
                        var_27 = ((/* implicit */unsigned int) ((signed char) max((max((arr_18 [i_0] [(unsigned char)5] [i_1] [i_2] [(_Bool)1] [(unsigned char)5]), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [i_2])) & (((/* implicit */int) arr_14 [(short)0] [i_1] [i_0] [(signed char)0] [i_1]))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) arr_13 [2] [i_1] [i_1] [i_1]);
                        arr_28 [i_0] [(short)4] [i_0] [i_7] [2U] = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) ((arr_4 [i_0] [1LL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))), (max((arr_12 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) arr_11 [i_7] [i_0] [i_1] [i_0] [i_0])))))));
                        arr_29 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */long long int) arr_4 [i_0] [i_7]);
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_29 &= ((/* implicit */unsigned char) arr_8 [i_2] [i_1] [i_0]);
                        var_30 = ((/* implicit */signed char) ((unsigned short) arr_6 [i_8] [i_1] [i_2]));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 2; i_9 < 9; i_9 += 3) 
                        {
                            arr_34 [i_9] = ((/* implicit */unsigned short) var_18);
                            var_31 = ((/* implicit */unsigned short) (~(((unsigned int) arr_4 [5LL] [(short)3]))));
                            arr_35 [i_9] [i_1] = ((/* implicit */short) arr_30 [i_9]);
                        }
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_31 [(_Bool)1]))));
                    }
                    arr_36 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_0]);
                    var_33 = max((((((/* implicit */_Bool) ((short) var_18))) ? (max((arr_4 [0U] [i_1]), (((/* implicit */unsigned int) arr_1 [i_1])))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [5U] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_25 [i_2 + 2] [(_Bool)1])) - (1)))))))), (((/* implicit */unsigned int) ((short) arr_17 [(unsigned short)3] [i_2] [(short)1] [i_1] [i_0]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                for (signed char i_12 = 1; i_12 < 9; i_12 += 3) 
                {
                    {
                        var_34 = ((/* implicit */short) ((unsigned short) ((int) arr_6 [i_0] [i_0] [i_12 + 1])));
                        var_35 |= ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-69), ((signed char)-69))))) & (3849400941U)));
                        arr_46 [i_0] [i_10] [i_10] [i_12] = ((/* implicit */long long int) arr_22 [i_0] [i_10] [i_11] [i_12 - 1]);
                        arr_47 [i_0] [i_10] [i_11] [i_12] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) & (-1LL)));
                        arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((((~(var_2))) & (((/* implicit */long long int) arr_44 [i_0] [i_10] [i_11] [i_12])))), (((/* implicit */long long int) max((((/* implicit */int) min((arr_38 [i_0] [(_Bool)1] [i_11]), (arr_38 [i_10] [i_11] [i_12])))), (((int) (unsigned short)0)))))));
                    }
                } 
            } 
        } 
        arr_49 [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        arr_52 [i_13] = ((/* implicit */long long int) arr_50 [(short)3] [i_13]);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                {
                    arr_57 [i_14] = ((/* implicit */int) min((9117065582630798357LL), (((/* implicit */long long int) (_Bool)1))));
                    var_36 = ((/* implicit */_Bool) arr_54 [i_15]);
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((~(var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (_Bool)0))))))));
    var_38 = ((/* implicit */signed char) ((((int) (signed char)-97)) & (((/* implicit */int) ((short) var_11)))));
    var_39 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (-(var_16)))))));
}
