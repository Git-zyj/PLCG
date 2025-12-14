/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121004
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
    var_13 ^= var_1;
    var_14 = ((/* implicit */short) var_5);
    var_15 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_16 = (((((~(((/* implicit */int) arr_1 [i_0] [i_0])))) + (2147483647))) << (((var_9) - (5332315134045984830LL))));
        var_17 = ((/* implicit */_Bool) 0);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) var_6);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_19 = arr_5 [i_1] [i_1] [i_1];
            var_20 = ((/* implicit */_Bool) var_3);
            var_21 = ((/* implicit */long long int) var_7);
            var_22 = ((((/* implicit */_Bool) 281474842492928LL)) ? (-943553273847221341LL) : (-281474842492906LL));
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            var_23 = (_Bool)1;
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [(_Bool)1])), (arr_0 [(_Bool)1]))))));
            /* LoopSeq 3 */
            for (long long int i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                var_25 = var_7;
                var_26 ^= max((((/* implicit */long long int) ((((/* implicit */int) var_7)) == (arr_4 [i_1])))), (min((((/* implicit */long long int) -1532291053)), (max((-1103085363417781614LL), (((/* implicit */long long int) var_7)))))));
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                var_27 = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((_Bool) arr_11 [i_1] [i_1] [i_1]))));
                var_28 = ((/* implicit */_Bool) ((arr_10 [i_5] [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((((var_8) || (var_0))) ? (max((((/* implicit */long long int) arr_9 [i_1] [i_1])), (arr_12 [i_1] [i_1] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (arr_21 [15LL] [i_3] [i_6] [(unsigned short)23] [15LL])));
                        var_31 = ((/* implicit */int) arr_19 [i_1] [i_1]);
                        var_32 = ((/* implicit */short) var_1);
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1])) ? (arr_18 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    }
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((arr_5 [i_1] [i_3] [i_6]) / (-1515474075))))));
                    var_35 = ((/* implicit */long long int) ((arr_16 [i_1] [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_10)))))));
                }
                var_36 ^= ((/* implicit */long long int) var_5);
                var_37 = ((/* implicit */long long int) var_0);
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_11 [i_6] [(unsigned short)7] [i_1]))));
            }
            /* LoopSeq 4 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((min((arr_6 [3]), (arr_6 [i_3]))) == (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [17LL] [i_9])))))));
                var_40 = ((((/* implicit */_Bool) 0LL)) ? (((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_3] [14] [i_1]))) : (var_9))) - (arr_11 [i_1] [i_3] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (arr_6 [i_1])))));
                var_41 = var_8;
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                var_42 = ((/* implicit */long long int) min((var_42), (((((_Bool) 1532291053)) ? (8366109996277577253LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [4] [i_10 + 1] [4])))))));
                var_43 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_20 [4] [4]) ? (arr_13 [i_1] [15LL] [i_1]) : (arr_16 [(_Bool)1] [i_1] [i_1]))) / (max((arr_13 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_23 [i_1] [i_3]))))))) ? (arr_23 [i_1] [i_1]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1332045290366501134LL)) >= (arr_19 [2LL] [2LL]))))));
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 20; i_11 += 1) 
            {
                var_44 = ((/* implicit */_Bool) var_3);
                var_45 = (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [(_Bool)1]))) : (-1LL)))));
                var_46 = ((/* implicit */unsigned short) var_12);
                var_47 = ((/* implicit */_Bool) max((var_47), (arr_22 [i_1] [i_1] [i_1])));
            }
            for (long long int i_12 = 1; i_12 < 21; i_12 += 1) 
            {
                var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28860)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((-2968090606338920561LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (unsigned short)0)) : (-680473523));
                var_49 = ((/* implicit */int) ((_Bool) 0));
                var_50 = ((/* implicit */long long int) var_12);
                var_51 = ((/* implicit */long long int) ((((/* implicit */int) max((var_11), ((_Bool)1)))) / (((/* implicit */int) ((_Bool) var_3)))));
            }
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 1) 
                        {
                            var_52 ^= ((/* implicit */int) 7LL);
                            var_53 ^= ((/* implicit */signed char) var_8);
                        }
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
                        {
                            var_54 = ((/* implicit */long long int) arr_9 [6] [i_1]);
                            var_55 = ((/* implicit */long long int) ((int) (_Bool)1));
                            var_56 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_16] [i_3])) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) (short)-28860))));
                            var_57 ^= ((/* implicit */int) var_10);
                            var_58 = -9LL;
                        }
                        for (int i_17 = 2; i_17 < 21; i_17 += 1) /* same iter space */
                        {
                            var_59 += ((/* implicit */signed char) arr_15 [10LL] [10LL] [i_17]);
                            var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-103)) ? (arr_30 [2] [i_3] [20LL]) : (((/* implicit */long long int) arr_5 [i_1] [i_13] [i_17 + 2])))) + (((-281474842492938LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (arr_13 [i_13] [i_14] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (int i_18 = 2; i_18 < 21; i_18 += 1) /* same iter space */
                        {
                            var_61 = ((/* implicit */_Bool) min((var_61), (((/* implicit */_Bool) var_5))));
                            var_62 -= ((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_38 [i_1] [i_3] [i_14])));
                            var_63 += ((/* implicit */int) (_Bool)1);
                        }
                        var_64 = ((/* implicit */int) min((var_64), (((/* implicit */int) -7LL))));
                        var_65 = ((/* implicit */int) arr_11 [i_1] [i_3] [i_14]);
                        var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) ((long long int) ((arr_18 [6ULL]) ^ (((/* implicit */unsigned long long int) arr_11 [i_3] [1ULL] [1ULL]))))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_19 = 0; i_19 < 24; i_19 += 1) /* same iter space */
    {
        var_67 = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_19] [i_19])) == (((/* implicit */int) ((arr_46 [i_19]) >= (arr_6 [i_19]))))));
        var_68 = ((/* implicit */unsigned long long int) arr_40 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]);
        var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL)))) && (((/* implicit */_Bool) arr_19 [i_19] [i_19]))));
        var_70 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_46 [i_19])) : (arr_13 [i_19] [i_19] [i_19])));
    }
}
