/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128992
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((max((0U), (((/* implicit */unsigned int) -1559248620)))), (max((((/* implicit */unsigned int) (signed char)37)), (2U))))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_6 [i_1 - 2] [i_0] [i_1 + 1]), (arr_6 [i_1 - 1] [i_0] [i_1 - 2])))), (max((((/* implicit */unsigned int) var_12)), (4294967292U)))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((1626661593U), (((/* implicit */unsigned int) (short)-28790))))), (max((0LL), (((/* implicit */long long int) max((arr_5 [i_0] [i_1 - 2] [i_1 + 1] [i_2]), (arr_5 [(unsigned short)3] [(unsigned short)3] [i_2] [9]))))))));
                    arr_9 [i_0] = ((/* implicit */long long int) max((max((var_0), (((/* implicit */short) arr_2 [i_2])))), (((/* implicit */short) max((((/* implicit */signed char) arr_2 [i_2])), (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) arr_13 [i_4] [i_4 - 2] [i_3] [i_1 - 1]))))), (max((((/* implicit */long long int) var_7)), (9223372036854775807LL)))));
                                arr_18 [i_0] [i_0] [i_3] [i_4 + 1] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_4 - 2] [i_3]), (arr_15 [i_0] [i_5] [i_0] [i_4] [i_4 - 1] [i_3])))), (max((((/* implicit */long long int) arr_11 [i_1 + 2] [i_1 - 1] [i_1 - 2])), (var_13)))));
                                arr_19 [i_5] [i_5] [(unsigned short)4] [i_5] [i_0] = ((/* implicit */int) max((max((arr_17 [i_1 + 2] [i_0]), (arr_17 [i_1 + 2] [i_0]))), (max(((short)-28790), (arr_17 [i_1 - 2] [i_0])))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */short) max((max((((/* implicit */long long int) max((var_11), ((unsigned char)192)))), (max((-1LL), (((/* implicit */long long int) (unsigned short)0)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)127)), (max((((/* implicit */unsigned int) (_Bool)1)), (0U))))))));
                }
                var_19 -= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) arr_15 [i_0] [i_1 + 2] [(_Bool)1] [i_0] [(_Bool)1] [i_0])), (26U))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_15 [i_0] [i_1 - 1] [(_Bool)1] [i_1] [i_1] [i_0])), (var_7))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) (-2147483647 - 1))), (arr_21 [i_6]))), (max((5423214720766699954LL), (0LL))))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_6] [i_7] [i_6] = ((/* implicit */short) max((max((arr_20 [i_7]), (arr_20 [i_7]))), (max((arr_20 [i_7]), (((/* implicit */unsigned char) var_8))))));
            var_21 -= ((/* implicit */signed char) max((((/* implicit */long long int) max((615363705), (((/* implicit */int) arr_24 [i_6]))))), (max((((/* implicit */long long int) (unsigned char)174)), (911832789269059240LL)))));
        }
    }
    for (long long int i_8 = 1; i_8 < 15; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) (short)-28790)), (-2)));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_22 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-1112344979)))), (max((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-9)))), (max((0LL), (((/* implicit */long long int) var_2))))))));
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_11 = 2; i_11 < 15; i_11 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) max((max((arr_22 [i_8] [i_8] [i_11 + 1]), (((/* implicit */int) var_15)))), (max((arr_22 [i_8] [i_8] [i_10]), (arr_22 [i_8 + 1] [i_8] [i_9])))));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_28 [i_8]), (((/* implicit */long long int) (unsigned char)130))))), (max((16002749337196393044ULL), (((/* implicit */unsigned long long int) arr_28 [i_8]))))));
                        var_25 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) 1112344978)), (-255521405928392337LL))), (((/* implicit */long long int) max(((short)-8670), (arr_44 [i_8]))))));
                        arr_45 [i_12] [i_12] [i_8] [i_11] [i_8] [10] [i_8] = max((((/* implicit */long long int) max((1112344978), (((/* implicit */int) (short)28789))))), (max((arr_21 [i_8]), (9223372036854775807LL))));
                        arr_46 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8] = ((/* implicit */long long int) max((max((-1295979712), (((/* implicit */int) var_15)))), (max((var_12), (((/* implicit */int) arr_26 [i_8 - 1] [i_11 - 2]))))));
                    }
                    var_26 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_3)))), (max((796830520397836622ULL), (((/* implicit */unsigned long long int) var_6))))));
                    var_27 = ((/* implicit */unsigned short) max((max((0U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)111))))));
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    arr_50 [i_8] [i_8] [i_13] [i_13] = ((/* implicit */short) max((max((arr_21 [i_8 - 1]), (((/* implicit */long long int) max((((/* implicit */int) var_0)), (arr_47 [i_8] [i_8] [i_10] [i_13] [i_8] [i_13])))))), (((/* implicit */long long int) max(((short)28887), (var_0))))));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) max((max((((/* implicit */int) arr_34 [i_8 + 1] [i_8 - 1])), (var_7))), (max((((/* implicit */int) arr_34 [i_8 + 1] [i_8 + 1])), (2147483647)))));
                        arr_53 [(unsigned short)6] |= ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_6)), (arr_21 [i_8 - 1]))), (((/* implicit */long long int) max((-1112344979), (((/* implicit */int) (unsigned short)65535)))))));
                        var_29 -= ((/* implicit */_Bool) max((max((4294967245U), (((/* implicit */unsigned int) arr_31 [i_8 + 1])))), (max((var_3), (((/* implicit */unsigned int) var_2))))));
                    }
                    for (short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        arr_57 [i_8] [(short)0] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_55 [i_8] [i_8] [i_8] [1ULL] [i_8 + 1])), ((unsigned char)192)))), (max((var_2), (((/* implicit */int) arr_55 [i_8] [i_8] [i_8] [i_8] [i_8 + 1]))))));
                        var_30 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_56 [i_8] [i_9] [i_9] [i_13] [i_13])), ((unsigned char)255)))), (max(((unsigned short)1), (((/* implicit */unsigned short) var_11)))))), (max((var_14), (((/* implicit */unsigned short) var_8))))));
                    }
                }
                /* vectorizable */
                for (long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    var_31 = ((/* implicit */short) (signed char)64);
                    var_32 *= ((/* implicit */short) (-2147483647 - 1));
                    arr_61 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (unsigned short)24169);
                }
                var_33 = ((/* implicit */int) max((max((((/* implicit */long long int) max((var_1), (var_12)))), (5423214720766699953LL))), (max((-1074822217090011131LL), (((/* implicit */long long int) (unsigned char)192))))));
            }
        }
        var_34 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((-294734969), (131040)))), (-7877968933369930951LL)));
    }
    /* vectorizable */
    for (long long int i_17 = 1; i_17 < 16; i_17 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) 4294967269U);
        arr_64 [i_17] = ((/* implicit */int) (unsigned short)41367);
    }
}
