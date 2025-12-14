/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125415
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
    var_16 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
            var_18 = ((/* implicit */unsigned long long int) (+(var_9)));
        }
        arr_5 [i_0] = arr_4 [i_0] [i_0];
        var_19 -= ((/* implicit */unsigned int) arr_0 [(signed char)2]);
    }
    var_20 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_15)))) || (var_5))) || (((/* implicit */_Bool) var_11))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_4))));
                arr_13 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
            }
            for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 4; i_6 < 10; i_6 += 2) 
                {
                    arr_21 [i_3] [i_2] [9LL] [i_5] [i_2] [i_2] = ((/* implicit */short) arr_0 [i_2]);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))) * (((/* implicit */int) (!(var_5))))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_11 [i_3 + 1]);
                    var_24 = arr_18 [i_3 - 1] [i_2] [i_7 - 1];
                }
                for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 4) 
                {
                    var_25 = ((/* implicit */unsigned short) var_11);
                    var_26 = ((/* implicit */long long int) arr_23 [i_2] [i_2] [(short)0] [i_8 - 1] [(_Bool)1]);
                }
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_27 = ((/* implicit */long long int) var_8);
                    var_28 = ((/* implicit */long long int) var_7);
                }
                for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    arr_33 [i_2] [i_3] [i_2] [i_2] = var_1;
                    var_29 ^= ((/* implicit */short) arr_20 [5LL] [i_10] [i_2] [i_3] [i_2]);
                    arr_34 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    var_30 = ((/* implicit */unsigned long long int) (((((~(arr_11 [i_5]))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_16 [i_10] [i_2] [i_2] [i_2])) - (53113)))));
                }
            }
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (~(((arr_19 [(_Bool)1] [i_3] [(unsigned char)7] [(unsigned short)2] [(_Bool)1] [i_3 - 1]) | (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_39 [i_2] = ((/* implicit */unsigned char) arr_25 [3] [i_3 - 1]);
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_30 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
                }
                /* vectorizable */
                for (unsigned int i_13 = 2; i_13 < 8; i_13 += 1) 
                {
                    var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) || (((/* implicit */_Bool) arr_40 [i_3 + 1] [i_2]))));
                    var_34 = ((/* implicit */short) arr_6 [i_13 + 3] [i_3 - 1]);
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_28 [4LL] [i_3 + 1] [i_3 - 1] [i_3 - 1]))));
                    arr_43 [i_13 + 2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 540617027288140678ULL))));
                }
                /* LoopSeq 1 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    var_36 -= var_10;
                    var_37 = ((/* implicit */unsigned char) (~(((17304111962686544845ULL) * (((/* implicit */unsigned long long int) 2689843448716158513LL))))));
                    arr_46 [i_2] [i_2] = ((/* implicit */unsigned int) var_15);
                    var_38 = ((/* implicit */long long int) var_6);
                    var_39 = ((/* implicit */unsigned char) ((arr_40 [i_3] [i_14 - 1]) << (((arr_40 [i_2] [i_14 - 1]) ^ (arr_40 [i_2] [i_14 - 1])))));
                }
                var_40 ^= ((/* implicit */int) (((+(arr_26 [i_2] [i_3 - 1] [i_3 + 1] [i_11] [i_3 - 1]))) ^ (((/* implicit */unsigned long long int) (~(arr_42 [i_3 - 1] [5ULL] [i_3] [i_3 + 1]))))));
            }
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_22 [i_3] [i_2] [i_2])))) || (((/* implicit */_Bool) arr_3 [i_3] [i_15]))));
                var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) arr_22 [i_15] [(short)10] [i_2]))));
                var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (+(((/* implicit */int) ((arr_32 [i_3 + 1] [i_3 + 1]) <= (arr_20 [i_15] [i_15] [i_15] [i_15] [i_3 - 1])))))))));
            }
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
            {
                var_44 = ((/* implicit */int) (+(var_0)));
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) arr_12 [i_3 + 1] [i_3] [i_2]))));
            }
            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_49 [i_3] [i_2] [i_2] [i_2]))));
        }
        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_19 = 1; i_19 < 10; i_19 += 2) 
                {
                    var_47 = ((/* implicit */_Bool) arr_38 [i_19 + 1] [i_17] [i_17]);
                    var_48 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_19] [(_Bool)1] [(short)0]))));
                    var_49 -= var_2;
                    var_50 = ((/* implicit */unsigned int) arr_7 [i_2]);
                }
                for (unsigned int i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    var_51 = ((/* implicit */long long int) (((~(arr_24 [i_2] [i_17]))) << (((var_9) + (1137224652)))));
                    var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) var_15))));
                    var_53 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_1)));
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) arr_16 [i_21] [5U] [i_17] [i_2]))));
                        arr_67 [i_2] [i_17] [i_2] [i_20] [i_21] = ((/* implicit */signed char) arr_59 [i_2] [(unsigned char)7] [(unsigned char)7] [i_2]);
                        var_55 &= ((/* implicit */unsigned int) var_15);
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_56 = (+(((/* implicit */int) arr_31 [i_22] [(unsigned char)2] [i_18] [i_17] [i_2])));
                        arr_72 [i_2] [i_2] [i_17] [i_2] [i_18] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_12);
                        var_57 = ((/* implicit */_Bool) min((var_57), ((!(((/* implicit */_Bool) 540617027288140678ULL))))));
                        var_58 = arr_65 [i_22] [i_22] [i_20] [i_18] [i_17] [i_2] [i_2];
                        arr_73 [i_2] [i_2] [0ULL] [i_20] [i_2] = arr_1 [i_2];
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        arr_76 [(signed char)6] [i_2] [i_17] [i_18] [i_20] [6ULL] [i_23] = ((/* implicit */unsigned long long int) var_2);
                        var_59 *= ((/* implicit */unsigned int) arr_9 [6U] [i_17] [i_2]);
                        var_60 -= ((/* implicit */unsigned char) var_8);
                    }
                    var_61 |= ((/* implicit */unsigned long long int) var_12);
                }
                var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (arr_40 [i_18] [i_18]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [8LL] [i_17]) == (arr_4 [i_18] [i_2]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_24 = 1; i_24 < 9; i_24 += 1) 
                {
                    arr_81 [(signed char)10] [6U] [i_18] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) var_7);
                    var_63 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
                    arr_82 [i_2] [i_2] [i_17] [i_2] [i_24] [i_24] = ((/* implicit */_Bool) ((arr_28 [i_2] [i_17] [i_24 - 1] [i_17]) >> (((arr_28 [i_2] [i_17] [i_24 - 1] [2LL]) - (3437193081U)))));
                    arr_83 [0LL] [i_17] [i_17] [i_2] [0LL] [0LL] = ((/* implicit */_Bool) ((arr_26 [i_24 - 1] [i_17] [i_18] [i_18] [i_2]) ^ (arr_26 [i_2] [i_17] [i_18] [i_18] [i_24 + 2])));
                }
            }
            arr_84 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_78 [i_2] [i_2] [i_2] [i_17] [i_17])) + (((/* implicit */int) arr_6 [i_2] [i_2])))) + (((/* implicit */int) arr_6 [(signed char)7] [i_17]))));
            var_64 = ((/* implicit */unsigned char) var_8);
            var_65 |= ((/* implicit */long long int) ((((((/* implicit */int) var_10)) * (((/* implicit */int) arr_71 [i_17] [i_17])))) / (((/* implicit */int) arr_71 [i_17] [i_17]))));
        }
        /* LoopSeq 1 */
        for (signed char i_25 = 1; i_25 < 9; i_25 += 4) 
        {
            var_66 = ((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) * (((/* implicit */int) var_12))));
            arr_87 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_25 + 1])))))));
        }
        var_67 = ((/* implicit */long long int) var_1);
    }
}
