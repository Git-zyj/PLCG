/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149876
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
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) var_4);
                                var_11 = ((/* implicit */unsigned long long int) var_4);
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (_Bool)1))));
                                arr_12 [i_0 - 2] [i_1 + 1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2] [i_0 - 2] [i_2] [4LL] [i_1] [i_1 + 2]))) : (14466440676159507075ULL)))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((short) 3980303397550044551ULL))) <= (((((/* implicit */int) var_5)) % (((/* implicit */int) (signed char)-93)))))))));
                    var_13 ^= ((/* implicit */signed char) arr_6 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */long long int) max(((((-(14466440676159507075ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))))), (max((arr_16 [i_0] [i_0] [i_0]), (((_Bool) var_1))))));
                                var_15 = (!(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-99))))) || (((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74)))))))));
                                arr_18 [i_2] [(unsigned short)19] [i_2] [i_2] [i_2] [(short)5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                                var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_11 [i_1] [i_1] [(short)3] [i_1] [i_1 + 2] [i_1] [9LL])) : (((/* implicit */int) (signed char)-114))))) < ((-(8566407187075350251LL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17914)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)29))));
                }
                /* vectorizable */
                for (long long int i_7 = 3; i_7 < 19; i_7 += 2) 
                {
                    var_18 = ((/* implicit */int) min((var_18), ((~((~(((/* implicit */int) arr_17 [i_0] [i_0 + 1] [(short)17] [i_0 - 4] [i_0] [i_0]))))))));
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)2334))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_20 += var_3;
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1 - 1] [i_0])) - (((/* implicit */int) arr_23 [i_0 - 4] [i_1] [i_1] [i_8]))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((short) var_7)))));
                }
                var_23 = ((/* implicit */_Bool) max((var_23), (((14466440676159507075ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9693)))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32557)) ? (((/* implicit */long long int) var_4)) : ((~(-6785710560011272132LL)))));
                var_25 &= max((6133867674552414952LL), (((/* implicit */long long int) (unsigned short)15501)));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 18; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_27 ^= ((/* implicit */_Bool) min(((-(7376676656187418824LL))), (((/* implicit */long long int) arr_39 [i_13] [0LL] [i_11 + 1] [i_10] [i_9]))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-3069)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)12471)) ^ (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (short)-6640)))) : (((/* implicit */int) (short)2362)))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_29 += ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (signed char)2)), (11251714839500632927ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_4 [i_9 - 1] [i_10] [i_10])) ? (arr_4 [i_9 + 1] [13LL] [i_9]) : (arr_4 [i_9 + 2] [i_10] [i_10]))));
            }
        } 
    } 
}
