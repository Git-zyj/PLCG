/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10236
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
    var_19 = ((/* implicit */unsigned long long int) -1LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_8 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14483))) : (min((arr_7 [i_0]), (((/* implicit */long long int) var_10))))))) || (((/* implicit */_Bool) var_15))));
                arr_9 [i_0] [15] = arr_5 [i_0] [i_1 + 1] [i_1 - 1];
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 9061718333372934462LL)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) var_14)))))), (var_14))))));
                        var_21 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51053))))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_8))))));
                        var_22 = ((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) var_16))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((arr_13 [i_1 + 1] [i_1 - 1]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_21 [(unsigned short)3] [i_1 + 1] [i_1 + 1] [i_1] [15U] [i_0] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (arr_13 [i_0 - 1] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)51058)) <= (var_0))))) : (var_8)));
                            var_24 = ((unsigned long long int) (_Bool)1);
                            arr_22 [i_2] [i_0] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_17 [i_1] [i_0] [i_1 - 1] [i_4 - 1]) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (unsigned short)14502)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_16))));
                            arr_25 [(signed char)7] [i_4 - 1] [i_0] [13LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (signed char)-121))));
                        }
                        for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) (!((_Bool)1)));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */int) (unsigned short)14482)) / (((/* implicit */int) arr_16 [i_4 - 1] [i_1] [i_1 + 1] [i_1] [i_0])))))));
                        }
                        arr_28 [i_0] = arr_23 [i_0] [(unsigned char)15] [10U] [(signed char)17] [i_0] [i_4];
                    }
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_28 ^= ((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned short)51045)));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0])) ? ((~(arr_7 [i_0]))) : (((arr_7 [i_0]) + (arr_7 [i_0])))));
                        var_30 = ((/* implicit */unsigned char) arr_23 [(short)19] [i_1] [(short)14] [i_2] [i_0] [i_8]);
                    }
                    arr_31 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned short)14479), (((/* implicit */unsigned short) (_Bool)1)))))));
                    arr_32 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) var_4);
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-24LL)))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14477)))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            {
                                arr_40 [(short)1] [i_0] [i_9] [i_10] [i_11] = arr_16 [i_0] [(signed char)0] [(unsigned char)2] [i_10] [i_1 - 1];
                                var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (min((((/* implicit */int) (signed char)-21)), (var_7))) : (((/* implicit */int) arr_35 [i_0 - 1] [i_10] [i_10] [i_11]))))) % (-3611018575909067148LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_12 = 4; i_12 < 19; i_12 += 3) 
                    {
                        var_33 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_12))))) ? (max((var_17), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3406977776U)) ? (((/* implicit */int) arr_34 [(unsigned char)10] [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [18]))))))), (((/* implicit */unsigned int) max((arr_27 [i_12] [i_12] [i_12 + 1] [i_0 - 1] [(_Bool)1] [i_0] [i_0]), (var_2))))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (min((((/* implicit */int) arr_14 [(_Bool)1] [i_12 + 1] [i_1] [(_Bool)1])), (min((arr_20 [(unsigned short)3] [i_1] [7LL] [i_9] [(unsigned char)3]), (((/* implicit */int) (unsigned short)14459)))))))))));
                    }
                    for (signed char i_13 = 1; i_13 < 17; i_13 += 3) 
                    {
                        arr_47 [(unsigned short)19] [i_0] [i_0] [12U] = ((/* implicit */_Bool) ((unsigned char) max((390094590), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-23432)) + (23450))))))));
                        arr_48 [(_Bool)1] [i_1] [i_9] [i_0] = ((/* implicit */unsigned short) var_6);
                        var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_15), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_15 [2LL] [i_1 - 1] [i_9] [i_13])) : (((max((arr_36 [i_13] [(short)17]), (4251612747697027285ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                    }
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) min((2566610054U), (((((/* implicit */_Bool) max((arr_43 [i_9] [i_1] [(signed char)11] [i_9]), (((/* implicit */short) var_14))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (var_9))))))));
                }
            }
        } 
    } 
    var_37 += ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) min(((short)-27085), (var_5))))))) : (((/* implicit */int) var_1)));
}
