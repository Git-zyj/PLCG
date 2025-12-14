/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170943
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
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((min((max((arr_5 [(signed char)2] [(signed char)2] [i_0]), (((/* implicit */int) var_1)))), (min((var_4), (((/* implicit */int) arr_2 [i_0] [i_1])))))) << (((((((/* implicit */int) arr_2 [i_0] [i_1])) & (((/* implicit */int) arr_2 [i_0] [i_1])))) - (111))));
            var_19 *= ((/* implicit */signed char) (~(arr_1 [i_1] [i_1])));
        }
        arr_8 [i_0] = (-(max((((/* implicit */int) arr_3 [i_0] [i_0])), (var_16))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_20 &= ((/* implicit */int) (~(((arr_9 [i_3] [(unsigned char)2]) ^ (arr_9 [i_2 + 1] [i_2 + 1])))));
            arr_16 [i_2] = ((/* implicit */int) ((((((((/* implicit */unsigned int) var_0)) - (arr_1 [i_2 + 1] [i_3]))) + (((/* implicit */unsigned int) var_4)))) == ((-(max((((/* implicit */unsigned int) var_0)), (arr_13 [i_3] [i_2])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_17 [i_2 - 1] [i_3] [i_4] [i_4])) <= (arr_12 [i_2]))))));
                arr_19 [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_4] [i_2 - 1] [i_4])) <= (arr_5 [i_2] [i_2 + 1] [i_4])));
            }
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 8; i_7 += 1) 
                {
                    {
                        arr_26 [i_2] [i_5] [i_6] [i_7 + 1] = ((/* implicit */signed char) var_1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_30 [i_2] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 + 1]))));
                            arr_31 [i_6] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) arr_10 [i_7 + 2]);
                        }
                        arr_32 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) var_8)), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2]))))), ((-(((/* implicit */int) arr_21 [i_2] [i_2]))))))));
                        arr_33 [(signed char)0] [i_6] [i_5] [i_2] [(signed char)0] &= ((/* implicit */unsigned long long int) var_6);
                    }
                } 
            } 
            arr_34 [i_2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_2 [i_5] [i_2 + 1])))) - (((/* implicit */int) arr_2 [i_5] [i_5]))));
            arr_35 [i_2] [i_2] [i_5] = ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_0 [(short)20])))), (((((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_2 - 1] [i_2])) <= (((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_2 - 1] [i_2]))))));
        }
        var_22 = ((/* implicit */signed char) arr_12 [i_2]);
        /* LoopSeq 2 */
        for (signed char i_9 = 1; i_9 < 6; i_9 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [14])), (max((((/* implicit */unsigned long long int) arr_2 [i_9] [i_9])), (arr_38 [i_2] [i_2])))))))))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_3))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 3; i_10 < 6; i_10 += 2) 
        {
            arr_41 [i_10] [i_10] [7U] = ((/* implicit */signed char) var_11);
            arr_42 [i_10 + 4] [i_2 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_29 [i_2 + 1] [i_10] [i_2] [i_2] [i_10 + 2] [i_2 + 1]))));
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((arr_1 [i_2 - 1] [i_10 - 3]) <= (arr_37 [i_2 - 1])));
                var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_1))))) || (arr_6 [i_2 - 1] [i_10 + 3] [i_11])));
                arr_46 [i_10] [i_10 - 2] = ((/* implicit */unsigned int) (!(arr_6 [i_10] [i_10 + 1] [i_10])));
            }
            for (short i_12 = 1; i_12 < 6; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_27 = ((/* implicit */int) arr_39 [i_10 + 1]);
                    var_28 = ((((/* implicit */int) arr_14 [i_10 + 4])) & (((/* implicit */int) arr_14 [i_10 - 3])));
                    arr_52 [i_10] [i_12] = arr_44 [i_2] [i_2] [i_2] [3U];
                }
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_47 [i_2] [i_10] [i_10 - 3] [i_12])))))));
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_38 [i_10 - 3] [i_2 + 1]))));
            }
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+((~(arr_48 [i_2] [i_10 - 2] [i_10 - 2]))))))));
                arr_55 [i_14] [i_14] = ((/* implicit */unsigned short) var_17);
            }
            var_32 *= ((/* implicit */signed char) arr_11 [i_10]);
        }
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_57 [i_16])))))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_62 [i_17 + 2] [i_17 + 1] [i_17 + 1] [i_17 + 2])))))));
                    var_35 += ((/* implicit */unsigned char) ((arr_59 [i_15] [(unsigned char)0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_16] [i_16] [i_17 + 1])))));
                }
            } 
        } 
        var_36 = arr_59 [i_15] [i_15];
    }
    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 3) 
    {
        arr_66 [i_18] [i_18] = ((/* implicit */signed char) (-(arr_65 [i_18])));
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((arr_6 [i_18] [i_18] [(unsigned char)0]) || (((/* implicit */_Bool) var_9)))))));
        arr_67 [i_18] [i_18] = ((/* implicit */unsigned int) (~(arr_61 [i_18] [i_18])));
    }
}
