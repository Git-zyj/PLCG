/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123308
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_4] [1] [i_0] [0LL] = (~(((unsigned int) var_4)));
                                arr_17 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) -1180856832)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((unsigned short) arr_9 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 2]));
                        var_18 = ((((/* implicit */_Bool) -8088094787404142605LL)) ? (-1180856849) : (1180856844));
                        arr_20 [(unsigned char)8] [i_5 + 1] [i_2] [i_1] [18LL] [i_0] = arr_12 [i_0] [i_0] [i_0] [i_0];
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 3; i_7 < 17; i_7 += 1) 
                        {
                            var_19 = arr_25 [i_0] [i_0] [i_2] [i_2] [i_7];
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
                            var_21 = ((/* implicit */unsigned short) 33554400U);
                        }
                        arr_26 [i_2] [i_2] = ((/* implicit */short) ((unsigned int) -1180856849));
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) -8088094787404142612LL)) ? (2104015976U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                            var_23 = ((/* implicit */long long int) var_16);
                        }
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_2] [2U] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) -7899275395654339889LL);
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_9 [i_0] [i_1] [i_2] [i_1]))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */int) var_5);
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) arr_12 [i_0] [i_2] [i_0] [i_10]));
                        }
                        for (long long int i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */int) var_9);
                            var_26 = ((/* implicit */unsigned short) ((-3069988905441268471LL) <= (((/* implicit */long long int) 1180856857))));
                            var_27 += (((-(((/* implicit */int) arr_21 [i_11] [i_1] [(unsigned short)5] [(unsigned short)5])))) ^ (((/* implicit */int) arr_5 [i_6 + 1])));
                        }
                    }
                    for (unsigned short i_12 = 1; i_12 < 17; i_12 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_6))));
                        arr_45 [8] [8] [i_1] [i_2] [8] [i_12] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_14)), (8088094787404142611LL))), (((/* implicit */long long int) ((unsigned short) arr_1 [i_12 - 1])))));
                        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_0] [i_12] [i_2] [i_1] [i_2] [(short)5]))));
                    }
                    arr_46 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_5 [i_1])), (((((/* implicit */int) arr_30 [5] [i_1] [i_2] [i_2] [i_0])) + (((((/* implicit */_Bool) arr_30 [7] [i_1] [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (-1180856832)))))));
                    arr_47 [i_1] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) ((unsigned char) var_9))))));
                }
            } 
        } 
        arr_48 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((unsigned int) var_1))) >= ((~(arr_31 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 17; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                {
                    arr_54 [i_0] [(unsigned short)1] [(short)4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (unsigned char)0)))))))), (4294967295U)));
                    arr_55 [i_0] [17LL] [17LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) arr_36 [i_13 - 1] [i_0])) / (arr_4 [i_0]))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) * (1526654552U))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 0U)) ? (502415325U) : (1342819207U))))) : (var_14)));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */int) max((min((((/* implicit */long long int) (~(arr_43 [i_14] [i_13] [i_14] [i_15])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (8088094787404142619LL))))), (((/* implicit */long long int) ((unsigned int) 3069988905441268470LL)))));
                                var_31 = ((/* implicit */unsigned int) arr_49 [i_0] [8LL] [i_14]);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) (-(((arr_29 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                }
            } 
        } 
        var_33 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21040))) / (arr_43 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            for (unsigned int i_19 = 3; i_19 < 17; i_19 += 3) 
            {
                for (unsigned char i_20 = 0; i_20 < 19; i_20 += 3) 
                {
                    {
                        var_34 = -8088094787404142625LL;
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned short)23559))));
                        var_36 -= (+((-(((/* implicit */int) arr_67 [i_17] [(unsigned char)14] [i_17] [i_17])))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */short) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    }
    var_38 = ((/* implicit */short) 1181999238);
    var_39 = var_0;
    var_40 -= var_15;
    var_41 = ((/* implicit */unsigned short) max((4294967274U), (((/* implicit */unsigned int) (unsigned short)5322))));
}
