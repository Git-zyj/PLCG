/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141499
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
    var_15 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_2 [(signed char)4] &= ((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0 - 1])), (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_16 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)81)))) / (((/* implicit */int) max(((signed char)41), ((signed char)17))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] = arr_8 [i_2 + 1] [i_0];
                var_17 = arr_5 [i_2] [i_1] [i_0 + 2];
                arr_10 [i_0] [i_0] [i_0] [i_0] = (signed char)-80;
                arr_11 [i_0] [i_1] [i_2] = arr_4 [i_0] [i_1] [i_0];
            }
            var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)81), ((signed char)27))))));
        }
        var_19 = (signed char)-91;
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
        {
            arr_16 [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_4] [i_3]))));
            arr_17 [i_3] [(signed char)17] = arr_14 [i_3] [i_4];
            var_20 = (signed char)-84;
            /* LoopSeq 4 */
            for (signed char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */signed char) min((var_21), (arr_14 [i_3] [i_3])));
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1])) <= (((/* implicit */int) (signed char)101))));
            }
            for (signed char i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    arr_25 [i_3] [i_3] [i_4] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_3])) / (((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                    var_23 *= arr_13 [i_6] [i_6 + 1];
                }
                arr_26 [i_3] = arr_14 [i_3] [i_3];
                /* LoopSeq 1 */
                for (signed char i_8 = 4; i_8 < 22; i_8 += 2) 
                {
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-43))));
                    arr_29 [i_3] [i_3] [i_6] [i_8 - 2] = (signed char)10;
                }
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    arr_32 [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_6 - 1] [i_6 + 1]))));
                    var_25 ^= arr_31 [i_4] [(signed char)8] [(signed char)8];
                    var_26 &= arr_30 [i_9] [i_4] [i_4] [i_3];
                }
                arr_33 [i_3] [i_4] [i_3] = arr_28 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_3] [i_6 - 1];
            }
            for (signed char i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
            {
                var_27 = arr_27 [i_3] [i_4] [(signed char)16] [i_4];
                var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-46))));
                /* LoopSeq 3 */
                for (signed char i_11 = 2; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    var_29 += ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_4] [i_4]))));
                    var_30 = ((/* implicit */signed char) min((var_30), ((signed char)-117)));
                    var_31 *= (signed char)-69;
                }
                for (signed char i_12 = 2; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    var_32 = arr_34 [i_12 + 1] [i_3] [i_3];
                    /* LoopSeq 2 */
                    for (signed char i_13 = 1; i_13 < 22; i_13 += 3) 
                    {
                        var_33 += (signed char)-72;
                        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-5))));
                    }
                    for (signed char i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        var_35 = arr_34 [i_14] [i_3] [i_14 + 1];
                        arr_45 [i_14] [i_3] [(signed char)10] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_12 - 1] [i_12 - 1] [(signed char)6] [i_3])) < (((/* implicit */int) arr_38 [i_12] [i_12] [i_12 + 2] [i_12 - 2]))));
                        var_36 = (signed char)-127;
                        var_37 += arr_12 [i_10] [i_3];
                    }
                }
                for (signed char i_15 = 4; i_15 < 21; i_15 += 1) 
                {
                    var_38 = arr_40 [i_10 - 1];
                    arr_48 [i_15 - 4] [i_4] [i_10] [i_4] [i_3] [i_4] = (signed char)-32;
                }
                var_39 = arr_22 [i_4];
            }
            for (signed char i_16 = 1; i_16 < 22; i_16 += 4) /* same iter space */
            {
                var_40 -= arr_38 [i_16] [i_16] [i_16 - 1] [i_16 + 1];
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
                {
                    arr_55 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = arr_27 [i_16 - 1] [i_4] [i_16] [i_17];
                    var_41 = (signed char)-77;
                    var_42 = (signed char)46;
                }
                for (signed char i_18 = 0; i_18 < 23; i_18 += 1) /* same iter space */
                {
                    var_43 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-77))));
                    /* LoopSeq 2 */
                    for (signed char i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
                    {
                        arr_62 [i_19] [(signed char)5] [i_3] [i_4] [i_3] [i_4] [(signed char)0] = arr_47 [i_16 + 1];
                        arr_63 [i_18] [i_16 + 1] [i_19] [i_18] [i_16 + 1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))));
                    }
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
                    {
                        arr_68 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_4])) < (((/* implicit */int) (signed char)83))));
                        var_44 = (signed char)97;
                    }
                }
            }
            var_45 = arr_38 [i_3] [i_3] [i_4] [i_4];
        }
        for (signed char i_21 = 0; i_21 < 23; i_21 += 2) /* same iter space */
        {
            var_46 -= arr_69 [i_21] [i_3];
            var_47 = (signed char)99;
            var_48 = (signed char)-100;
        }
        var_49 = ((/* implicit */signed char) min((var_49), (arr_44 [i_3] [(signed char)8] [i_3] [i_3] [i_3] [i_3])));
        /* LoopSeq 1 */
        for (signed char i_22 = 4; i_22 < 20; i_22 += 4) 
        {
            var_50 = (signed char)-101;
            arr_76 [i_3] [i_3] = arr_75 [i_22] [i_22 - 4];
        }
    }
    for (signed char i_23 = 0; i_23 < 13; i_23 += 1) 
    {
        arr_81 [(signed char)3] = (signed char)-26;
        arr_82 [i_23] = (signed char)97;
        arr_83 [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_38 [i_23] [i_23] [i_23] [i_23]), (arr_38 [i_23] [(signed char)10] [i_23] [i_23]))))));
        /* LoopSeq 2 */
        for (signed char i_24 = 0; i_24 < 13; i_24 += 3) /* same iter space */
        {
            arr_87 [i_23] [i_23] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_84 [i_23] [i_24])))), (((/* implicit */int) (signed char)-33))));
            var_51 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)59)) | (((/* implicit */int) arr_61 [i_24] [(signed char)3] [(signed char)4] [i_23] [(signed char)22] [(signed char)22]))));
        }
        for (signed char i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_26 = 0; i_26 < 13; i_26 += 1) 
            {
                var_52 = arr_53 [i_23] [i_25] [i_26];
                var_53 += ((/* implicit */signed char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                var_54 = arr_80 [i_25];
            }
            for (signed char i_27 = 1; i_27 < 10; i_27 += 3) 
            {
                arr_97 [i_23] [i_25] [i_25] = ((/* implicit */signed char) (-(((/* implicit */int) arr_90 [i_23] [i_25] [i_27]))));
                var_55 = arr_85 [i_23] [i_25] [(signed char)4];
                var_56 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_49 [i_23] [i_27] [i_27 - 1] [i_27 + 2])) * (((((/* implicit */int) arr_52 [i_23] [i_23])) / (((/* implicit */int) arr_91 [i_23] [i_23] [i_23])))))) * (((((/* implicit */int) (signed char)-105)) / (((/* implicit */int) (signed char)77))))));
                arr_98 [i_23] [(signed char)2] [(signed char)10] [i_25] = max(((signed char)59), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)100))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_28 = 3; i_28 < 11; i_28 += 4) 
                {
                    var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-106)))))));
                    var_58 ^= arr_36 [i_27 + 1] [i_27 + 2] [i_28] [i_28 + 1] [i_28 + 1];
                    var_59 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_65 [i_23] [i_25] [i_27] [i_28] [i_27])) / (((/* implicit */int) (signed char)-46)))))));
                }
            }
            /* vectorizable */
            for (signed char i_29 = 2; i_29 < 11; i_29 += 2) 
            {
                arr_105 [i_25] [i_25] [i_23] [i_25] = arr_56 [i_25] [i_29];
                var_60 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)95)) != (((/* implicit */int) arr_34 [i_29 + 1] [i_29] [i_29]))));
            }
            var_61 = arr_86 [i_23] [i_25];
            var_62 += (signed char)-101;
        }
        arr_106 [i_23] [i_23] &= arr_93 [i_23] [i_23] [(signed char)8] [i_23];
    }
}
