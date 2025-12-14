/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173524
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((_Bool) (-(arr_3 [(unsigned short)7] [i_1 + 2]))));
                            var_16 = (((+(arr_12 [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1]))) + (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */int) ((var_1) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_12)) : (arr_12 [i_1 - 3] [i_1] [i_1 + 1] [(signed char)3] [i_1 - 2] [i_1 - 3] [i_1]))) - (1888317966LL)))));
            var_18 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8524873559821636206ULL)) ? (9921870513887915410ULL) : (9921870513887915410ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1445457277) > (((/* implicit */int) (signed char)-12))))))));
                arr_21 [i_5 + 1] [i_6] [i_6] = ((/* implicit */short) var_1);
            }
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                var_20 = ((/* implicit */_Bool) var_6);
                var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 9921870513887915389ULL)) ? (((/* implicit */int) arr_20 [10ULL])) : (((/* implicit */int) var_10))))) & (var_9)));
                var_22 = ((/* implicit */long long int) var_8);
                arr_24 [i_0] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0 + 1])) ? (arr_10 [i_0] [i_0] [i_5 + 1] [i_0 - 2]) : (arr_0 [i_5 + 1] [i_5 + 1])));
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)133)) - (74)))));
                        var_24 = ((unsigned short) arr_9 [i_0] [i_10] [i_8] [i_8]);
                        var_25 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                        var_26 = ((/* implicit */int) (-(arr_14 [i_0 + 2] [i_0 - 1] [i_5 + 1])));
                    }
                    for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                    {
                        arr_37 [i_0] [i_0] [i_8] [i_0] [i_11] [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_4 [i_0] [i_8] [i_8])))) != (((int) var_12))));
                        arr_38 [i_0 + 2] [i_5] [i_8] [i_8] [i_8] [i_5] [i_8] = ((/* implicit */int) (~(arr_7 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
                    }
                    arr_39 [i_5] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                    /* LoopSeq 4 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_22 [(short)10] [i_9 + 2]) : (9921870513887915403ULL)));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9 + 2])) ? (arr_13 [i_0 + 2] [i_0 + 1] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        arr_44 [i_0] [10U] [10U] [10U] [i_13] [i_13] = ((long long int) var_0);
                        arr_45 [i_8] [i_13] [i_8] [i_8] [i_13] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (8524873559821636206ULL)));
                    }
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        arr_49 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((9921870513887915409ULL) & (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (8524873559821636206ULL) : (8524873559821636212ULL))) : (9921870513887915389ULL)));
                        arr_50 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [(unsigned short)3] = ((/* implicit */unsigned short) ((short) arr_29 [i_0 + 2] [i_5 + 1]));
                    }
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */short) var_14);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(signed char)0] [i_5 + 1])) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (((((/* implicit */_Bool) 8524873559821636213ULL)) ? (8524873559821636206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    }
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 + 1])) ? (arr_34 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0]) : (arr_19 [i_5 + 1] [i_5 + 1])));
                }
                for (unsigned short i_16 = 1; i_16 < 9; i_16 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                    var_33 = ((/* implicit */long long int) ((arr_19 [i_0 + 1] [i_0 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (((/* implicit */long long int) var_1))))))));
                }
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9921870513887915401ULL)) ? (((/* implicit */int) var_11)) : (arr_3 [i_0] [i_0])))) ? (8524873559821636213ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                arr_58 [i_0 - 1] [i_0 - 2] [i_0 - 1] = ((/* implicit */short) arr_7 [i_8] [6U] [6U] [i_8] [i_8] [i_0]);
            }
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                for (unsigned int i_18 = 1; i_18 < 9; i_18 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            arr_69 [i_0] [i_5] [9U] [i_17] [i_18] [i_18] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0] [i_0] [i_5] [i_17] [i_5] [i_19] [i_19]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)101)) + (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) arr_40 [i_0] [i_5 + 1] [i_17] [i_18 + 1] [i_17] [8LL] [i_19])) ? (8524873559821636210ULL) : (8524873559821636213ULL)))));
                            arr_70 [i_0] [i_5 + 1] [6U] [i_18] [i_19] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]))) ^ (8524873559821636195ULL)));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9921870513887915403ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_17] [i_18]))) : (9921870513887915406ULL)))))))));
                        }
                        for (signed char i_20 = 1; i_20 < 8; i_20 += 4) 
                        {
                            arr_74 [i_0] [i_5] [10] [i_5] [i_18 + 1] [i_20] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_11)))));
                            var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                            arr_75 [i_0] [(_Bool)1] [i_17] [(_Bool)1] [i_20 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) : (var_8)))) & (((((/* implicit */_Bool) var_11)) ? (-3650571230635042171LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))))));
                            arr_76 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_17] [i_17] [i_18] [i_18] [i_20]);
                            var_37 ^= ((/* implicit */_Bool) (short)32744);
                        }
                        arr_77 [3ULL] [3ULL] [3ULL] = ((/* implicit */int) (+(9921870513887915389ULL)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_38 = ((/* implicit */int) ((arr_64 [i_0 + 1] [i_5] [i_21] [i_5 + 1]) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (1665785001))))));
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_0 - 1] [i_0 - 1] [(_Bool)0] [(unsigned char)9] [i_5 + 1])) ? (((/* implicit */int) arr_52 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 + 1])) : (((/* implicit */int) (signed char)101))));
                var_40 = ((/* implicit */long long int) min((var_40), ((~(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [0])) ? (var_2) : (((/* implicit */long long int) var_14))))))));
                var_41 += ((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_5 + 1] [i_5 + 1]))));
                arr_82 [i_0] [i_0] [i_0] [10ULL] = ((/* implicit */int) (~(arr_14 [i_0] [i_5] [i_5])));
            }
            for (int i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    for (unsigned int i_24 = 0; i_24 < 11; i_24 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) (+(arr_25 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1])));
                            var_43 = ((/* implicit */short) var_13);
                            var_44 = (-(9921870513887915405ULL));
                        }
                    } 
                } 
                arr_93 [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8524873559821636210ULL))));
                var_45 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_14)))) / (3650571230635042147LL)));
                arr_94 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0 - 2] [i_5 + 1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0 - 2] [i_5 + 1])))));
            }
        }
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_25 + 1] [(unsigned char)0] [i_25 + 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) <= (8524873559821636226ULL))))));
            arr_98 [i_25 + 1] [i_25 + 1] [i_25] = ((/* implicit */unsigned int) arr_23 [i_0 - 1]);
        }
        for (unsigned char i_26 = 2; i_26 < 9; i_26 += 1) 
        {
            var_47 = ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)101))))));
            /* LoopSeq 3 */
            for (short i_27 = 1; i_27 < 10; i_27 += 1) 
            {
                var_48 = ((/* implicit */unsigned short) ((unsigned char) (+(0LL))));
                var_49 *= ((/* implicit */signed char) ((((/* implicit */int) ((9921870513887915376ULL) == (((/* implicit */unsigned long long int) -3650571230635042171LL))))) < (((/* implicit */int) ((unsigned char) var_3)))));
            }
            for (unsigned char i_28 = 0; i_28 < 11; i_28 += 2) 
            {
                var_50 = 8524873559821636210ULL;
                arr_110 [i_28] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)100))));
            }
            for (unsigned short i_29 = 3; i_29 < 10; i_29 += 3) 
            {
                var_51 = ((((/* implicit */_Bool) 8524873559821636206ULL)) ? (((/* implicit */long long int) arr_80 [i_29 - 1] [i_29 - 2] [i_29 - 1])) : (2387103754908151623LL));
                /* LoopNest 2 */
                for (int i_30 = 1; i_30 < 9; i_30 += 4) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 11; i_31 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */short) ((int) arr_79 [i_26 + 2] [i_26 - 2] [i_30]));
                            var_53 |= ((unsigned char) ((((/* implicit */_Bool) 8524873559821636205ULL)) ? (var_12) : (((/* implicit */int) arr_43 [(unsigned char)1] [i_26] [i_29] [i_30 + 1] [i_31]))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */int) var_13);
                var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21637)) << (((((/* implicit */int) arr_15 [i_0] [i_29])) - (48576)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_0 - 1] [i_0 - 1] [i_26 + 2] [i_29 - 2]))) : (((((/* implicit */_Bool) var_13)) ? (9921870513887915410ULL) : (((/* implicit */unsigned long long int) var_14))))));
            }
            var_56 = ((/* implicit */short) 1738476637);
        }
        var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_64 [i_0] [i_0 + 2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_0] [6LL])))))) : (0LL)));
        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -10LL))));
        var_59 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_60 [i_0] [i_0 - 2] [i_0 + 2])))));
        var_60 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_113 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_32 = 2; i_32 < 9; i_32 += 2) /* same iter space */
    {
        arr_120 [i_32] = ((/* implicit */int) var_11);
        var_61 = ((/* implicit */long long int) var_11);
        arr_121 [i_32 - 2] [(short)7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) max((8524873559821636210ULL), (8524873559821636206ULL))))), (((((/* implicit */_Bool) arr_80 [i_32] [i_32] [i_32 - 2])) ? (((/* implicit */unsigned long long int) 0LL)) : (9921870513887915410ULL)))));
    }
    var_62 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_7)), ((+(8524873559821636205ULL)))))));
    var_63 = ((/* implicit */unsigned char) var_12);
    var_64 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) -3650571230635042186LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)231)), ((short)4347))))) : (max((((8524873559821636206ULL) + (10973643444058105481ULL))), (((/* implicit */unsigned long long int) max((3650571230635042147LL), (((/* implicit */long long int) var_10)))))))));
}
