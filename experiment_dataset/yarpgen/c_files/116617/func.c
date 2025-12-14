/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116617
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
    var_16 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */long long int) 0U))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) 14910917391942912596ULL);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)(-32767 - 1)))))) && (((/* implicit */_Bool) var_2)))))) + (min((arr_0 [i_0 - 3] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 - 3])))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_0 - 3]), (arr_0 [i_0 - 1] [i_0 - 3])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((14910917391942912596ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : ((+(14910917391942912596ULL))))) : ((-(((3535826681766639019ULL) << (((3535826681766639019ULL) - (3535826681766638997ULL)))))))));
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_13)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)1)) : (var_10))) : (((/* implicit */int) ((unsigned char) (unsigned char)0)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) | (((((/* implicit */_Bool) 15806720208702625704ULL)) ? (14910917391942912596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2426))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 7; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */int) 3535826681766639019ULL);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_13 [i_1 + 3] [i_1 - 3] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_11 [i_3] [i_1] [i_1])))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) (unsigned char)37)) >= (((/* implicit */int) (short)-2426)))))));
                    var_22 = ((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_12 [4ULL] [i_2] [(unsigned short)8]))));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-2431)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (arr_12 [i_2] [(short)3] [i_4]))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) << (((var_2) - (18108886053550074505ULL)))))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */int) (unsigned char)118)) / (((/* implicit */int) arr_7 [i_1] [i_1 - 2])))) : (((int) var_3))))))))));
                        var_24 ^= ((/* implicit */long long int) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19055)) ? (arr_6 [i_4] [i_4]) : (((/* implicit */unsigned long long int) var_13))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_8))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((160371999U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (var_5))), ((((-(14910917391942912596ULL))) / (var_5))))))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((arr_18 [i_1] [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)232)) ? (arr_10 [i_1 + 2] [i_1 + 2] [i_3] [i_5 - 2]) : (arr_15 [i_1] [i_1] [i_1] [i_1]))), (arr_1 [i_1])))))))));
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) 17365217356950993794ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (((((unsigned long long int) 17365217356950993794ULL)) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)9] [i_1]))))));
                        var_28 += ((/* implicit */unsigned long long int) (short)-9369);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_8 [i_6] [2LL] [i_1]))));
                        var_30 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2431))) / ((-(min((var_1), (((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_2] [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 7; i_7 += 3) 
                    {
                        var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8192))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8192))) * (11711680799803168809ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))));
                        var_32 &= (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3535826681766639020ULL)))) : (((((/* implicit */_Bool) arr_16 [i_1])) ? (14910917391942912596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2434))))));
                        var_33 = ((/* implicit */short) ((((/* implicit */int) (short)2434)) == (((/* implicit */int) (unsigned short)24576))));
                    }
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (4294967295U) : (((/* implicit */unsigned int) var_9))))) >= (var_2)))))))));
    var_35 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (short)2434)), (((((/* implicit */_Bool) (short)2430)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (3535826681766639039ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1495741065U) >> (((var_14) - (8241125687707285104ULL)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (var_1)))) : ((~(var_13))))))));
    var_36 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (signed char)51)), ((+(((/* implicit */int) (short)-2431)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_5)))) ? (((((/* implicit */_Bool) 2147483647)) ? (30670720) : (((/* implicit */int) var_15)))) : (var_8)))));
}
