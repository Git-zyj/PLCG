/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187052
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
    var_11 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) 13113990130969540675ULL)))));
    var_12 = ((/* implicit */_Bool) var_10);
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-((+(((/* implicit */int) ((signed char) 5332753942740010940ULL))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                    var_14 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 1] [i_1 + 1] [i_2])), (13113990130969540693ULL)));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [5U] [i_1 - 1])) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((_Bool) 13113990130969540651ULL)) && ((_Bool)1))))));
        arr_9 [i_0 - 2] [i_0 - 2] = ((/* implicit */short) ((((arr_3 [i_0] [i_0 - 2]) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 1] [i_0 - 2])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) max(((~(((13113990130969540675ULL) & (5332753942740010940ULL))))), (var_4)));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (arr_1 [i_6 + 2])));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [i_6 + 1] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((((int) arr_12 [i_0 + 1] [(short)4])) * (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))))) : ((~(((((/* implicit */unsigned long long int) var_9)) / (arr_1 [i_5])))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */int) ((((_Bool) arr_13 [i_3] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_3]))));
                    var_19 = ((/* implicit */unsigned char) max((((min((((/* implicit */unsigned long long int) var_7)), (13113990130969540675ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_0 - 1] [i_0 + 1] [i_0]))))), ((~(13113990130969540677ULL)))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_8))));
        var_21 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_11 [i_7 - 1])), (5332753942740010941ULL)));
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_30 [i_8] [i_10 + 1] [i_8]);
                        var_23 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (~(arr_24 [9U])))), (((13113990130969540687ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_10 + 1] [i_10])) ? (arr_18 [i_10 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 5332753942740010960ULL)))))) & ((~(arr_0 [i_10 + 1] [i_9])))));
                        var_25 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((arr_12 [i_7 + 1] [i_7 + 1]) * (((/* implicit */unsigned int) -1836942066))))) * (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [i_9])) ? (var_1) : (((/* implicit */unsigned long long int) arr_12 [i_7] [8U]))))))));
                        var_26 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_10] [i_7] [i_7] [i_7]))) > (var_1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_10] [i_8] [i_8])))))))), (((int) arr_26 [i_8] [i_8] [i_7]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
    {
        var_27 -= max((13113990130969540687ULL), (((/* implicit */unsigned long long int) max(((~(arr_33 [i_11]))), (((/* implicit */long long int) ((1297693827U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1350403258U)))) ? ((~(arr_34 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_11]))) > (arr_33 [i_11])))))))) ? (((max((((/* implicit */unsigned long long int) var_3)), (14737638512207119017ULL))) >> (((((/* implicit */int) arr_32 [i_11] [i_11])) + (43))))) : (((/* implicit */unsigned long long int) ((long long int) var_0))));
    }
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
    {
        arr_39 [i_12] = ((/* implicit */unsigned short) (-((-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_3)))))));
        var_29 = ((/* implicit */int) max((12646536242718762106ULL), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)63)))) - (((int) var_10)))))));
    }
}
