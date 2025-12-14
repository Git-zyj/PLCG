/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131715
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
    var_15 = ((/* implicit */long long int) var_2);
    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_0)))) && (((/* implicit */_Bool) (-(var_3))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_7 [(unsigned short)8] [i_0] [i_1] = min((((/* implicit */long long int) (~(arr_3 [i_0] [i_0] [(signed char)11])))), (arr_6 [i_0] [i_1] [i_0]));
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_9)))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(var_13)));
            arr_9 [(unsigned short)9] [i_1] |= var_14;
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_0)))));
                arr_14 [(unsigned char)4] [i_0] [i_2] [i_2] = ((/* implicit */long long int) var_5);
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_11 [7] [i_0] [i_0] [i_0]))));
                arr_15 [i_0] [i_1] [(_Bool)0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1]))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_0] [i_2 + 1] [1LL] [1LL])) ^ (((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_0] [i_0])))) != (((/* implicit */int) var_8)))))));
            }
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) var_12);
                arr_18 [i_0] [i_1] [i_3] = ((/* implicit */int) var_3);
            }
        }
        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_24 [2U] [11LL] [i_4] [11LL] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_9))))));
                arr_25 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) && ((!(((/* implicit */_Bool) var_2))))));
            }
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                arr_28 [i_0] [i_4 + 4] [i_6] [i_4 + 4] |= ((/* implicit */signed char) (-(((((/* implicit */int) var_6)) ^ (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_4 - 1])), (var_5))))))));
                var_23 = ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        arr_33 [i_0] [i_4] [i_4] [0] [i_4] = ((/* implicit */_Bool) var_7);
                        arr_34 [i_0] [3U] [i_4 + 2] [3U] [i_7 - 1] [i_8] |= ((/* implicit */unsigned int) max((arr_27 [i_6] [i_7 - 1] [i_8]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))));
                        arr_35 [i_0] [i_4] [8LL] [i_7] [i_7] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_6))))));
                    }
                    var_25 = ((/* implicit */long long int) var_5);
                }
                for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 2) /* same iter space */
                {
                    arr_38 [i_0] [i_4] [i_6] [(unsigned short)0] = ((/* implicit */long long int) arr_17 [i_6] [i_9 - 1]);
                    arr_39 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                    arr_40 [i_0] [i_4] [i_6] [i_9] [i_4 - 1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_4)))) & (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                }
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 2) 
                {
                    arr_45 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_8);
                    arr_46 [i_10 - 2] [i_6] [i_4] [i_4] [i_0] = var_4;
                }
                for (long long int i_11 = 1; i_11 < 11; i_11 += 2) 
                {
                    arr_50 [i_0] [i_4 - 1] [i_4] [i_11] [i_4 - 1] |= ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    arr_51 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */long long int) var_4);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_6] [i_6] [i_6]))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) var_4);
                        var_29 = ((/* implicit */long long int) max((var_29), ((+(arr_6 [i_4 + 4] [i_11 + 1] [i_11 - 1])))));
                    }
                    arr_57 [i_0] [2LL] [i_6] [i_6] [i_11 - 1] |= ((/* implicit */int) var_8);
                    arr_58 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_9);
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_62 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) var_8)))));
                arr_63 [i_14] [i_14] [i_4] [i_0] = ((/* implicit */long long int) var_4);
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_8))));
            }
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (arr_61 [i_0] [1LL] [i_4 + 3] [i_4 + 3])));
            arr_64 [(unsigned char)9] [i_4] [(unsigned char)9] = ((/* implicit */signed char) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_4 + 1] [i_0])))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            arr_67 [i_0] [i_15] [(_Bool)0] = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_66 [i_0] [i_15] [i_0])))), (((/* implicit */int) arr_59 [i_15] [(unsigned char)6]))));
            /* LoopSeq 3 */
            for (long long int i_16 = 1; i_16 < 10; i_16 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_17 = 4; i_17 < 11; i_17 += 2) 
                {
                    arr_72 [i_15] [i_15] [i_16 - 1] [0LL] [i_16 - 1] |= ((/* implicit */int) ((long long int) (!(arr_66 [i_0] [i_16] [i_17 - 2]))));
                    arr_73 [i_16] [i_16] [i_15] [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                }
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    arr_76 [i_16] = ((/* implicit */long long int) var_7);
                    arr_77 [i_16 + 1] [i_15] |= ((/* implicit */int) var_13);
                    arr_78 [i_0] [i_0] [i_16] [i_18] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_15] [i_15] [i_16]))))) ^ (((/* implicit */int) ((_Bool) ((var_12) - (var_12)))))));
                }
                arr_79 [i_16] [i_16] [i_16 + 2] = ((/* implicit */signed char) var_6);
            }
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                var_32 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))));
                var_33 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_82 [i_0] [i_15] [i_19] [i_19]))));
                arr_84 [i_15] = ((/* implicit */unsigned short) var_8);
            }
            for (signed char i_20 = 3; i_20 < 9; i_20 += 4) 
            {
                arr_87 [0ULL] [i_0] [i_15] [i_20] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_1)))));
                arr_88 [9ULL] [i_15] [i_20] [i_20 - 3] = ((/* implicit */unsigned char) ((signed char) var_10));
                arr_89 [i_0] [i_15] [i_0] [i_15] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_5)))));
            }
            arr_90 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) var_8));
            var_34 = ((/* implicit */long long int) (((+(arr_20 [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        }
        arr_91 [0ULL] = ((/* implicit */int) ((long long int) arr_69 [i_0] [i_0]));
    }
    /* LoopSeq 1 */
    for (unsigned int i_21 = 0; i_21 < 15; i_21 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_22 = 4; i_22 < 12; i_22 += 2) 
        {
            arr_97 [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_14))));
            arr_98 [i_21] |= ((/* implicit */int) var_8);
        }
        var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_92 [i_21] [i_21])), (max((((/* implicit */long long int) var_5)), (var_11)))));
        arr_99 [i_21] = ((/* implicit */signed char) (-(arr_92 [i_21] [i_21])));
    }
}
