/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108994
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
    var_13 = var_6;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 -= (signed char)59;
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            arr_5 [(signed char)6] [i_1] [i_0] = (signed char)59;
            var_15 = (signed char)81;
            var_16 ^= (signed char)-57;
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                arr_10 [i_2] = (signed char)59;
                var_17 = ((/* implicit */signed char) min((var_17), ((signed char)-52)));
                var_18 = (signed char)59;
            }
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 20; i_4 += 1) 
                {
                    arr_16 [i_0] [i_0] [(signed char)21] [i_0] [(signed char)10] [i_4] = (signed char)-37;
                    var_19 += (signed char)-59;
                }
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_20 ^= (signed char)-81;
                    /* LoopSeq 2 */
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        var_21 = (signed char)58;
                        var_22 = ((/* implicit */signed char) max((var_22), ((signed char)59)));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_24 [i_7] [i_7] [i_7] [(signed char)14] = (signed char)-69;
                        arr_25 [i_5] [(signed char)20] &= (signed char)-59;
                        var_23 = ((/* implicit */signed char) max((var_23), ((signed char)57)));
                    }
                }
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    arr_30 [i_0] [i_1] [i_8] [i_8] [i_8 + 1] [(signed char)13] = (signed char)-69;
                    arr_31 [i_8] [i_8] [i_8] [i_0] = (signed char)58;
                    var_24 ^= (signed char)-82;
                    var_25 += (signed char)-64;
                }
                for (signed char i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_0] [(signed char)8] [i_3] [i_10] &= (signed char)118;
                        arr_39 [i_3] [i_1] [i_1] [i_10] &= (signed char)58;
                        var_26 -= (signed char)-98;
                        arr_40 [i_9] [i_9] [i_1 - 3] [i_1 - 3] [i_9] = (signed char)84;
                    }
                    var_27 = ((/* implicit */signed char) max((var_27), ((signed char)68)));
                }
                arr_41 [i_1] [i_3] = (signed char)4;
            }
        }
    }
    for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_28 = (signed char)-21;
        var_29 = (signed char)54;
        var_30 += (signed char)112;
        var_31 = ((/* implicit */signed char) max((var_31), ((signed char)68)));
    }
    /* vectorizable */
    for (signed char i_12 = 1; i_12 < 12; i_12 += 2) 
    {
        var_32 += (signed char)-68;
        var_33 &= (signed char)-59;
        arr_49 [i_12] = (signed char)52;
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_34 = (signed char)-88;
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                var_35 &= (signed char)0;
                var_36 += (signed char)(-127 - 1);
            }
            /* LoopSeq 3 */
            for (signed char i_15 = 1; i_15 < 12; i_15 += 3) 
            {
                var_37 = (signed char)62;
                arr_59 [i_12] = (signed char)24;
            }
            for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                arr_62 [i_13] [i_13] [i_13] [i_13] = (signed char)-51;
                arr_63 [i_12] [i_13] [i_16] &= (signed char)-69;
                arr_64 [i_12] [i_13] [i_16] = (signed char)-52;
                arr_65 [i_12] [i_12] = (signed char)127;
            }
            for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                arr_68 [i_12] [i_12] = (signed char)-112;
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    var_38 += (signed char)15;
                    var_39 = (signed char)-118;
                }
                var_40 += (signed char)81;
                arr_71 [i_13] [i_13] [(signed char)13] |= (signed char)80;
                arr_72 [(signed char)13] [i_13] [(signed char)13] = (signed char)-47;
            }
            var_41 = (signed char)-21;
        }
        arr_73 [i_12] = (signed char)10;
    }
    for (signed char i_19 = 3; i_19 < 22; i_19 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_20 = 1; i_20 < 19; i_20 += 2) 
        {
            arr_78 [i_19] [i_20 + 3] [i_19] = (signed char)66;
            var_42 = (signed char)25;
            var_43 -= (signed char)-113;
            var_44 -= (signed char)127;
            var_45 = (signed char)0;
        }
        for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            var_46 -= (signed char)-62;
            var_47 = (signed char)-60;
            var_48 += (signed char)102;
        }
        /* vectorizable */
        for (signed char i_22 = 2; i_22 < 21; i_22 += 3) 
        {
            arr_84 [i_19] = (signed char)95;
            var_49 = (signed char)-102;
        }
        for (signed char i_23 = 0; i_23 < 23; i_23 += 2) 
        {
            arr_89 [i_19] [i_19] = (signed char)-17;
            /* LoopSeq 1 */
            for (signed char i_24 = 2; i_24 < 22; i_24 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_25 = 3; i_25 < 21; i_25 += 3) 
                {
                    var_50 += (signed char)-61;
                    arr_96 [i_23] [i_24] &= (signed char)63;
                    var_51 = ((/* implicit */signed char) min((var_51), ((signed char)116)));
                    arr_97 [i_19] [(signed char)3] [i_24] [i_19] = (signed char)102;
                }
                var_52 ^= (signed char)0;
                var_53 = (signed char)0;
                var_54 ^= (signed char)(-127 - 1);
            }
            var_55 = (signed char)112;
            arr_98 [i_19] [i_19] = (signed char)17;
        }
        var_56 += (signed char)-114;
        arr_99 [i_19] = (signed char)-101;
    }
    var_57 = var_1;
    var_58 += var_3;
}
