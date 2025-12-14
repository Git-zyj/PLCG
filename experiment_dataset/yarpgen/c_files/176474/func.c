/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176474
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
    var_16 = ((/* implicit */unsigned long long int) max((max(((-(((/* implicit */int) var_13)))), ((+(((/* implicit */int) (signed char)96)))))), (((/* implicit */int) var_14))));
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 = ((/* implicit */unsigned int) var_9);
    var_19 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_21 *= arr_1 [i_1];
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                var_22 *= ((/* implicit */_Bool) ((arr_8 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((444082426U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))))))))))));
                var_23 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_7 [i_3 - 1] [i_3 + 2])))) - ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
            }
            for (signed char i_4 = 4; i_4 < 13; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [i_4] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)-81)) <= (((/* implicit */int) var_13)))))) : (min((((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_2] [i_4] [i_5] [i_6])), ((~(var_3)))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)29)) : (arr_3 [13LL] [i_2]))), (((/* implicit */int) (signed char)84)))) / (((/* implicit */int) (signed char)63)))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((_Bool) arr_22 [i_4 - 4] [i_2] [i_1] [i_1]))), (((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_14)))))));
                        arr_24 [i_1] [i_2] [i_4] [i_5] [i_4] [i_1] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_22 [i_1] [i_1] [i_1] [i_5]) / (((/* implicit */long long int) -258548900))))) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_13 [i_1] [i_5]) : (186640514))) : (max((186640532), (((/* implicit */int) var_12)))))) <= (((((/* implicit */int) arr_11 [i_4 - 2] [i_4] [i_4 + 1])) << (((((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1])) - (206)))))));
                        var_26 -= (!(((/* implicit */_Bool) arr_20 [0] [0] [i_4] [i_5] [i_7] [i_1])));
                    }
                    var_27 = ((/* implicit */_Bool) ((signed char) (!(var_4))));
                    arr_25 [i_1] [i_1] [i_4] [4ULL] [i_4] [i_4] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [(signed char)2])) ? (arr_16 [6U] [6U] [6U] [i_4] [i_5] [i_5]) : (arr_8 [i_4])))) ? (((/* implicit */unsigned int) -1315097673)) : (arr_18 [(unsigned short)9] [i_2] [(signed char)9] [11] [11])));
                }
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_4]))));
                            arr_31 [(signed char)2] [(signed char)2] [i_1] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */long long int) (~(max((((/* implicit */int) (signed char)84)), ((-2147483647 - 1))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 540657995U)) ? (((unsigned long long int) var_1)) : (var_10)));
                        }
                    } 
                } 
                var_30 += ((/* implicit */short) arr_21 [(unsigned short)1] [i_2]);
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                var_31 = (!(((/* implicit */_Bool) arr_1 [i_2])));
                var_32 = ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) arr_15 [i_1] [13U] [i_2] [i_10] [i_1] [i_2]))));
            }
            arr_34 [i_1] [i_1] [13ULL] = ((/* implicit */unsigned short) min((arr_29 [i_2] [i_2] [i_1] [(unsigned short)5] [i_1]), (((/* implicit */long long int) arr_11 [i_1] [i_2] [i_2]))));
            var_33 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])), (((long long int) (!(((/* implicit */_Bool) arr_20 [i_1] [9ULL] [i_1] [i_2] [10U] [i_2])))))));
        }
        for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            arr_37 [i_1] [i_11] [i_1] = ((/* implicit */unsigned long long int) max((((long long int) var_4)), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 3; i_13 < 13; i_13 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) arr_20 [(unsigned short)9] [(unsigned short)9] [i_1] [i_1] [i_1] [i_1]))) && (((/* implicit */_Bool) min((540657995U), (((/* implicit */unsigned int) (unsigned char)212))))))) ? ((~(((/* implicit */int) arr_19 [i_1] [i_11] [i_12] [5LL] [i_13 - 1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_1])), (var_14))))) <= (arr_12 [i_1] [i_1] [i_11] [i_1]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((2795205807888483603LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))));
                            var_36 *= ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_19 [i_13 - 3] [i_13] [i_12] [i_12] [i_11])))), (((/* implicit */int) ((((/* implicit */int) arr_19 [i_13 - 1] [i_13] [i_13 - 3] [13ULL] [i_13])) >= (((/* implicit */int) arr_9 [(_Bool)1])))))));
                            var_37 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)4323)))) - (((/* implicit */int) (!(((/* implicit */_Bool) -1222476439)))))))) ^ (((((/* implicit */unsigned long long int) 1024216131U)) & (7854886060633156253ULL)))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) arr_9 [i_1]);
                            var_39 = ((/* implicit */unsigned int) max((var_39), (max((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (arr_17 [i_1] [i_13 - 3] [i_12] [(_Bool)1] [0U]))), (((/* implicit */unsigned int) arr_44 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                    }
                } 
            } 
        }
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) 5U))));
    }
}
