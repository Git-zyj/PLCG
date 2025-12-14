/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147637
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
    var_10 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_2)))))) ? (min((var_1), (((/* implicit */long long int) ((13181489772453051485ULL) != (14728470560196013067ULL)))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 14728470560196013067ULL)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)-84)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_4 [i_0] [(_Bool)1] [i_1] |= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [17U])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (-7532002500884172285LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))));
                var_12 = ((/* implicit */unsigned char) 32601332U);
            }
            for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_13 *= ((/* implicit */signed char) var_7);
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_4])) % (((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_4]))))) ? (((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_10 [i_0] [i_1]))))) : (((/* implicit */int) arr_9 [i_1])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 3) 
                {
                    arr_17 [i_3] [i_5 - 2] = ((/* implicit */unsigned char) ((((unsigned int) arr_1 [i_0] [(_Bool)1])) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                    arr_18 [i_1] [i_0] [(unsigned short)4] [i_1] [i_3] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 25165824)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15496)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [7LL] [i_1])) : (((/* implicit */int) (unsigned char)128)))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            arr_25 [i_3] [i_1] [i_3] [i_3] [i_6] [i_7] = ((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_3]);
                            arr_26 [i_0] [i_7] [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 125829120)) ? (32601332U) : (32601308U))) % ((~(2740517912U))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (32601308U))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_6] [i_1] [4LL] [i_3])) - (((/* implicit */int) (unsigned char)255)))))))))));
                            arr_27 [i_0] [(unsigned char)12] [i_3] [i_3] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */long long int) -125829121))))) ? (((/* implicit */unsigned long long int) var_0)) : ((-(3718273513513538542ULL)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)179)) & (((/* implicit */int) (short)(-32767 - 1)))))) & (32601352U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) var_7)), (var_0))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27442)))))))));
                arr_28 [i_3] = ((/* implicit */_Bool) 1335427222);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            arr_31 [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (155292845))) % (((/* implicit */int) arr_24 [(unsigned short)18] [(unsigned short)18] [i_0] [i_0] [i_0]))));
            var_16 = ((/* implicit */unsigned short) ((arr_30 [i_0]) << (((var_0) + (4895397566535812015LL)))));
        }
        arr_32 [i_0] |= ((/* implicit */signed char) ((((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)13033)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30720)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4262365963U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))))))) : ((~(var_5))))))));
        var_17 = ((/* implicit */signed char) max((2519782468U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)71)) ^ (((/* implicit */int) (signed char)60)))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                {
                    var_18 &= ((/* implicit */signed char) max((min((max((var_4), (((/* implicit */unsigned int) 155292826)))), (max((2898737561U), (3341924209U))))), (((4262365943U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)480)))))));
                    var_19 &= ((/* implicit */unsigned short) (short)30720);
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 18; i_11 += 2) 
                    {
                        arr_40 [i_0] [i_9] [i_10] [i_11] [i_9] [i_9] = (_Bool)1;
                        var_20 += ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_10 + 4] [i_10 + 4] [i_10 + 4] [i_10 + 4] [i_9]))))), (((/* implicit */long long int) var_2))));
                        arr_41 [i_11] [4] [i_9] [i_9] [15] [i_0] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (unsigned char)24)))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) arr_45 [5U] [(unsigned char)9] [i_10] [2LL] [i_0])) <= ((-9223372036854775807LL - 1LL))))) == (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_0])))))))), (max((2040U), (((/* implicit */unsigned int) (_Bool)0))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (short)-1))));
                    }
                }
            } 
        } 
        var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((3718273513513538569ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (signed char)-23)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_35 [i_0]), (((/* implicit */unsigned int) (signed char)78))))) - (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (var_5))))))));
    }
    for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((long long int) var_3)) != (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13] [i_13]))))))));
            /* LoopSeq 2 */
            for (unsigned short i_15 = 3; i_15 < 20; i_15 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_46 [i_14]))));
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 19; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) max((6729776560518503677ULL), (((/* implicit */unsigned long long int) (short)-30712))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-17))))) : (805830275659241934ULL))))));
                            var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)92))) : (6729776560518503670ULL))), (((/* implicit */unsigned long long int) ((((-301665360) + (2147483647))) >> (((8455932487361317481LL) - (8455932487361317463LL))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                var_28 = ((/* implicit */short) arr_52 [i_18] [i_18] [i_14] [i_13]);
                var_29 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16256))) <= (4294967278U)));
                arr_58 [i_13] [i_14] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_51 [i_18])) != (((/* implicit */int) arr_51 [i_14]))));
            }
        }
        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((18446744073709551615ULL) << (((((/* implicit */int) var_8)) + (68))))) == (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)30741)), (var_0)))))))));
        arr_59 [i_13] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_13] [i_13] [i_13])) ? (11716967513191047945ULL) : (var_5)))) ? (((((/* implicit */int) arr_50 [i_13] [(_Bool)1] [i_13])) - (((/* implicit */int) arr_50 [i_13] [i_13] [i_13])))) : (((/* implicit */int) max(((short)510), (arr_50 [i_13] [i_13] [i_13])))));
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 1) 
        {
            for (unsigned char i_20 = 1; i_20 < 19; i_20 += 1) 
            {
                {
                    var_31 ^= ((/* implicit */long long int) arr_50 [i_20] [i_20 - 1] [13U]);
                    arr_64 [i_13] [i_19] [i_20] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-32761), (((/* implicit */short) (signed char)-87))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_20 + 2] [i_20 + 2] [i_20 - 1]))) : (var_4)))) : (((((/* implicit */_Bool) 8935141660703064064LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_20 + 2] [i_20 + 2] [i_20 - 1])))))));
                    arr_65 [i_13] [i_19] = ((/* implicit */signed char) arr_52 [i_13] [i_19] [i_20] [i_20]);
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_62 [i_13] [i_13] [i_13] [i_13]))));
    }
    /* vectorizable */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_22 = 0; i_22 < 23; i_22 += 1) 
        {
            for (unsigned int i_23 = 1; i_23 < 22; i_23 += 2) 
            {
                for (int i_24 = 0; i_24 < 23; i_24 += 3) 
                {
                    {
                        arr_75 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) ((signed char) 0ULL));
                        arr_76 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_70 [i_23 - 1] [i_23 + 1] [i_23 - 1])) && (((/* implicit */_Bool) arr_70 [i_24] [i_23 - 1] [i_23]))));
                        arr_77 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_74 [i_23 + 1] [i_21] [i_23 - 1] [i_23 + 1])) & (((/* implicit */int) arr_70 [22] [i_22] [i_23 - 1]))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (unsigned short)22))));
                    }
                } 
            } 
        } 
        arr_78 [i_21] = ((/* implicit */_Bool) (signed char)-67);
    }
    for (unsigned short i_25 = 0; i_25 < 15; i_25 += 1) 
    {
        arr_81 [i_25] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) (short)-14))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3221225472U)))) : (max((((/* implicit */unsigned long long int) min(((short)-32761), (((/* implicit */short) (_Bool)1))))), (max((((/* implicit */unsigned long long int) var_6)), (var_9)))))));
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (signed char)-4))));
        var_35 = ((/* implicit */unsigned char) (((+(((arr_49 [i_25] [i_25] [i_25]) ^ (((/* implicit */unsigned long long int) var_4)))))) % (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned short)8160)), (arr_53 [i_25] [i_25]))), (3104558259843532807LL))))));
    }
    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (18014398505287680ULL))) : (var_9))))));
    var_37 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))))));
}
