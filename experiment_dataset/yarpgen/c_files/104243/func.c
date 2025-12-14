/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104243
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
    var_19 = ((/* implicit */short) ((_Bool) (~(var_10))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) ? ((+(((/* implicit */int) (unsigned short)20560)))) : (((/* implicit */int) (signed char)-17))));
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) -703861028))));
                    var_23 = arr_0 [i_2];
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)204))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20560)) ? (arr_11 [i_3] [(_Bool)1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        arr_12 [i_1] [i_1] [i_2] &= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)210))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        arr_15 [i_4 + 2] [0] [i_2] [i_2] [i_1 - 2] [i_0] = arr_4 [i_0] [i_0] [i_4];
                        var_25 -= ((unsigned int) ((((/* implicit */int) arr_4 [i_2 - 1] [i_4 + 4] [i_1 + 1])) << (((((/* implicit */int) arr_4 [i_2 + 1] [i_4 + 1] [i_1 - 2])) - (139)))));
                        var_26 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_4])))))))) >= (var_14)));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_1 - 2] [i_0] [i_4] [i_0] [i_0] |= ((/* implicit */unsigned int) (-(((int) arr_6 [i_5 - 1]))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((signed char) (unsigned char)201)))) ? (max((((/* implicit */unsigned long long int) 2888338123U)), (8514374208799363964ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60))))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)204)) && (((/* implicit */_Bool) arr_0 [(unsigned char)2])))) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((((/* implicit */_Bool) arr_16 [14ULL] [14ULL] [(short)19])) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) (_Bool)1);
                            var_30 = ((/* implicit */unsigned int) ((long long int) ((_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_31 = ((/* implicit */unsigned short) var_0);
                    }
                }
            } 
        } 
        arr_22 [i_0] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(109874073)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (+(4609434218613702656LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (arr_11 [i_0] [i_0] [i_0] [(unsigned short)3])))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 4) 
    {
        var_32 = ((/* implicit */unsigned char) var_7);
        var_33 = ((/* implicit */_Bool) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) arr_4 [(unsigned short)8] [(unsigned short)8] [i_7]))));
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((signed char) arr_17 [i_7] [i_7 - 3] [i_7] [i_7 - 3] [i_7])))));
    }
    for (short i_8 = 1; i_8 < 23; i_8 += 1) 
    {
        arr_29 [i_8] &= ((/* implicit */unsigned char) ((int) (~(arr_28 [i_8 - 1] [i_8]))));
        var_35 -= ((/* implicit */short) (!(((/* implicit */_Bool) -773116340))));
        arr_30 [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)17)) && (((/* implicit */_Bool) max((arr_25 [i_8 - 1]), (arr_25 [i_8 + 1]))))));
    }
    for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 4) 
    {
        arr_34 [i_9] [(short)8] = ((/* implicit */_Bool) (signed char)17);
        arr_35 [i_9] = ((/* implicit */short) arr_9 [i_9] [(unsigned short)6] [18] [(_Bool)0] [2ULL] [i_9 - 2]);
    }
}
