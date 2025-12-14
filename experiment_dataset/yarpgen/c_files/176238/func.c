/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176238
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
    var_14 = ((/* implicit */short) ((unsigned char) (unsigned char)125));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_15 &= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) arr_2 [2ULL] [2])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (arr_5 [i_0] [i_0])));
                    arr_9 [i_0] = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)37838)) & (((/* implicit */int) (unsigned short)27675)))) <= (((/* implicit */int) (unsigned char)44))));
                    var_17 = ((/* implicit */short) max((var_17), (arr_5 [i_2] [i_0])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((arr_1 [i_0 - 1]) / (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_3])))))));
            var_19 = ((/* implicit */signed char) arr_8 [0] [i_3]);
            var_20 |= (unsigned short)37838;
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_5 [4ULL] [9ULL]))));
                arr_18 [(signed char)0] [i_4] [i_4] [i_0] &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) arr_10 [i_5])))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_7 = 3; i_7 < 8; i_7 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) arr_13 [(unsigned char)0] [i_6] [i_7 + 1]);
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_7 [2ULL] [i_4] [4ULL]))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned short)4])) ? (((/* implicit */int) (unsigned short)65520)) : (-1)));
                }
                for (signed char i_8 = 3; i_8 < 8; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_4] [i_0] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)68)))))) ? (((((/* implicit */_Bool) 3200344385825469673ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))))) : (((arr_22 [i_0] [i_4] [i_4] [i_6] [i_8 - 2] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27675)))))));
                    var_26 = ((arr_11 [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) + (arr_22 [i_0] [i_0] [i_4] [i_0] [0] [i_8])))) : (arr_14 [i_0] [i_0] [i_0]));
                    arr_27 [i_0] [i_0] [i_4] [i_8] [i_0 + 2] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 144115119356379136ULL)) ? (-416652781) : (((/* implicit */int) (unsigned short)65528))));
                }
                for (signed char i_9 = 3; i_9 < 8; i_9 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (short)-28298)) - (((/* implicit */int) arr_16 [i_0] [i_0])))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [5] [i_0 + 2] [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) arr_7 [i_9 + 2] [i_0] [i_0 + 2]))));
                }
                for (signed char i_10 = 3; i_10 < 8; i_10 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_4] [i_6] [i_6] [i_10]);
                    arr_32 [i_4] [i_10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)37810)) : (((/* implicit */int) (unsigned char)129))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_6] [i_10]))) + (arr_17 [i_0] [i_4] [(unsigned char)6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 2] [i_0 - 1] [i_0])))));
                }
                arr_33 [i_4] [i_4] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-7510))) ? (((((/* implicit */_Bool) arr_28 [(signed char)6] [(short)0] [4LL] [i_6])) ? (18028321758081403931ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27675)))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_30 = (unsigned short)27729;
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_10 [i_0]))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1])) == (((/* implicit */int) arr_16 [i_0] [i_0]))));
            }
            var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) 32767)) : (((/* implicit */unsigned long long int) arr_21 [i_4]))));
        }
    }
    for (unsigned char i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (18087400265184879058ULL))), (((/* implicit */unsigned long long int) arr_20 [i_14] [i_15] [i_16] [i_17]))));
                        var_35 = arr_17 [(short)8] [i_14] [i_16];
                        arr_53 [i_17] [i_14] [i_16] [i_16] [i_14] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) ((_Bool) (signed char)9))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_6 [0LL]))));
        var_37 = ((/* implicit */signed char) ((short) min(((short)25591), (((/* implicit */short) arr_31 [i_14 - 1])))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) 
    {
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (short)255)))))));
        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((unsigned short) 0)))))))));
    }
    /* LoopSeq 3 */
    for (short i_19 = 0; i_19 < 22; i_19 += 3) 
    {
        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((short) min((((/* implicit */int) (unsigned short)37860)), (((((/* implicit */int) (unsigned short)27729)) & (((/* implicit */int) arr_58 [i_19]))))))))));
        arr_59 [i_19] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)125)), ((unsigned short)27675)));
        arr_60 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_56 [i_19])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_58 [i_19])))) / (((/* implicit */int) ((_Bool) (unsigned short)20)))))) ? (((((/* implicit */int) arr_57 [2])) | (((/* implicit */int) min(((unsigned short)37810), (((/* implicit */unsigned short) arr_58 [i_19]))))))) : (((/* implicit */int) ((short) min((arr_56 [i_19]), (((/* implicit */unsigned char) arr_57 [i_19]))))))));
        var_41 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_56 [i_19])) < (((/* implicit */int) (unsigned char)113)))))) <= (((arr_57 [1LL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [(signed char)10]))) : (0ULL))))));
    }
    /* vectorizable */
    for (short i_20 = 2; i_20 < 23; i_20 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_21 = 4; i_21 < 23; i_21 += 3) 
        {
            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) : (((long long int) 17179869183ULL))));
            var_43 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)27725)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_62 [8ULL]))));
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) 18446744073709551615ULL))));
            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) arr_62 [(short)20]))));
            var_46 *= ((/* implicit */unsigned char) arr_63 [(short)2]);
        }
        var_47 &= ((/* implicit */signed char) arr_61 [6LL]);
        var_48 = ((unsigned long long int) arr_62 [i_20]);
    }
    for (int i_22 = 0; i_22 < 21; i_22 += 4) 
    {
        arr_67 [i_22] [(unsigned char)9] = ((/* implicit */_Bool) arr_65 [i_22]);
        var_49 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_61 [i_22])) << (((5368166319840399947ULL) - (5368166319840399933ULL))))));
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 21; i_23 += 4) 
        {
            for (int i_24 = 0; i_24 < 21; i_24 += 2) 
            {
                for (unsigned short i_25 = 2; i_25 < 20; i_25 += 4) 
                {
                    {
                        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) arr_68 [i_22] [20ULL] [20ULL]))));
                        arr_77 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_63 [i_24]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28169))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_23]))) : (14550857760896177029ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_58 [i_22])) ? (((/* implicit */int) (short)31925)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)65528))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_56 [i_22])))) : (((unsigned long long int) 18446744073709551615ULL))))));
                        arr_78 [20ULL] [i_25] [i_24] [i_24] [i_22] [i_22] &= ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-20583))) ? (((unsigned long long int) ((unsigned long long int) arr_64 [i_23]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)26)))) ? (((/* implicit */int) arr_69 [i_23])) : (((/* implicit */int) (unsigned char)255)))))));
                        arr_79 [i_24] [i_24] [i_23] [i_22] [i_22] = ((/* implicit */long long int) ((short) ((signed char) var_6)));
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */long long int) arr_63 [i_22]);
    }
    var_52 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-86)) ? (max((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3895886312813374585ULL))), (((((/* implicit */_Bool) (short)28293)) ? (var_3) : (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17179869183ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7)))))));
}
