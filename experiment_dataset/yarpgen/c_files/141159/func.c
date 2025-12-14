/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141159
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [5U] = 262939093;
            var_20 = ((/* implicit */signed char) ((min((262207473583058024LL), (arr_1 [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (signed char)55)) - (52))))), ((-(max((arr_2 [i_1]), (var_0)))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) var_19);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 667083790U)) && (((/* implicit */_Bool) 1857992096U))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */short) (-(arr_0 [i_3])));
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    arr_17 [i_5] [i_4] [i_3] [(unsigned char)18] [i_0] [i_5] = ((/* implicit */short) var_3);
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_12 [i_3] [i_4] [i_6]))));
                        var_25 ^= ((((/* implicit */_Bool) (short)-21038)) ? (((/* implicit */long long int) ((/* implicit */int) (short)19356))) : (886951784244022721LL));
                    }
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_3] [i_4] [i_4] [7LL] [i_5])) : (((/* implicit */int) arr_12 [i_4] [i_3] [i_0]))));
                        arr_24 [i_0] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 417746054))))) & (((/* implicit */int) arr_18 [i_0] [17U] [i_3] [i_4] [i_4] [i_5] [i_5]))));
                    }
                    arr_25 [i_5] [i_3] = ((/* implicit */short) ((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_4] [i_5] [i_0])))));
                }
                arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_3] [i_3] [i_0])) ? (((/* implicit */unsigned int) 417746054)) : (arr_9 [i_4])));
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [16LL] [i_0] [i_3] [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 2147483647))) != (2147483632)));
                    arr_30 [i_0] [i_3] [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) -417746054)) : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        arr_33 [15U] [i_9] [i_8] [1U] [15U] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_9 [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1947130541))))) : (((((/* implicit */_Bool) 0LL)) ? (2147483647) : (((/* implicit */int) (signed char)0))))));
                        arr_34 [i_9] [i_9] [i_8] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
                        arr_35 [i_0] [i_3] [i_4] [i_8] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_9 + 3] [i_4] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_28 [(signed char)1] [i_9 + 3] [i_8] [14LL] [i_9])));
                        arr_36 [i_0] [i_3] [(unsigned char)15] [i_4] [i_8] [5U] = ((/* implicit */signed char) ((arr_21 [i_4] [(unsigned char)4] [i_4] [0LL] [i_4]) / (((/* implicit */long long int) (-(558563716U))))));
                        arr_37 [i_0] [i_3] [i_4] [(short)3] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    }
                }
                for (short i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                {
                    arr_42 [i_10] [i_4] [i_3] [i_10] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_1))))));
                    var_26 = ((/* implicit */long long int) arr_12 [i_3] [i_3] [i_4]);
                    arr_43 [i_10] = var_16;
                }
                for (short i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_0] [i_11] [i_0] [i_11] [i_11] = (+((+(2334699978U))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2096640LL)))) * (0U)));
                    arr_47 [i_0] [i_11] [i_4] [i_11] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_0)) : (var_7)))));
                    arr_48 [i_11] [i_4] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_3] [i_11] [i_4] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_0])));
                }
                var_28 = ((/* implicit */int) ((arr_44 [i_0] [i_3] [i_3] [i_4] [i_4]) % (((/* implicit */long long int) (-(-417746069))))));
            }
            for (signed char i_12 = 3; i_12 < 18; i_12 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_12 - 1] [i_12 - 3]))));
                arr_51 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? ((~(var_0))) : ((~(-417746055)))));
            }
            for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                arr_55 [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1960267317U)) ? (var_13) : (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) : (arr_32 [i_0] [i_3] [i_13] [i_0] [i_0] [12U] [i_3]));
                /* LoopSeq 1 */
                for (int i_14 = 1; i_14 < 18; i_14 += 1) 
                {
                    var_30 = ((/* implicit */long long int) max((var_30), (((-7110745707928369069LL) - (((/* implicit */long long int) var_17))))));
                    arr_58 [i_14] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_9 [i_0]);
                    var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_57 [i_13])) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_0])) : (((/* implicit */int) var_16))));
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)93)) ? (((3113598476U) | (2023734573U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112)))));
                }
                arr_59 [i_13] |= var_1;
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    var_33 |= ((/* implicit */short) var_13);
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (unsigned char)226))));
                    arr_64 [i_0] [i_15] [i_3] [i_15] = ((/* implicit */signed char) ((-8324889037869616552LL) & (arr_39 [i_13] [i_13] [i_15] [i_13])));
                    arr_65 [i_0] [i_15] [i_0] [i_13] [i_15] = ((/* implicit */unsigned char) -417746055);
                }
            }
        }
        arr_66 [(short)11] [i_0] |= ((/* implicit */signed char) min((max((max((var_18), (((/* implicit */unsigned int) arr_22 [11LL] [i_0])))), (((/* implicit */unsigned int) var_19)))), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [11LL] [13LL]))));
        var_35 ^= ((/* implicit */signed char) (((-(988190234950448537LL))) + (((/* implicit */long long int) ((((((/* implicit */long long int) 2334699978U)) != (1241967155920634346LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) 27U)) ? (var_17) : (2660373490U))))))));
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 12; i_16 += 1) /* same iter space */
    {
        var_36 &= ((/* implicit */long long int) var_15);
        arr_69 [i_16] = ((/* implicit */unsigned int) arr_0 [i_16]);
    }
    for (short i_17 = 0; i_17 < 12; i_17 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) 0U))));
        arr_72 [i_17] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-4705)) % (((/* implicit */int) arr_63 [(unsigned char)8] [i_17] [(unsigned char)8]))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) arr_60 [i_17] [i_17] [i_17] [i_17] [i_17] [14U]))))) - (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_17] [i_17]))) : (arr_9 [i_17])))))));
        arr_73 [i_17] [(unsigned char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_17] [i_17])) ? (((/* implicit */int) (signed char)79)) : (arr_2 [i_17])))) ? (max((((/* implicit */int) arr_15 [i_17] [18] [i_17] [i_17] [i_17])), (-417746032))) : (min((arr_11 [i_17] [i_17]), (arr_2 [i_17])))));
    }
    var_38 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_12))) & (((long long int) var_12))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
    {
        var_39 = ((/* implicit */short) (unsigned char)0);
        var_40 = (~(((/* implicit */int) ((4080418357647876028LL) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        arr_76 [i_18] = ((/* implicit */long long int) arr_75 [i_18]);
    }
    /* LoopSeq 2 */
    for (int i_19 = 0; i_19 < 15; i_19 += 1) 
    {
        var_41 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_74 [i_19])) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) arr_49 [17LL] [i_19] [i_19])))) : (((((/* implicit */int) arr_62 [i_19] [3LL] [3LL] [i_19])) * (((/* implicit */int) (unsigned char)240))))))) : ((-(arr_75 [i_19]))));
        arr_79 [(short)12] [i_19] = ((/* implicit */unsigned int) var_11);
        arr_80 [i_19] [i_19] = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) arr_60 [i_19] [i_19] [i_19] [17LL] [(unsigned char)14] [i_19])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-10070)))) * ((-(((/* implicit */int) (signed char)127)))))));
    }
    for (signed char i_20 = 0; i_20 < 16; i_20 += 1) 
    {
        var_42 = ((/* implicit */short) min((max((arr_12 [i_20] [i_20] [i_20]), (arr_12 [i_20] [i_20] [i_20]))), ((unsigned char)25)));
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-14))))) >= ((-(var_9)))));
        arr_84 [i_20] [i_20] = ((/* implicit */unsigned int) -307544828);
        arr_85 [i_20] [i_20] = ((/* implicit */unsigned char) ((((long long int) var_14)) << (((max(((-(-1406431551492770679LL))), (((/* implicit */long long int) ((3221951352U) >> (((arr_19 [10LL] [i_20] [i_20] [i_20] [i_20]) - (876585229U)))))))) - (1406431551492770653LL)))));
        arr_86 [i_20] [i_20] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (arr_0 [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))))))));
    }
}
