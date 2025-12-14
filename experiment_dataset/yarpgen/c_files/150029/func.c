/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150029
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_1 [i_2 - 1]))))), (max((((/* implicit */unsigned int) var_4)), ((-(1584819758U)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((long long int) (_Bool)1))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_7 [i_0] [i_0]))) ? (((/* implicit */unsigned int) (~(316707562)))) : (arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_4])));
                            var_16 = ((/* implicit */unsigned char) arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_2 - 1] [i_0 - 1] [i_3 + 1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1 - 2] [i_2] [i_3] [i_2 + 1] [i_2])) ? (((/* implicit */unsigned long long int) -671534887673644964LL)) : (2639638212384412115ULL))))));
                            var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_3]) ^ (((/* implicit */int) ((-671534887673644964LL) > (0LL))))))), (15807105861325139500ULL)));
                            var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_11))))))));
                            var_19 = ((/* implicit */long long int) var_1);
                        }
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_20 ^= ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) -57266307)), (15542536921673416768ULL))), (((/* implicit */unsigned long long int) (signed char)17)))), (((/* implicit */unsigned long long int) (signed char)3))));
                            var_21 ^= ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) (unsigned char)22)), (16724547382336491753ULL))), (min((((/* implicit */unsigned long long int) (signed char)-3)), (260743980315917698ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2639638212384412116ULL), (1722196691373059862ULL)))) ? (((/* implicit */long long int) arr_9 [i_1] [i_1 + 1] [i_1] [i_3 + 1])) : (((((/* implicit */_Bool) 1535126377)) ? (((/* implicit */long long int) 4294967295U)) : (2675112558128936746LL))))))));
                        }
                        var_22 = ((/* implicit */short) 15807105861325139500ULL);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (int i_8 = 4; i_8 < 24; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) (unsigned char)244)), (7172404988173396515LL))))))));
                    arr_30 [i_7] [i_8] = 4294967289U;
                    arr_31 [i_0] [i_7] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_26 [i_8 - 2]), (((/* implicit */long long int) arr_5 [i_0 + 1]))))), (min((((/* implicit */unsigned long long int) arr_9 [i_8 - 4] [i_8 - 4] [i_0 - 1] [i_0])), (18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                arr_39 [i_0] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_8 - 4] [i_0 - 1]) : (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (arr_13 [11] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_10]) : (((/* implicit */unsigned int) arr_7 [i_8 - 1] [i_0 + 1]))))) : (((long long int) var_7))));
                                var_24 += ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]);
                                var_25 ^= max(((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_37 [i_0 - 1] [i_0 - 1] [i_8 - 1] [i_9] [i_7])) : (arr_32 [i_0] [i_7] [i_9] [i_10]))))), (((/* implicit */long long int) min((min(((short)1174), (arr_23 [i_0]))), (var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        var_26 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_11] [i_11] [i_11]))))), (((unsigned int) -1535126362))))) ? ((-(max((((/* implicit */unsigned long long int) 1437087088)), (3293128453710974348ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -225701774591811992LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (1743193759U)))))));
        arr_43 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7172404988173396510LL)) ? (arr_9 [i_11] [i_11] [i_11] [i_11]) : (arr_9 [i_11] [i_11] [i_11] [i_11])))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (1846160636049438094ULL) : (((/* implicit */unsigned long long int) arr_9 [i_11] [i_11] [i_11] [i_11])))) : (((1846160636049438094ULL) + (((/* implicit */unsigned long long int) 1535126362))))));
        arr_44 [i_11] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((16600583437660113521ULL) != (((/* implicit */unsigned long long int) arr_28 [i_11]))))), (((((/* implicit */_Bool) arr_28 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_24 [i_11] [i_11])))));
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((6406431703940644654ULL), (((/* implicit */unsigned long long int) 712696379U))))) ? ((~(var_3))) : (((/* implicit */int) arr_50 [i_11] [i_13] [9LL])))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((unsigned int) arr_38 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_12] [i_13] [i_13]))))))));
                            arr_55 [i_11] [i_12] [i_12] [i_14] [i_15] [i_15] [i_15] = (!(((/* implicit */_Bool) 2597447921738614308LL)));
                        }
                        for (short i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
                        {
                            arr_60 [i_11] [i_12] [i_13] [i_12] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) > (712696386U)));
                            var_29 = ((/* implicit */long long int) (-((+(2755930318080699406ULL)))));
                            arr_61 [i_12] = ((/* implicit */unsigned long long int) 0);
                        }
                        var_30 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1174))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(3850431416U)))) != (((((/* implicit */_Bool) arr_38 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) 939188102)) : (arr_8 [i_12] [i_12] [i_14])))))) : (2147483647));
                    }
                } 
            } 
        } 
    }
    var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_5));
}
