/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175288
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
    var_18 = ((/* implicit */int) (~(((min((((/* implicit */unsigned int) var_12)), (1354090718U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((2940876578U) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
        arr_2 [5ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))) / (max((2940876584U), (((/* implicit */unsigned int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0])))))) : ((~(max((var_2), (((/* implicit */unsigned int) (short)13308))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_11 [(_Bool)1] [i_1] [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 1]))))) + (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) == (((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                            var_21 &= ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_7 [i_5] [i_2])))), (((/* implicit */int) ((unsigned char) var_2)))));
                            var_22 &= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_4 [i_3 - 2] [i_3 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 1])))));
                        }
                        arr_18 [i_4] [i_2] [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((signed char) 2554688589950805906ULL)), (var_10)))) * (((((/* implicit */int) (short)-15348)) / (((/* implicit */int) ((unsigned short) 6097065932096889727ULL)))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_6] [i_6 - 2] [i_6] = ((signed char) max((arr_3 [i_6 - 1] [i_3]), (arr_3 [i_1] [i_3])));
                        var_23 &= ((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))), (((/* implicit */int) arr_12 [i_1] [(unsigned char)4] [i_3] [i_2]))));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */int) max((min((arr_8 [i_2] [i_2]), (arr_8 [i_1] [i_1]))), (((/* implicit */unsigned short) ((signed char) arr_8 [(signed char)15] [(short)15])))))) == (((int) arr_4 [i_3 - 2] [i_3 - 1]))));
                        arr_22 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 274877906943ULL)))) ^ (((arr_13 [i_1] [i_2] [i_3 + 1] [i_6 + 1]) % (arr_13 [i_1] [i_2] [i_3 - 2] [i_6 + 1])))));
                        var_25 = ((/* implicit */short) max((arr_6 [i_3]), (((/* implicit */unsigned long long int) arr_16 [(unsigned char)16] [i_2] [i_2] [i_3 - 2] [i_6 - 2]))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            arr_29 [i_1] [i_2] [i_3] [i_7] [i_8] &= ((/* implicit */short) (-((~(((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_7 - 1] [i_8 - 1]))))));
                            arr_30 [i_1] [i_1] [i_2] [(unsigned char)12] [i_7] [i_7] [(unsigned short)3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [22LL] [i_2] [22LL] [22LL]))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((_Bool) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)42651)) == (((/* implicit */int) var_7))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) arr_13 [i_1] [i_1] [i_1] [i_1]);
                            var_28 = ((/* implicit */unsigned short) arr_3 [i_2] [i_2]);
                        }
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (~(arr_19 [i_1] [i_3 + 1] [i_7] [i_10]))))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((((/* implicit */long long int) min(((unsigned short)29842), (((/* implicit */unsigned short) (short)-10147))))), (((arr_9 [i_3]) ^ (((/* implicit */long long int) var_0)))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                        {
                            var_31 += ((/* implicit */int) arr_20 [i_1] [i_1] [i_3 - 1] [i_3 - 1]);
                            var_32 += arr_8 [i_7 - 1] [i_11];
                            var_33 *= ((/* implicit */unsigned long long int) arr_12 [i_1] [19U] [i_3 - 1] [i_11]);
                        }
                        arr_38 [i_1] [i_2] [i_7 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [i_7 - 1] [i_1])) ? (((/* implicit */long long int) arr_32 [i_3 - 1] [i_7 - 1] [i_7] [i_7])) : (max((arr_10 [i_2] [i_2] [i_2]), (((/* implicit */long long int) arr_33 [i_3] [i_3] [i_2]))))))) ? (max((((6097065932096889727ULL) % (((/* implicit */unsigned long long int) arr_33 [i_1] [i_2] [i_1])))), (((/* implicit */unsigned long long int) ((unsigned int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_3] [i_7])) ? (((/* implicit */int) (unsigned short)4903)) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) % (2940876581U))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) arr_34 [i_1] [i_1] [i_1] [(unsigned short)20] [i_2] [i_3] [i_1]);
                        arr_41 [i_3 - 2] [i_2] [i_3 - 2] [i_12] [i_3] [i_3 - 2] = ((/* implicit */unsigned int) arr_12 [i_1] [i_2] [i_3] [i_12]);
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_20 [i_1] [i_2] [i_3] [i_12])))));
                    }
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_3]))));
                }
            } 
        } 
        arr_43 [i_1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        arr_44 [i_1] = ((/* implicit */unsigned short) max((((((arr_23 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (arr_33 [i_1] [i_1] [i_1])))))), (((/* implicit */unsigned int) var_0))));
        arr_45 [i_1] = ((/* implicit */unsigned char) min((max((((/* implicit */short) var_7)), (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]))), (arr_27 [i_1] [i_1] [i_1] [(short)14] [i_1])));
    }
    var_36 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
}
