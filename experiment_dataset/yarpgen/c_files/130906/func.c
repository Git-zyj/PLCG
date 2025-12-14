/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130906
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
    var_14 = ((/* implicit */signed char) 1996272796193761114ULL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2952))))) : (((12146120783173640642ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_16 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
            var_17 = (-(((/* implicit */int) max(((short)-19717), (((/* implicit */short) (signed char)5))))));
            arr_7 [i_0] = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (short)-19372)), (arr_5 [i_0] [i_1] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19716)))))) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) (unsigned short)62584)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) 1763762977)) : (-1922118662607195833LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19372)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2949))))))));
        }
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4064378773U)))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62587))) == (arr_6 [i_0] [i_0] [i_0])))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) (short)-19717)) * (((/* implicit */int) (unsigned short)3832)))))));
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned short) arr_11 [4ULL])), (arr_10 [i_0] [i_0]))))) ? (min((((((/* implicit */_Bool) arr_2 [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_6 [i_0] [(unsigned char)2] [i_3]))), (((/* implicit */unsigned int) arr_0 [(signed char)2] [i_0])))) : (((/* implicit */unsigned int) var_1)))))));
                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_0] [i_3])) ? (arr_12 [i_0] [i_2] [i_2] [i_3]) : (arr_12 [i_0] [i_2] [1] [i_3])))) ? ((+(1154698514))) : (((/* implicit */int) arr_8 [i_0] [(signed char)8]))));
            }
            for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                var_22 = ((/* implicit */short) arr_0 [i_4] [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) var_10);
                            arr_23 [i_0] [i_2] [i_4] = ((/* implicit */signed char) arr_1 [i_0] [i_6 - 1]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 2])))), (((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]))));
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0]);
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)249)) << (((4097873064U) - (4097873054U)))));
                arr_27 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1154698514)) ? (((((/* implicit */_Bool) (unsigned char)107)) ? (arr_19 [i_0] [i_2] [i_7] [i_0]) : (((/* implicit */long long int) 4064378768U)))) : (((/* implicit */long long int) (-(4097873064U))))));
                arr_28 [(_Bool)1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_7] [i_7])) & (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(short)2] [i_0])))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                arr_31 [i_0] [(_Bool)0] [i_0] [i_8] = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_3))))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) max((min((max((arr_9 [(signed char)2]), (((/* implicit */long long int) (short)-19702)))), (((/* implicit */long long int) (signed char)-1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) var_8)) : (2051395717)))) ? (((/* implicit */long long int) ((arr_25 [i_0] [i_0] [i_8]) ? (((/* implicit */int) (unsigned char)113)) : (arr_0 [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2]))) : (143833713099145216LL))))))))));
                var_27 = ((/* implicit */int) min((arr_9 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [i_8])) * (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0] [i_2])))))))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((arr_16 [(unsigned char)4] [i_2] [i_8] [2U]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_15 [(signed char)2]), (((/* implicit */short) arr_22 [i_8] [i_0])))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [8LL])))))));
            }
            var_29 = ((/* implicit */int) var_4);
            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)113)))))) : (((((/* implicit */_Bool) -143833713099145236LL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30473))) | (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)8])))))));
        }
        arr_32 [i_0] = ((/* implicit */unsigned char) ((long long int) arr_20 [i_0] [0LL] [i_0] [(short)3] [i_0] [9U]));
    }
    var_31 = var_12;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
    {
        arr_37 [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61698))) / (1598218779491764874ULL));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            for (unsigned short i_11 = 2; i_11 < 19; i_11 += 2) 
            {
                {
                    var_32 = ((/* implicit */long long int) arr_42 [i_9]);
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_9])) ? (((((/* implicit */_Bool) 1598218779491764874ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9]))) : (var_11))) : (((/* implicit */unsigned long long int) (+(arr_34 [17] [i_11 + 1]))))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9] [(signed char)18] [i_9] [i_11])) ? (((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_9] [i_9] [i_11] [i_11 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9 + 1] [i_9 + 1] [i_9 + 2])))));
                }
            } 
        } 
    }
    for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        arr_46 [i_12] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_45 [i_12] [5U]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)107)))))))), (max((((/* implicit */unsigned long long int) (signed char)100)), (7618014128022603070ULL)))));
        /* LoopSeq 1 */
        for (unsigned short i_13 = 3; i_13 < 9; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 6; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        {
                            arr_57 [i_12] [i_12] [i_13] [i_14] [i_15] [i_12] = ((/* implicit */signed char) arr_55 [i_12] [i_13] [i_14] [i_12] [i_16]);
                            var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_12] [i_13 - 2] [i_14] [i_15])) ? (var_10) : (((/* implicit */int) arr_20 [i_16] [i_16] [i_16] [i_16] [(unsigned char)4] [i_16]))))) ? (var_13) : (((/* implicit */int) arr_44 [i_15]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_12] [i_12])) ? (((/* implicit */int) arr_56 [i_12] [i_14] [i_12])) : (var_10)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_12] [i_13] [i_16]))))) : (((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62596))) : (196117266U)))))));
                            var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_12]))));
                        }
                    } 
                } 
            } 
            arr_58 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (7618014128022603069ULL)));
        }
        /* LoopSeq 3 */
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            arr_63 [5] [i_12] [6LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_12] [i_12])) ? (((/* implicit */long long int) (+((+(((/* implicit */int) arr_20 [i_12] [i_17] [i_17] [i_17] [i_12] [i_17]))))))) : ((+(((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_12])))))))));
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_17] [i_17] [i_12])) : (((/* implicit */int) arr_13 [i_17] [i_17] [i_12]))))), (((unsigned int) (unsigned char)105))))) ? (((/* implicit */int) arr_43 [i_12] [i_12] [i_12] [(short)7])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [7LL] [i_17] [i_17])))))) || (((/* implicit */_Bool) 4294967295U)))))));
            var_38 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_12] [i_17]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_12])))))))), (((((/* implicit */_Bool) arr_9 [i_12])) ? (arr_9 [i_12]) : (arr_9 [i_12])))));
        }
        for (unsigned short i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            var_39 = ((/* implicit */_Bool) arr_33 [i_12]);
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60604)) ? (((/* implicit */int) (unsigned short)30997)) : (((/* implicit */int) (unsigned short)0))));
        }
        for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            arr_69 [i_12] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (~(var_4)))))));
            arr_70 [i_12] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [(short)9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4053090432U)) ? (((/* implicit */int) (short)9038)) : (((/* implicit */int) (signed char)77))))) : (max((arr_9 [i_12]), (((/* implicit */long long int) arr_56 [i_12] [i_12] [i_12]))))));
            arr_71 [i_12] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_39 [5ULL])) < (((/* implicit */int) arr_39 [i_12])))))));
        }
    }
}
