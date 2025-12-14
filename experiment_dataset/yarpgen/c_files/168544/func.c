/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168544
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */long long int) arr_6 [i_0])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_1 [i_1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -498164826)) ? (((/* implicit */int) arr_4 [i_0])) : (arr_6 [i_1])))) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-26745))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)26745))));
                            var_16 = ((/* implicit */int) arr_2 [1]);
                            var_17 = ((/* implicit */int) max((var_17), (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])));
                            var_18 |= ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((((((/* implicit */int) arr_4 [i_1 + 2])) + (((/* implicit */int) arr_4 [i_1 - 1])))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_5 [i_0])) >> (((arr_2 [i_1 - 1]) + (8044529899129656535LL)))))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -498164826)) * (var_10)))) ? (((((/* implicit */_Bool) (short)-26751)) ? (498164825) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_12 [i_1])))) : (((((/* implicit */_Bool) (short)26730)) ? (((/* implicit */int) (short)-26756)) : (((/* implicit */int) arr_7 [i_0 - 2] [i_1 - 1] [i_0 - 2] [i_1 - 1]))))));
                var_21 = ((/* implicit */long long int) var_7);
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (max((((((/* implicit */_Bool) (short)26718)) ? (498164825) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)132)))))) : (((/* implicit */int) (unsigned char)231))));
    /* LoopSeq 4 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_23 = ((/* implicit */long long int) arr_6 [i_4]);
        var_24 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_4])) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) : (arr_8 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) (unsigned char)147)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4])))))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (short i_7 = 4; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_25 = var_5;
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_7])) ? (var_11) : (((/* implicit */int) arr_19 [i_7 - 1] [i_7 + 1] [i_7 - 1] [(signed char)13]))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_6] [i_7 - 2])) || (((/* implicit */_Bool) arr_10 [(short)9] [i_6])))) ? (((var_11) % (arr_6 [i_7]))) : (var_11)))) : (((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_7 - 1] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_6) / (((/* implicit */long long int) var_10))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_8])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8])) ? (arr_6 [i_8]) : (((/* implicit */int) (short)-26740)))))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_28 = ((/* implicit */long long int) var_11);
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_24 [i_10])) : (((/* implicit */int) (short)-32744))))) ? (((int) (short)-26734)) : (((/* implicit */int) arr_32 [i_8] [i_9] [i_10]))))) ? (((((/* implicit */_Bool) (short)26740)) ? (((/* implicit */int) arr_12 [i_8])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)113)) < (((/* implicit */int) arr_26 [i_8])))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (signed char i_12 = 2; i_12 < 15; i_12 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0), (((/* implicit */int) (short)-26739))))) ? (((/* implicit */long long int) 1709867703)) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned char)11] [(unsigned char)11] [i_11] [11] [i_11] [i_10]))))) : (arr_6 [i_8])));
                            var_31 -= ((/* implicit */short) ((long long int) (signed char)(-127 - 1)));
                            var_32 = ((/* implicit */short) 0);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) ((((arr_27 [i_9] [i_8]) != (((/* implicit */long long int) 498164815)))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) (short)24797)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11635))) : (arr_27 [i_8] [9U]))))) : (arr_8 [i_8] [i_8] [i_10])));
            }
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_35 [i_8] [i_8] [i_8] [(unsigned char)5] [i_9]) ? (((/* implicit */int) arr_35 [i_8] [i_8] [i_9] [(unsigned short)14] [i_9])) : (0)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) arr_3 [i_8])) ? (arr_3 [i_9]) : (arr_3 [i_8])))));
            var_35 = ((/* implicit */int) var_5);
        }
        for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)24636)) ? (0) : (((/* implicit */int) (signed char)0))));
            var_37 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_36 [i_8] [i_13] [i_13] [i_8])) ? (min((((/* implicit */long long int) arr_29 [i_8] [i_8] [i_8])), (arr_1 [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13]))))), (((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 1))))), (var_4))))));
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) -1))));
        }
        for (short i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-2116924467)))) ? (((/* implicit */int) (short)32754)) : (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [(short)1])));
            var_40 = ((/* implicit */short) (((~(((/* implicit */int) arr_29 [i_8] [i_8] [i_14])))) != (((/* implicit */int) var_9))));
        }
        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_8]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_8]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1502980115352642039LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-32755)))))))) : (((/* implicit */int) arr_24 [i_8]))));
    }
    for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        var_42 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (short)-26735)) ? (((((/* implicit */_Bool) arr_45 [i_15])) ? (5250686574445553712LL) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_15]))))) : (((/* implicit */long long int) 2137466955U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_10)))) && (((/* implicit */_Bool) arr_45 [i_15])))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                {
                    var_43 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                    var_44 = ((/* implicit */short) var_1);
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (arr_52 [i_16] [i_15])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [6LL] [(signed char)18] [i_16] [i_18]))) : (var_10)))) ? (((/* implicit */int) arr_52 [(signed char)0] [i_18])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (-2090450910409071313LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (((((/* implicit */_Bool) 2137466962U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)1246)))) : ((+(var_11)))))));
                        /* LoopSeq 4 */
                        for (short i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            var_46 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_45 [i_16])) ? (((/* implicit */int) arr_45 [i_16])) : (((/* implicit */int) arr_45 [i_15])))) == (((/* implicit */int) ((268434944) >= (((/* implicit */int) (unsigned char)166)))))));
                            var_47 -= ((/* implicit */_Bool) arr_54 [i_19] [i_18] [7LL] [i_16] [i_15]);
                            var_48 += ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_9)) ? (arr_54 [i_19] [i_18] [i_15] [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))))) < (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_53 [i_15] [(unsigned char)21] [i_16] [i_17] [i_17] [15LL])) ? (((/* implicit */int) var_4)) : (var_11))), (((/* implicit */int) ((signed char) var_4))))))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_50 [i_15] [i_15] [i_16] [i_15])) : (((/* implicit */int) (signed char)32))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [16LL] [i_17])) * (((/* implicit */int) arr_50 [i_15] [i_16] [i_16] [i_18]))))) : (3U)));
                            var_50 = ((/* implicit */unsigned char) arr_55 [i_20] [i_20] [i_15] [i_17] [i_16] [i_15] [i_15]);
                        }
                        /* vectorizable */
                        for (long long int i_21 = 1; i_21 < 20; i_21 += 4) 
                        {
                            var_51 |= ((/* implicit */signed char) arr_57 [i_15] [i_21] [i_21] [i_21 - 1] [i_21 + 1] [i_21 + 2] [i_21 - 1]);
                            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_15])) | (((/* implicit */int) arr_49 [i_15] [i_16] [i_17] [i_21]))))) ? (var_10) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2137466955U))))))));
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_16] [i_17] [i_21 + 1] [i_21] [i_21 + 1] [(short)13] [i_21 + 1])) ? (arr_57 [i_16] [i_17] [i_21 + 2] [i_21] [i_21] [i_21] [i_21 - 1]) : (arr_57 [i_16] [i_15] [i_21 + 2] [i_21] [i_21] [(signed char)3] [i_21 - 1])));
                            var_54 = ((/* implicit */long long int) arr_44 [i_21]);
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_15] [i_16] [(_Bool)1] [i_16])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)307)) != (((/* implicit */int) arr_56 [i_15] [i_17] [i_18] [i_16]))))) : (((((/* implicit */_Bool) arr_56 [i_16] [(signed char)9] [i_15] [i_16])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_56 [i_15] [i_16] [i_17] [i_16]))))));
                            var_56 = ((/* implicit */int) var_12);
                            var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_62 [i_15] [i_15] [i_16] [15LL]))))) ? (((/* implicit */int) arr_45 [i_22])) : (((((/* implicit */_Bool) 5)) ? (((/* implicit */int) (short)31782)) : (((/* implicit */int) (signed char)18))))));
                            var_58 = var_8;
                        }
                        var_59 = min((((/* implicit */long long int) 1922672065)), (-6600853361748066599LL));
                        var_60 = ((/* implicit */int) (short)24636);
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_16] [i_16])) ? (((((/* implicit */_Bool) arr_44 [i_15])) ? (((/* implicit */int) (short)-22680)) : (((/* implicit */int) arr_44 [i_17])))) : (((/* implicit */int) ((unsigned char) (short)-3)))));
                        var_62 = ((/* implicit */unsigned short) var_2);
                    }
                }
            } 
        } 
        var_63 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 268435455LL)) ? (4447373666091147471LL) : (arr_61 [i_15] [i_15]))), (((/* implicit */long long int) 126357750))));
    }
    for (unsigned char i_24 = 2; i_24 < 12; i_24 += 2) 
    {
        var_64 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_24 - 1]))) >= (min((((/* implicit */long long int) var_8)), (-2090450910409071313LL)))));
        var_65 = ((/* implicit */_Bool) (unsigned char)181);
        var_66 |= ((/* implicit */short) arr_2 [17LL]);
    }
    var_67 += ((/* implicit */signed char) var_11);
}
