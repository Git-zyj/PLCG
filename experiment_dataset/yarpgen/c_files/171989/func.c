/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171989
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (~(((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) (unsigned short)124)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((+(8383152195900951731ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
            arr_9 [i_0] [i_0] = 3397158354025503089LL;
        }
        for (int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_12 [i_0] = min(((+(arr_0 [i_2 - 1]))), ((-(arr_0 [i_2 + 1]))));
            arr_13 [i_2 - 1] = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)12))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_3] [i_3] [i_4] [i_3] [i_4] [i_3 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_3 + 4])) : (18446744073709551612ULL))))));
                            arr_23 [i_0] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */long long int) max((((4294226608058242421ULL) + (((/* implicit */unsigned long long int) 3246655810277191292LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) - (((/* implicit */int) (short)5154))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4])) && (var_5))))) : (0U))))));
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) min((((/* implicit */short) var_12)), (arr_17 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) > (((((/* implicit */_Bool) (unsigned short)25115)) ? (((/* implicit */int) arr_14 [i_5 - 1] [i_3 + 3])) : (((/* implicit */int) arr_14 [i_5 - 1] [i_3 + 1]))))));
                        }
                    } 
                } 
            } 
            arr_24 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (min((2513462099086653280ULL), (((/* implicit */unsigned long long int) 3246655810277191289LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (unsigned char)188)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217727ULL)) ? (((/* implicit */int) var_2)) : (arr_11 [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) (unsigned short)33911)), (9337792466761714569ULL)))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0]))));
            arr_28 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            arr_32 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0]))));
            var_15 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_7]);
        }
        arr_33 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_0)) : (-1560804676)))) ? ((~(((/* implicit */int) arr_17 [i_0])))) : (((((/* implicit */int) (signed char)-120)) ^ (((/* implicit */int) (unsigned short)31624)))))) : (((((/* implicit */int) arr_14 [i_0] [i_0])) & (((/* implicit */int) arr_14 [i_0] [i_0]))))));
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((long long int) 5251567793292220882ULL)) & (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0])))));
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        arr_38 [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((arr_29 [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) arr_5 [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : ((-(arr_20 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        arr_39 [i_8] = ((/* implicit */unsigned char) ((signed char) max(((~(17798098618759445352ULL))), (((/* implicit */unsigned long long int) (+(arr_11 [i_8] [i_8])))))));
    }
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        arr_42 [i_9] = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33909))) - (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-104)) * (((/* implicit */int) arr_40 [i_9])))))))));
        arr_43 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)224)) ? (-3246655810277191293LL) : (-3246655810277191322LL)));
        arr_44 [i_9] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_9] [i_9])))) << (((((18446744073709551610ULL) | (arr_0 [i_9]))) - (18446744073709551605ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    arr_50 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_9] [i_10] [i_11] [i_9] [i_11])) || (((/* implicit */_Bool) var_10)))))))) | (max((((/* implicit */long long int) ((short) 3246655810277191283LL))), (((((/* implicit */long long int) 668973343)) % (arr_41 [i_10])))))));
                    arr_51 [i_9] [i_9] = ((/* implicit */long long int) (short)6144);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_12 = 1; i_12 < 8; i_12 += 4) 
        {
            arr_54 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_4 [i_12 + 2] [i_12] [i_12])))) && (((arr_4 [i_12 - 1] [i_12] [i_12]) < (arr_4 [i_12 + 3] [i_12 + 1] [i_12 + 1])))));
            var_16 = ((/* implicit */short) ((unsigned short) (~(max((((/* implicit */long long int) var_9)), (4099060294911044053LL))))));
        }
    }
    var_17 = ((/* implicit */_Bool) (+(-3246655810277191296LL)));
}
