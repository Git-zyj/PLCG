/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145293
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * ((((-(((/* implicit */int) var_3)))) & (((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) max((arr_1 [(unsigned char)14]), (((/* implicit */long long int) arr_0 [i_0 + 1])))))))) <= (((/* implicit */int) ((unsigned char) (((-9223372036854775807LL - 1LL)) & (-9223372036854775800LL)))))));
        var_14 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0]) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775781LL))) + (89LL))) - (62LL))))))))), (arr_1 [i_0]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) ((int) var_7));
                var_16 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (unsigned char)64)))));
                var_17 = (~(arr_5 [i_0] [i_0]));
                var_18 = ((/* implicit */long long int) ((unsigned char) arr_7 [(unsigned short)0] [i_1] [(unsigned char)4]));
            }
            /* LoopSeq 1 */
            for (long long int i_3 = 4; i_3 < 18; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                    arr_17 [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_11 [(unsigned char)10] [i_1])) << ((((-(((/* implicit */int) arr_14 [i_3 - 1] [i_1])))) + (56138)))));
                    arr_18 [(unsigned char)10] [i_0 + 1] = ((/* implicit */long long int) var_11);
                    var_20 = ((/* implicit */unsigned int) arr_11 [i_1] [i_4]);
                }
                var_21 = ((long long int) ((arr_0 [(unsigned short)18]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 2] [i_1] [i_1] [2U] [i_1] [i_3])))));
                var_22 = ((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2] [i_3 - 4]);
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) arr_4 [i_1]);
                        var_24 |= ((/* implicit */int) ((unsigned short) (~(4197910195U))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */unsigned short) (~(arr_23 [i_0 - 2] [i_0 + 1] [i_0 - 2])));
        arr_25 [i_0] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) arr_22 [i_7] [i_8] [3U] [i_8]);
            var_27 = ((/* implicit */unsigned short) var_2);
            var_28 = arr_22 [(unsigned short)16] [i_8 + 1] [i_7] [i_7];
            var_29 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8 + 1])))))));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)3028)) | ((~(((/* implicit */int) (unsigned short)34493)))))), (((/* implicit */int) arr_16 [5LL] [i_9] [i_9] [i_9] [i_7] [8ULL]))));
            var_31 = arr_19 [i_7] [i_9] [i_7];
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                {
                    var_32 = ((/* implicit */long long int) min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10]))) / (arr_8 [i_7] [i_11] [i_11]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_11 [i_10] [i_11])) % (arr_24 [i_7] [i_7] [(unsigned char)17] [i_10] [i_11])))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((long long int) (+(var_6)))))));
                        var_34 = ((/* implicit */unsigned short) arr_32 [i_12] [i_10]);
                        var_35 = ((/* implicit */unsigned short) arr_24 [i_7] [i_10] [i_11] [i_12] [i_12 + 1]);
                    }
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        arr_44 [i_7] [i_10] [i_11] [(unsigned short)10] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 622360518U)), (-6602457766552702875LL)));
                        var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)4] [i_10] [i_11]))) <= (arr_36 [i_10])))) <= (((/* implicit */int) arr_6 [i_7])))), ((!(((/* implicit */_Bool) min((arr_30 [7U]), (((/* implicit */unsigned int) arr_38 [i_7] [i_7])))))))));
                        var_37 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_13] [i_11] [i_10])) ^ (((/* implicit */int) arr_20 [i_7] [i_10] [(signed char)7]))))) & (((((/* implicit */long long int) 121801231U)) | (-6602457766552702875LL))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_34 [i_13] [i_11] [(unsigned char)12]))) || (((/* implicit */_Bool) arr_41 [i_7] [i_10] [i_10])))))));
                        arr_45 [(signed char)5] [(signed char)5] [i_10] [i_10] [i_11] [i_7] = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_13] [i_7])) * (((/* implicit */int) arr_37 [6LL]))))), (((((/* implicit */long long int) arr_11 [i_11] [7LL])) - (var_9)))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_7] [17U] [i_11] [i_14 + 2])))))));
                        arr_50 [i_14] = ((/* implicit */_Bool) ((1914188690876738615LL) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        arr_51 [i_7] [i_7] [i_10] [i_14] [i_7] = ((/* implicit */long long int) ((unsigned long long int) -4430254284159971811LL));
                        arr_52 [i_7] [i_14] = ((/* implicit */_Bool) (~(3210486522U)));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 1; i_15 < 15; i_15 += 3) 
                    {
                        arr_55 [i_15] = ((/* implicit */int) arr_24 [i_15 + 1] [i_15 - 1] [i_15] [i_15] [i_15 - 1]);
                        var_39 |= ((/* implicit */long long int) arr_24 [i_7] [i_7] [i_10] [i_11] [i_7]);
                        arr_56 [i_7] [i_7] [i_10] [i_10] [i_11] [i_15] = ((/* implicit */unsigned int) ((((arr_3 [i_10]) + (9223372036854775807LL))) << (((arr_43 [i_7] [i_7] [i_7] [i_7]) - (5033018068541942764LL)))));
                        arr_57 [i_7] [8LL] [i_11] [i_15] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_53 [i_7] [i_15 - 1] [i_15] [i_15] [i_11]))));
                        var_40 &= ((/* implicit */long long int) ((unsigned long long int) arr_22 [i_7] [i_10] [i_11] [i_15 - 1]));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        var_41 &= ((/* implicit */unsigned char) min((-6602457766552702897LL), (((/* implicit */long long int) (unsigned short)24161))));
        var_42 = ((/* implicit */unsigned long long int) ((unsigned char) (((-(arr_59 [i_16]))) + ((-(arr_58 [i_16]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
    {
        for (signed char i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            {
                var_43 = ((/* implicit */unsigned char) arr_43 [5ULL] [i_17] [i_17] [i_17]);
                arr_66 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_18] [i_17])) <= (((((/* implicit */int) ((signed char) arr_11 [i_17] [3LL]))) + (((1605586786) - (((/* implicit */int) (unsigned char)249))))))));
                var_44 = ((/* implicit */unsigned short) arr_38 [i_17] [i_17]);
            }
        } 
    } 
}
