/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115859
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
    var_13 = ((/* implicit */unsigned short) max((((((-7490767845424453266LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))))) ? (((((/* implicit */long long int) var_12)) * (23LL))) : (((/* implicit */long long int) ((-5) * (((/* implicit */int) var_3))))))), (var_11)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((((long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)14))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (unsigned short)65510)))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) var_11)) : (((unsigned long long int) min((arr_0 [i_0] [i_0]), (arr_2 [i_0]))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19748)))));
            var_17 += ((/* implicit */long long int) ((short) ((unsigned short) arr_5 [i_1] [i_1])));
        }
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_18 += ((/* implicit */unsigned short) ((((int) arr_8 [i_1])) * (((/* implicit */int) ((arr_11 [2LL] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                var_19 = -4287257978187997301LL;
            }
            for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45807)) && (((/* implicit */_Bool) arr_12 [i_5]))))) != (((/* implicit */int) (unsigned short)0))));
                var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19729)))))));
            }
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_3])))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((+(14626307184585450873ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_1])))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_24 = 9223372036854775807LL;
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_2 [13LL])) ? (arr_5 [i_1] [i_1]) : (9ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)19733)))))));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_6])) * (((/* implicit */int) (unsigned short)34753))))) : (((var_4) * (((/* implicit */unsigned long long int) arr_0 [i_1] [i_3])))))))));
                /* LoopSeq 3 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_27 = ((unsigned short) (-(arr_12 [i_1])));
                    arr_20 [i_1] [i_7] [i_3] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) || ((!(((/* implicit */_Bool) arr_18 [i_7] [i_3] [i_3] [i_3] [i_1]))))));
                }
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_28 |= ((/* implicit */int) arr_22 [i_1] [i_3] [i_3] [2] [i_1] [i_1]);
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((int) arr_7 [i_1])))));
                }
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    arr_25 [i_1] [i_9] [i_1] [i_1] [i_9] = -8070046091109317471LL;
                    arr_26 [i_9] = arr_14 [i_1] [i_1] [i_1];
                }
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        arr_33 [i_10] [i_10] [i_11] [9ULL] [i_11 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_11 + 1] [6ULL]))));
                        var_30 = ((/* implicit */long long int) (((-(var_4))) % (((/* implicit */unsigned long long int) ((arr_7 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))))))));
                        arr_34 [i_1] [i_11] [i_6] [6LL] [6LL] [6LL] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_3] [i_6] [i_11 - 2] [i_11])) || (((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6] [i_11 + 2] [i_6]))));
                        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_31 [i_11] [i_11 + 1] [(unsigned short)2] [i_11] [i_11]))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_10])) ? (((/* implicit */long long int) arr_8 [i_1])) : (arr_32 [i_1] [(unsigned short)2] [i_6] [i_10] [i_6] [i_12])));
                        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    var_34 = (-(((/* implicit */int) (unsigned short)65522)));
                    /* LoopSeq 2 */
                    for (int i_13 = 3; i_13 < 10; i_13 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(unsigned short)6] [(unsigned short)6] [i_6] [(unsigned short)6] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_1] [i_3] [i_6] [i_10] [i_13 - 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [i_6] [i_3] [i_13]))))) : (((((/* implicit */_Bool) -9223372036854775799LL)) ? (arr_32 [i_1] [i_13] [(short)12] [i_10] [i_13 - 3] [i_13 + 2]) : (var_11)))));
                        var_36 = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_1] [i_1] [i_6] [i_1] [i_1]))));
                        arr_40 [i_13] [i_13] [i_6] [i_10] [(unsigned short)1] [6] = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_1] [i_1] [9ULL] [(short)1] [i_13 - 2])) % (((/* implicit */int) arr_14 [i_1] [i_3] [i_6]))));
                        arr_41 [i_13 + 1] [i_13] [i_13] [i_6] [i_13] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_13] [(unsigned short)7] [i_13 + 1] [i_13 - 3] [i_13] [i_13 + 2])) / (-1547537904)));
                    }
                    for (int i_14 = 3; i_14 < 10; i_14 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (unsigned short)65510))));
                        arr_45 [i_1] [i_1] [i_6] [i_6] [1LL] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) 3507302260784732062LL)) ? (-3507302260784732062LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 137438953471LL))))))));
                    }
                }
                for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23185))) * (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    var_39 = ((/* implicit */long long int) ((int) (-(-3507302260784732080LL))));
                }
            }
            for (long long int i_16 = 2; i_16 < 12; i_16 += 2) 
            {
                var_40 = ((/* implicit */int) 8681538999163792750LL);
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_3] [8] [i_16] [i_16 - 1]))));
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) arr_39 [i_1] [i_3] [i_1] [i_16 - 1] [8]))));
                    arr_56 [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_9))))));
                }
            }
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8191LL)) ? (arr_2 [i_3]) : (9223372036854775789LL)));
        }
    }
    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
    {
        var_44 = ((/* implicit */unsigned short) arr_6 [i_18] [i_18]);
        var_45 *= ((/* implicit */short) ((max((min((5108693247401849028LL), (((/* implicit */long long int) (unsigned short)8)))), ((~(var_5))))) * (((/* implicit */long long int) max((max((((/* implicit */int) arr_15 [i_18] [i_18] [(unsigned short)5])), (arr_8 [i_18]))), (((/* implicit */int) ((unsigned short) arr_4 [i_18] [i_18]))))))));
        var_46 = ((/* implicit */unsigned short) ((max((min((arr_58 [i_18] [i_18]), (((/* implicit */unsigned long long int) arr_22 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_18] [(unsigned short)11] [i_18] [i_18] [i_18])))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_50 [i_18] [i_18] [i_18] [i_18]), (arr_50 [(unsigned short)0] [i_18] [i_18] [i_18])))))));
        arr_59 [i_18] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (max((arr_31 [i_18] [i_18] [i_18] [i_18] [12LL]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-5319039314799039235LL) != (arr_22 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))))))));
        arr_60 [i_18] [i_18] = ((/* implicit */long long int) ((max((arr_38 [i_18] [i_18] [(unsigned short)6] [i_18] [6LL] [i_18] [i_18]), (arr_38 [i_18] [i_18] [i_18] [(unsigned short)10] [(unsigned short)8] [i_18] [i_18]))) != (arr_2 [i_18])));
    }
    for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
    {
        var_47 = ((/* implicit */long long int) min((((((/* implicit */_Bool) -3507302260784732055LL)) ? (((((/* implicit */int) arr_61 [i_19] [i_19])) / (((/* implicit */int) (unsigned short)65521)))) : (((/* implicit */int) (unsigned short)65522)))), (((/* implicit */int) max((arr_61 [i_19] [i_19]), (arr_61 [i_19] [10LL]))))));
        arr_64 [i_19] = ((int) 6285493014510943546ULL);
        arr_65 [i_19] = ((/* implicit */long long int) (-(min((var_12), (((/* implicit */int) arr_61 [i_19] [i_19]))))));
        var_48 = max((((max((8204LL), (((/* implicit */long long int) var_7)))) * (((5108693247401849050LL) / (var_8))))), (((/* implicit */long long int) max((arr_62 [i_19]), (((/* implicit */int) min(((unsigned short)65533), (((/* implicit */unsigned short) (short)-27212)))))))));
        var_49 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_19] [i_19])) / (((/* implicit */int) (unsigned short)65522))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_61 [i_19] [i_19]), ((unsigned short)65520))))) : (((((/* implicit */_Bool) (unsigned short)24776)) ? (-4833620575679990207LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) * (max((((/* implicit */unsigned long long int) ((-9223372036854775780LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29126)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) % (10110690095128348486ULL))))));
    }
    var_50 = ((/* implicit */short) max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned short)43865))));
    var_51 &= ((((max((9223372036854775794LL), (63LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50970))))) / (max((max((8887596867792836430LL), (0LL))), (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
}
