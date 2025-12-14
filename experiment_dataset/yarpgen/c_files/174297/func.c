/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174297
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
    var_15 -= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_10))))) ^ (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_13)) - (44249))))))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned char) var_4);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) var_12)))) : (((((/* implicit */int) (unsigned char)78)) << (((-1253692038) + (1253692040))))))) * (((arr_4 [i_0] [i_0]) ? (((((/* implicit */int) var_12)) << (((/* implicit */int) var_6)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_11))))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0] [i_1])))) / (((/* implicit */int) arr_5 [i_0])))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) : (max((var_5), (var_5)))))));
                                arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)85)) == (((/* implicit */int) (unsigned char)78))))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) >= (((/* implicit */int) (unsigned char)78)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 3; i_5 < 24; i_5 += 1) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((arr_14 [i_5]) + (1473606908))) - (15)))))) ? (((((/* implicit */int) var_13)) & (((/* implicit */int) var_2)))) : (arr_14 [i_5]));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_5 - 2])) ? (((/* implicit */int) var_14)) : (arr_14 [i_5 - 3])));
                    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_13)) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_5] [i_6] [i_7] [i_7 - 1])) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) var_10))));
                    arr_22 [(signed char)1] [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_7 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))));
                    arr_23 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_6))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_21 [i_5] [(unsigned short)10] [i_10]))));
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) < (((/* implicit */int) var_2))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_1))) * (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_10)))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_1))))) : ((-(((/* implicit */int) arr_24 [(short)3] [i_5] [i_9]))))));
                        arr_32 [i_5 - 1] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (arr_14 [i_8])))) ? (arr_14 [i_8]) : (((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
    }
    for (short i_11 = 3; i_11 < 24; i_11 += 1) /* same iter space */
    {
        arr_35 [(short)14] = ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_28 [i_11])) - (21093))));
        arr_36 [i_11] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))) + (((((/* implicit */int) var_9)) / (((/* implicit */int) var_13))))))) ? (((((((/* implicit */int) var_13)) << (((((/* implicit */int) var_13)) - (44241))))) - (((((/* implicit */int) var_4)) / (var_5))))) : (((((((/* implicit */int) var_3)) <= (((/* implicit */int) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_26 [i_11] [i_11 - 1])) : (((/* implicit */int) var_11))))))));
        var_25 = ((/* implicit */short) ((((((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_33 [i_11])))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))))) ? (((/* implicit */int) arr_24 [i_11] [i_11] [i_11 - 1])) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) + (((((/* implicit */int) var_11)) / (((/* implicit */int) var_14))))))));
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)177));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_11))));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    for (short i_15 = 1; i_15 < 24; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) var_10)) / (((((/* implicit */int) var_2)) + (arr_30 [i_15 + 1] [i_11 + 1]))))))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((((((/* implicit */int) arr_16 [i_15])) - (((/* implicit */int) var_1)))) == (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_6)) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_21 [i_15] [i_13] [i_12]))))), (arr_44 [i_14] [i_15] [i_13] [i_14]))))))));
                            arr_50 [(signed char)13] [i_13] [i_13] [i_14] = ((/* implicit */signed char) ((((((/* implicit */int) arr_46 [i_11] [i_12] [i_13] [i_14])) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_21 [i_15 - 1] [i_12] [i_12])))) - (63))))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_30 [(signed char)20] [i_15])) ? (var_5) : (((/* implicit */int) arr_18 [i_11] [i_11 - 2] [i_13])))))) - (131097438)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_16 = 3; i_16 < 24; i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) ((((var_5) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_37 [i_16 - 2] [i_17] [22])) : (((/* implicit */int) arr_15 [(unsigned char)21] [i_17])))))) ? (max((((var_3) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))), (((var_6) ? (((/* implicit */int) var_7)) : (var_5))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_37 [i_16] [i_17] [i_18])))))));
                    var_31 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_8)) - (38)))))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) var_13)))) & (((1527028459) >> (((var_5) - (131097445)))))));
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_14 [i_16]) + (2147483647))) >> (((/* implicit */int) var_9))))) ? (((int) arr_37 [i_16 - 1] [i_16] [i_16])) : (((/* implicit */int) max((arr_33 [i_16]), (((/* implicit */short) arr_49 [i_16] [i_16] [(signed char)21] [i_16 + 1] [i_16])))))))) ? (((((var_3) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))) << (((((/* implicit */int) arr_37 [i_16] [i_16 - 1] [i_16])) - (4227))))) : (((((((/* implicit */int) var_12)) | (((/* implicit */int) var_3)))) | (((var_9) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))));
        var_33 = min((((((/* implicit */_Bool) arr_24 [i_16 - 3] [i_16] [i_16])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_8))) > (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_9)))))))));
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) var_14))));
    }
    var_35 ^= ((/* implicit */int) var_11);
    var_36 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2))))) <= ((~(((((/* implicit */int) var_13)) + (((/* implicit */int) var_10))))))));
    var_37 *= ((/* implicit */short) max((min((((/* implicit */int) var_7)), (((((/* implicit */int) var_8)) % (var_5))))), (var_5)));
}
