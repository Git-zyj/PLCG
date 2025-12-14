/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12129
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [(_Bool)1] [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) arr_3 [i_2]);
                    arr_7 [i_0 - 1] [(_Bool)1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3545631929U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26191))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) - (((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)26190))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(arr_5 [i_0 + 1] [i_0] [i_2])))) : (((/* implicit */int) var_0)))))));
                    arr_9 [0LL] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_1 [i_1]))))), ((~(((/* implicit */int) arr_1 [i_0 - 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_13))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                var_15 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)-26182)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)26205), (((/* implicit */short) (signed char)-88)))))) : (min((6484412904689968935LL), (((/* implicit */long long int) 3545631929U)))))));
                var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */_Bool) arr_18 [(short)5] [i_4])) ? (0ULL) : (((/* implicit */unsigned long long int) 6484412904689968941LL)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6484412904689968950LL)))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            arr_26 [i_3] [i_4] [i_5] [i_5] [i_3] [0] &= ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_6]))))));
                            var_17 &= ((/* implicit */unsigned char) (~(((/* implicit */int) min((var_11), (((/* implicit */signed char) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 3; i_8 < 21; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            arr_35 [(signed char)4] [i_4] [i_8 - 3] [i_3] [i_10] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3588088564U))));
                            arr_36 [i_3] [i_4] [i_8 + 1] [i_4] [i_8 + 2] [i_3] [i_8 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_10] [i_8])) ? (arr_32 [i_3] [i_4] [(short)21] [i_4] [(short)21]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_28 [i_3] [i_4] [i_8] [i_8 - 3]) - (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_4] [i_8] [i_8 - 1]))) != (6484412904689968935LL)))) : (((/* implicit */int) ((arr_28 [i_3] [i_4] [8LL] [i_8 - 3]) != (var_10))))));
                            arr_37 [i_3] [(_Bool)1] [i_4] [i_8 - 2] [i_9] [i_10] = ((/* implicit */unsigned char) arr_31 [i_3] [i_4] [i_8] [(_Bool)1]);
                            arr_38 [i_3] [i_4] [i_8] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_4)))))) == (((arr_5 [i_8 + 2] [i_4] [i_9 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-6430018210555370334LL)))));
                        }
                    } 
                } 
                var_19 = (i_4 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1362476513)) ? (10595657394969988337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) << (((((((/* implicit */int) var_5)) & (arr_28 [i_4] [i_4] [i_4] [(_Bool)1]))) - (1324651563)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1362476513)) ? (10595657394969988337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) << (((((((((/* implicit */int) var_5)) & (arr_28 [i_4] [i_4] [i_4] [(_Bool)1]))) + (1324651563))) - (411794129))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) arr_20 [i_3] [(signed char)13] [i_4] [i_11] [i_11]);
                var_21 = ((((/* implicit */int) ((1759419802) == (((/* implicit */int) (short)18425))))) >= (2147483647));
                arr_41 [(signed char)0] [i_4] [i_4] = ((/* implicit */signed char) (~(11551213464297213752ULL)));
            }
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        arr_47 [i_3] [i_3] [i_4] [i_3] = min((min((((/* implicit */long long int) var_0)), (4611686018427387904LL))), (((/* implicit */long long int) min((arr_29 [i_3] [i_4] [7ULL] [i_13]), (arr_29 [i_3] [i_4] [i_4] [i_3])))));
                        var_22 = ((/* implicit */_Bool) (+(min((arr_42 [(unsigned short)19] [i_4] [i_12] [i_13]), (arr_42 [i_3] [i_3] [i_3] [i_3])))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_45 [i_4] [(short)2] [(short)2] [i_13] [i_13])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -913298185522706230LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6484412904689968929LL)) ? (((/* implicit */int) arr_16 [i_3] [i_4])) : (-1046343333)))) : (((unsigned int) -6430018210555370334LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-31403)) : (((/* implicit */int) (short)-1)))))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_14 = 4; i_14 < 20; i_14 += 1) 
        {
            arr_51 [(_Bool)1] &= ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3] [i_14 - 1] [i_14] [i_3]))) : (6116355578435795086ULL)));
            var_24 = ((/* implicit */unsigned long long int) (~(-2097118226)));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 4) 
            {
                for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    {
                        arr_56 [i_3] [i_15] [i_14] [i_14] [i_14] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 5607895942157797118LL))) ? (arr_24 [i_3] [i_3] [i_14 - 1] [i_15 + 2] [7ULL] [i_14] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14])))));
                        var_25 = ((/* implicit */unsigned short) ((long long int) arr_27 [i_3]));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_17 = 4; i_17 < 22; i_17 += 1) 
        {
            var_26 = ((/* implicit */_Bool) (~(((arr_24 [i_3] [10] [i_3] [i_17] [i_3] [i_17] [i_3]) << (((((((/* implicit */int) var_5)) + (2400))) - (18)))))));
            var_27 = ((/* implicit */_Bool) arr_21 [i_17] [i_17 + 1]);
            arr_61 [i_17] = ((/* implicit */long long int) 1252600521);
        }
        arr_62 [i_3] &= ((/* implicit */int) ((max((arr_42 [i_3] [i_3] [i_3] [i_3]), (arr_42 [i_3] [i_3] [i_3] [i_3]))) == (((/* implicit */int) ((arr_50 [i_3] [i_3]) >= (arr_42 [i_3] [i_3] [i_3] [i_3]))))));
    }
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
    {
        arr_66 [3] = ((/* implicit */long long int) ((arr_57 [i_18 + 1] [i_18 + 1] [i_18 + 1]) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [(short)6] [i_18] [i_18] [i_18 + 1] [(short)6])) >> (((((/* implicit */int) arr_45 [(_Bool)1] [(signed char)0] [i_18] [i_18 + 1] [(_Bool)1])) - (215))))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_9))));
        var_29 = ((/* implicit */int) ((unsigned char) ((5478204237364472773LL) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_18] [i_18]))))));
        var_30 = ((/* implicit */int) arr_25 [i_18] [i_18]);
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) /* same iter space */
    {
        arr_71 [(short)0] = (_Bool)0;
        /* LoopSeq 1 */
        for (unsigned short i_20 = 2; i_20 < 14; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (short i_21 = 4; i_21 < 12; i_21 += 2) 
            {
                for (long long int i_22 = 0; i_22 < 15; i_22 += 3) 
                {
                    {
                        arr_78 [(_Bool)0] [i_20] [i_20] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_19] [i_19] [(unsigned short)21] [i_19 + 1] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_18 [i_20] [i_20]))));
                        arr_79 [i_19] [i_20] [i_21] [i_19] = ((/* implicit */unsigned char) ((int) arr_2 [i_19 + 1] [i_20]));
                        arr_80 [i_22] [i_20] [i_20] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 913298185522706205LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32763))))) : (((int) var_4))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_23 = 0; i_23 < 15; i_23 += 3) 
            {
                arr_84 [12ULL] [i_20] = (!(((/* implicit */_Bool) var_9)));
                var_31 = ((/* implicit */_Bool) (unsigned short)40463);
            }
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) var_6)))))));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -419364114)) ? (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) var_8))));
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_24 = 0; i_24 < 14; i_24 += 1) 
    {
        for (int i_25 = 0; i_25 < 14; i_25 += 2) 
        {
            for (unsigned short i_26 = 0; i_26 < 14; i_26 += 1) 
            {
                {
                    arr_93 [i_24] [i_26] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_92 [(signed char)7])) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)1008)))) : (((((/* implicit */int) (unsigned short)2493)) & (((/* implicit */int) arr_43 [i_24] [i_24] [i_24] [i_25]))))))));
                    arr_94 [i_26] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (min((arr_86 [i_25]), (arr_86 [i_24])))));
                    var_34 -= ((short) min((((/* implicit */unsigned long long int) arr_82 [i_24] [i_25] [i_25])), (arr_17 [i_24] [i_25])));
                }
            } 
        } 
    } 
    var_35 *= ((/* implicit */_Bool) var_0);
}
