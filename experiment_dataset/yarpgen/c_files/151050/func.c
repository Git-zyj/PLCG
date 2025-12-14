/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151050
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (unsigned char)238)))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 2; i_3 < 24; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */int) var_0);
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((long long int) var_2)));
    }
    for (short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_23 = min((((/* implicit */unsigned char) var_11)), (min((arr_0 [(signed char)11]), (arr_0 [i_4]))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_24 [i_4] [i_4] [i_6] [i_7] = (+(((long long int) ((signed char) var_18))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_24 = max((((/* implicit */long long int) 0U)), (((long long int) arr_9 [i_7 - 1])));
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_7 - 1] [i_7 + 2] [i_7 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_4] [i_7 + 1] [i_7 + 3] [i_4]))))) && (((/* implicit */_Bool) max((((/* implicit */int) (signed char)7)), (var_17))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                for (signed char i_11 = 1; i_11 < 11; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_4]))));
                        arr_36 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_11 + 3]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */short) arr_10 [i_9 - 1] [i_11]);
                            var_27 *= ((/* implicit */unsigned char) ((signed char) ((unsigned char) var_11)));
                            arr_39 [i_4] [i_9] [i_4] [i_11] [i_12] [i_10] [i_10] = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_2 [i_9 + 1] [i_11 + 2])) : (((/* implicit */int) arr_33 [(unsigned char)5] [i_9 + 2])));
                            var_28 = ((/* implicit */int) ((short) arr_22 [i_4]));
                            arr_40 [i_4] [i_9] [i_10] [i_4] [i_12] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (((signed char) arr_33 [i_4] [i_9 + 2]))));
                            arr_44 [3] [i_4] [i_10] [i_11 + 2] [i_13] = ((/* implicit */unsigned short) ((int) var_18));
                            var_30 = ((/* implicit */unsigned char) arr_35 [i_9 - 1] [i_11 + 2] [i_13] [i_13 + 2]);
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (arr_5 [i_14] [i_9 + 1] [i_4] [i_4])));
                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) << (((((/* implicit */int) var_1)) - (39))))) ^ ((-(((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        {
                            arr_53 [i_4] [i_9] [i_14] [i_9] [i_9 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_37 [i_9] [i_9 - 1] [i_9])) : (((/* implicit */int) var_2))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)4)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 3) 
                {
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_17 + 3] [i_9 + 2])) < (((/* implicit */int) arr_0 [i_9 + 1]))));
                            arr_60 [i_4] [i_4] [i_4] [i_9] [i_4] = ((/* implicit */long long int) var_17);
                            var_35 ^= ((/* implicit */unsigned char) ((unsigned short) var_17));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_2))));
        }
        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            var_37 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_19] [i_4])), (((int) var_8))));
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                for (short i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 3; i_22 < 10; i_22 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) min((-927102596), (((/* implicit */int) arr_17 [i_21] [i_22]))))) ? (((/* implicit */unsigned long long int) (+(arr_68 [i_4] [i_4])))) : ((-(3461200949658536654ULL)))))))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((long long int) var_10)) : (((((/* implicit */_Bool) arr_2 [i_22 + 3] [i_22])) ? (var_4) : (((/* implicit */long long int) arr_54 [i_22] [i_22 + 2] [i_22 - 1] [i_22 + 4] [i_22] [i_22 + 1]))))));
                            arr_70 [i_4] [i_4] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_54 [i_21] [i_22 + 1] [i_22 + 1] [i_22 + 2] [i_22 + 2] [i_22])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)8)))));
                            arr_71 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 1152921504590069760LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_22 + 3] [i_22 + 3] [i_22 + 4]))) : (((long long int) 1799905255))));
                        }
                        arr_72 [i_4] [i_4] [(unsigned char)5] [i_4] = ((/* implicit */unsigned char) ((int) arr_19 [i_19]));
                    }
                } 
            } 
            var_40 = arr_7 [i_4] [i_4] [i_19];
        }
        for (int i_23 = 0; i_23 < 14; i_23 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_24 = 1; i_24 < 13; i_24 += 2) 
            {
                for (int i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    {
                        var_41 = ((/* implicit */long long int) var_8);
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned short)24415)))) < (((/* implicit */int) ((unsigned char) arr_54 [i_4] [i_24 - 1] [i_4] [i_24] [(unsigned short)10] [i_4]))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_26 = 1; i_26 < 12; i_26 += 2) /* same iter space */
                        {
                            var_43 ^= ((/* implicit */unsigned char) (signed char)-8);
                            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_4] [i_25] [i_26 - 1])) : (((/* implicit */int) arr_37 [i_4] [i_24] [i_24]))))) && (((/* implicit */_Bool) ((((/* implicit */int) max((arr_6 [i_4] [i_4] [i_4]), (((/* implicit */short) var_3))))) >> (((-1543540309) + (1543540331)))))))))));
                        }
                        for (unsigned char i_27 = 1; i_27 < 12; i_27 += 2) /* same iter space */
                        {
                            var_45 = ((/* implicit */short) var_5);
                            var_46 = ((((/* implicit */int) min((arr_85 [i_4] [i_4] [i_24] [i_4] [i_24 + 1] [i_4]), ((unsigned short)24394)))) / (((/* implicit */int) ((signed char) var_3))));
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((arr_84 [i_27 + 1]), (arr_84 [i_27 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4])))));
                            arr_90 [i_4] [i_4] [i_4] [i_25] [i_4] = ((/* implicit */unsigned long long int) ((int) var_1));
                        }
                        for (unsigned char i_28 = 1; i_28 < 12; i_28 += 2) /* same iter space */
                        {
                            var_48 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_8 [i_23] [i_23] [i_23] [i_23]), (((/* implicit */unsigned char) var_14)))))));
                            var_49 = min((max((arr_3 [i_28 + 2] [i_28 - 1]), ((unsigned char)16))), (min((arr_3 [i_28] [i_28 + 2]), (arr_3 [i_28] [i_28 + 1]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_29 = 1; i_29 < 12; i_29 += 2) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) arr_15 [i_4] [i_4]))));
                            var_51 = arr_30 [i_24] [i_24] [i_24 + 1];
                            var_52 += arr_33 [i_25] [i_23];
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_30 = 0; i_30 < 14; i_30 += 3) 
            {
                for (unsigned short i_31 = 0; i_31 < 14; i_31 += 1) 
                {
                    {
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_64 [i_31] [6U] [i_23])) ? (((/* implicit */int) min((arr_64 [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) var_14))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_79 [i_4] [i_23] [i_30] [i_31] [i_31] [i_31])), (arr_64 [i_4] [i_23] [i_23]))))));
                        var_54 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_8))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_31] [i_23]))) < (var_19)))))), (((/* implicit */int) min((arr_99 [i_4] [i_23] [i_31]), (((/* implicit */unsigned short) var_3)))))));
                        var_55 = min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_2))))))), (arr_41 [i_4] [i_23] [i_23] [i_4] [i_31]));
                        var_56 = (i_4 % 2 == 0) ? (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_4])) << (((max((((/* implicit */unsigned long long int) var_18)), (var_15))) - (4922252758469227130ULL)))))), (9223372036854775807LL)))) : (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_4])) << (((((max((((/* implicit */unsigned long long int) var_18)), (var_15))) - (4922252758469227130ULL))) - (17ULL)))))), (9223372036854775807LL))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_32 = 0; i_32 < 14; i_32 += 2) 
                        {
                            var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) (~(((/* implicit */int) arr_98 [i_4] [i_30] [i_32] [i_31])))))));
                            var_58 ^= ((/* implicit */long long int) arr_1 [i_30]);
                            var_59 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_14 [i_4])))) ? (((long long int) arr_63 [i_4])) : (((/* implicit */long long int) ((/* implicit */int) arr_97 [i_4] [4] [8])))));
                            var_60 = ((/* implicit */unsigned char) 17546948780185083980ULL);
                        }
                        for (unsigned char i_33 = 0; i_33 < 14; i_33 += 3) 
                        {
                            var_61 = ((/* implicit */unsigned short) arr_73 [i_4]);
                            arr_105 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_63 [i_30]);
                            var_62 = min((((/* implicit */long long int) ((short) var_13))), (((long long int) arr_78 [i_4] [i_4] [i_30])));
                        }
                    }
                } 
            } 
            arr_106 [i_4] [i_4] [i_4] = ((/* implicit */int) ((signed char) min((var_4), (((/* implicit */long long int) arr_30 [i_4] [i_23] [i_4])))));
            var_63 = ((/* implicit */unsigned char) min((((arr_84 [i_23]) >> (((arr_84 [i_23]) - (724903086U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_4] [(unsigned char)10])) != (((/* implicit */int) arr_17 [i_4] [i_4])))))));
        }
    }
}
