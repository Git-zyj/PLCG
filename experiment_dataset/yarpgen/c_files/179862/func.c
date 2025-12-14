/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179862
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_10))) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (363465857) : (((/* implicit */int) (unsigned short)47394))))));
        var_15 = ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)1] [i_1] [(unsigned short)1])) && (((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (arr_1 [i_1]))))))), (((((/* implicit */int) min((arr_0 [i_0 - 2] [i_0 - 2]), (arr_0 [i_1] [i_1])))) / (arr_3 [1])))));
                    var_16 = (~(min((((/* implicit */long long int) arr_6 [i_2 - 2] [i_2 - 3] [i_2])), (arr_4 [i_2 - 2] [i_2 - 3] [i_2 + 1]))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned short) 1568030731U)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) arr_3 [i_0 + 2]))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [4] [2] [i_1] [i_1])) ? (((/* implicit */unsigned int) -460445626)) : (arr_1 [i_0 - 1])))) ? (max((var_14), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) arr_8 [i_2] [i_2] [i_1] [i_1] [5] [i_2]))) <= (((arr_8 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2]) % (arr_8 [i_2] [i_0 - 2] [i_2] [i_2] [i_2 + 1] [i_3])))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_1 [i_0 - 2]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (var_2)));
                            var_22 = arr_4 [i_5 + 1] [i_5 - 1] [i_5 + 1];
                            var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 16383U)) ? (arr_15 [i_2] [i_2] [i_2] [i_4] [i_5] [i_2]) : (arr_15 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) arr_18 [i_0] [i_1] [i_2] [6LL] [i_4] [i_6]);
                            var_25 = (~(-458740686));
                        }
                        arr_21 [i_0] [9LL] [9LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_10);
                        var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((((/* implicit */_Bool) -4926711876494731530LL)) ? (((/* implicit */int) arr_12 [i_0] [9U] [i_2] [i_2])) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0] [i_4])))) : (((/* implicit */int) ((arr_20 [i_0] [i_2 - 2] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_0]))))))));
                    }
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        var_27 |= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_7])), (arr_6 [i_0] [10LL] [i_0])))) ? (max((((/* implicit */long long int) var_11)), (arr_5 [i_0] [i_0] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) == (((/* implicit */long long int) arr_10 [i_0] [(unsigned short)7] [i_0] [(unsigned short)6])))))))) + (9223372036854775807LL))) << (((((max((arr_17 [i_0] [i_0 - 2] [i_0]), (arr_17 [i_0 + 1] [(_Bool)0] [i_0]))) + (1583353548))) - (59)))));
                        var_28 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_18 [i_2 - 1] [i_2] [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 3])))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 *= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_0])) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47394))) : ((~(arr_5 [i_0] [i_8 + 1] [i_0])))))));
                                var_30 = 0ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 19; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_11 = 3; i_11 < 16; i_11 += 3) 
        {
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */long long int) 458740686)) : (((((/* implicit */_Bool) 458740674)) ? (arr_29 [i_11]) : (var_10)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                var_32 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [(_Bool)1] [i_12]))) <= (var_6)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (long long int i_14 = 2; i_14 < 17; i_14 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1)) + ((~(arr_38 [i_10] [i_10 + 1] [i_10 + 1] [(unsigned short)10] [5ULL] [i_10 + 1]))))))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_13])) ? (((/* implicit */unsigned long long int) -7074796949023537032LL)) : (18446744073709551615ULL)));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */int) ((unsigned int) ((var_13) / (-4926197243330394122LL))));
            arr_40 [i_10] |= (+(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11]))))));
            var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [i_11 - 2] [i_11]))));
        }
        for (unsigned short i_15 = 4; i_15 < 19; i_15 += 3) 
        {
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_10] [i_15])) && (((/* implicit */_Bool) arr_41 [i_10 - 1] [i_10 + 1]))));
            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_10])) || (((/* implicit */_Bool) arr_39 [i_10 - 1] [i_10] [i_10] [i_15 - 4] [i_15 - 3]))));
            /* LoopSeq 4 */
            for (long long int i_16 = 2; i_16 < 17; i_16 += 3) 
            {
                var_39 = ((/* implicit */unsigned int) arr_29 [i_10 + 1]);
                arr_46 [i_10 + 1] [i_10 + 1] [i_16 - 1] |= arr_35 [1] [i_15] [1] [10LL];
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_52 [i_10 - 1] [17] [i_16 + 2] [i_10 - 1] [(unsigned short)6] = ((/* implicit */unsigned int) ((arr_41 [i_10] [i_15 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_10 - 1] [i_17] [i_16] [i_15] [i_15] [i_10 - 1]))) != (4926197243330394122LL)))))));
                            arr_53 [i_10] [i_15 - 3] [i_15 - 1] [i_16] [i_16] [i_17] [i_18] = ((/* implicit */unsigned int) var_10);
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_38 [i_10] [i_10] [i_10] [18U] [17] [i_10])) : (var_1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_50 [i_10 - 1] [16] [i_10] [i_10] [i_10] [5LL])) : (arr_36 [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
                            var_41 = ((/* implicit */_Bool) 67108863U);
                        }
                    } 
                } 
                arr_54 [i_10] [15] [i_10] [i_10] = ((/* implicit */unsigned int) var_10);
                var_42 = ((/* implicit */_Bool) var_12);
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_43 [i_15 - 2] [i_15 - 3] [i_15 - 3])))))));
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) arr_55 [i_19] [9] [11LL] [i_10]))));
            }
            for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
            {
                var_45 = ((/* implicit */unsigned short) ((long long int) ((-1888749469) < (arr_39 [7LL] [(unsigned short)9] [13LL] [i_20] [16LL]))));
                var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) ((((/* implicit */long long int) var_4)) < (arr_50 [i_10 + 1] [i_15 - 4] [i_20] [i_20] [i_20] [i_20]))))));
            }
            for (int i_21 = 1; i_21 < 19; i_21 += 3) 
            {
                var_47 = (-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) -8723157681299124374LL))))));
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_10 + 1] [i_10])) ? (var_4) : (var_5)));
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    var_49 = ((/* implicit */unsigned long long int) var_5);
                    var_50 ^= ((/* implicit */_Bool) ((unsigned short) var_13));
                    arr_64 [i_21] [9U] [i_15] [i_21] [i_21] [i_22] = ((/* implicit */int) ((arr_45 [i_10 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_21 + 1])))));
                    var_51 -= (!(((/* implicit */_Bool) ((long long int) arr_34 [i_22]))));
                    var_52 = ((/* implicit */long long int) ((unsigned short) arr_51 [i_15] [i_15] [i_21 + 1] [i_21 + 1] [9U]));
                }
            }
        }
        for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_24 = 0; i_24 < 20; i_24 += 3) 
            {
                var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) 18020976653396460253ULL))));
                var_54 = ((((var_6) != (arr_58 [i_10 + 1]))) ? (((/* implicit */long long int) (~(var_7)))) : ((-(var_6))));
            }
            var_55 = ((/* implicit */unsigned int) ((((-25LL) > (((/* implicit */long long int) 175972868)))) && (((/* implicit */_Bool) -7702866543865329429LL))));
            var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10]))) : (15575545022266101816ULL)))) ? ((+(arr_36 [i_10] [i_10] [i_23]))) : (((/* implicit */unsigned long long int) ((arr_47 [i_10] [15] [i_23] [i_23] [i_23] [i_23]) + (arr_51 [i_10] [14U] [(unsigned short)15] [i_23] [i_23])))))))));
            var_57 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 262143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_23]))) : (arr_36 [i_10] [i_10] [i_10]))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_63 [i_10] [i_10] [14LL] [14LL] [0] [10])))))));
            var_58 = ((/* implicit */unsigned int) arr_63 [i_23] [i_23] [(_Bool)1] [(_Bool)1] [i_23] [i_10]);
        }
        arr_70 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_10] [i_10] [i_10] [i_10 - 1])) ? (arr_55 [15U] [i_10] [i_10] [i_10 - 1]) : (arr_55 [i_10] [i_10 - 1] [i_10] [i_10 + 1])));
    }
    /* vectorizable */
    for (int i_25 = 1; i_25 < 19; i_25 += 3) /* same iter space */
    {
        arr_73 [i_25] [i_25] = var_3;
        arr_74 [i_25] = ((/* implicit */long long int) arr_38 [10U] [i_25] [i_25] [(unsigned short)0] [i_25] [i_25 + 1]);
        var_59 = ((arr_37 [i_25] [i_25] [i_25] [i_25 - 1]) % (((/* implicit */int) arr_33 [i_25 - 1] [i_25 - 1])));
        var_60 = ((/* implicit */unsigned long long int) var_5);
    }
    /* LoopNest 3 */
    for (unsigned int i_26 = 1; i_26 < 12; i_26 += 2) 
    {
        for (unsigned int i_27 = 0; i_27 < 15; i_27 += 3) 
        {
            for (long long int i_28 = 3; i_28 < 13; i_28 += 3) 
            {
                {
                    var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (458740683) : (((/* implicit */int) (unsigned short)65535))));
                    var_62 = max((max((-7074796949023537032LL), (((/* implicit */long long int) min((arr_31 [(unsigned short)18] [(unsigned short)11]), (((/* implicit */int) arr_68 [4ULL] [(_Bool)1] [i_28 - 1]))))))), (((/* implicit */long long int) arr_67 [i_28] [i_26])));
                }
            } 
        } 
    } 
}
