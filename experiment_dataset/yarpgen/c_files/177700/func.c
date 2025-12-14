/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177700
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [(unsigned char)19] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [19LL]);
                                arr_14 [i_0] [16ULL] = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    var_10 = ((/* implicit */short) min((((_Bool) ((unsigned long long int) 1227863666U))), (((arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1]) != (((/* implicit */int) arr_5 [i_0] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_2] [i_6] [(signed char)14] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) 3067103630U)));
                                arr_22 [i_0] [i_5] [(unsigned char)4] [(unsigned short)2] [i_5 + 1] [i_6] &= max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2 - 1] [i_5 + 2]))) > ((~(3067103630U)))))), (((long long int) ((long long int) 1227863665U))));
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (+((-(4806996039837707530ULL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_12 = var_6;
                                var_13 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_7))))) + (min((1809880837645455377ULL), (((/* implicit */unsigned long long int) 1280747465U)))))), (((/* implicit */unsigned long long int) ((long long int) ((long long int) 3067103610U))))));
                                arr_27 [i_0] [i_1] [i_2] [i_7] [i_8] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_4);
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) != (arr_6 [i_2] [i_2 + 1] [i_2 - 1])))) < (((/* implicit */int) min(((signed char)-10), ((signed char)63))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 2) 
                {
                    var_15 = ((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_9] [i_9 + 2] [i_9]);
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) ^ ((-2147483647 - 1))))) & ((~(arr_20 [18LL] [i_1]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [16ULL] [i_1] [(_Bool)1] [i_1] [i_9 - 1])))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_15 [19U] [i_9] [i_9 - 3]), (arr_15 [(signed char)19] [i_9] [i_9])))) ^ (((/* implicit */int) arr_8 [i_1])))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((9223372036854775807LL) >> (((((/* implicit */int) (signed char)-69)) + (111)))));
                    /* LoopNest 2 */
                    for (short i_11 = 3; i_11 < 17; i_11 += 4) 
                    {
                        for (long long int i_12 = 2; i_12 < 19; i_12 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) var_2);
                                arr_38 [i_0] [15LL] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_12 - 2] [(short)3])) == (((/* implicit */int) arr_0 [i_12 + 1] [i_11])))))));
                                arr_39 [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)68)) ? (2463200497933619746ULL) : (((/* implicit */unsigned long long int) 2147483647))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    var_20 = ((/* implicit */short) ((((int) 7037007906827631738ULL)) >= (((/* implicit */int) ((((/* implicit */_Bool) min((arr_36 [i_1] [i_13] [i_13] [i_1] [i_0]), (((/* implicit */long long int) (unsigned char)214))))) && ((!(var_7))))))));
                    var_21 = min((min((((/* implicit */long long int) arr_30 [i_13])), (301015610528057432LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)38))))));
                }
                var_22 = ((/* implicit */short) max((var_22), (arr_32 [i_0] [2LL] [i_0] [i_0])));
                arr_42 [3U] [i_1] [3U] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((-(var_5))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [6] [i_1] [6] [7LL] [i_0]))) <= (3067103618U))))))), (((unsigned long long int) 7408685680377767600LL))));
            }
        } 
    } 
    var_23 = max((((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (15645865753318842667ULL)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0)))))))), (var_8));
    var_24 = ((/* implicit */short) min((((/* implicit */long long int) var_4)), ((+(max((var_0), (((/* implicit */long long int) var_2))))))));
}
