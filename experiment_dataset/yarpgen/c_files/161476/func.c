/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161476
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
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_0 - 1] [5ULL]))))))) ? ((+(3224378466U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [5U])))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((unsigned short) (signed char)-19));
                var_16 = ((/* implicit */short) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) arr_8 [i_2]);
        arr_12 [i_2] = ((/* implicit */unsigned int) (((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-10)))))) | (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))))))))));
        var_18 -= ((/* implicit */int) ((8384512ULL) << (((/* implicit */int) (signed char)38))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) : (arr_9 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (min((339380521553407358ULL), (arr_11 [i_2])))));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_15 [i_3] &= ((/* implicit */unsigned long long int) arr_9 [(short)9]);
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((6917529027641081856ULL), (((/* implicit */unsigned long long int) (unsigned char)159))))) ? (((/* implicit */int) arr_14 [i_5 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2047))))))) / (1501146280)));
                    arr_22 [i_5] [i_4] [i_4] [i_3] = ((/* implicit */short) min((var_0), (((/* implicit */unsigned short) (((-(2300117735387647025ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11529215046068469760ULL)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned short)63480))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        arr_27 [i_3] [i_4] [i_4] [i_6] = (+(((/* implicit */int) var_15)));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_4 - 1])) <= (((/* implicit */int) arr_10 [i_4 - 1]))));
                        arr_28 [i_3] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-45))));
                    }
                    arr_29 [i_3] [i_4] [i_4] = ((/* implicit */short) arr_25 [i_3] [i_3] [i_3] [i_3]);
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (unsigned short)54846);
        arr_34 [i_7] = ((/* implicit */unsigned char) max((87682714864266234ULL), (((/* implicit */unsigned long long int) (signed char)30))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        arr_38 [i_8] = ((/* implicit */signed char) var_2);
        arr_39 [i_8] = arr_35 [i_8] [i_8];
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_43 [i_9] [19U] = (-(2582163455718502764ULL));
        var_23 = ((/* implicit */unsigned char) var_7);
    }
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_6))));
}
