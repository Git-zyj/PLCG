/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171517
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))));
                            var_17 &= ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])), (max((arr_4 [i_0]), (arr_4 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) var_0);
                            var_19 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) ((_Bool) arr_4 [i_4]))))));
                            var_20 = arr_6 [i_0] [(_Bool)0] [i_4];
                            var_21 |= ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) ((unsigned char) arr_4 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) arr_12 [i_0]);
                                var_23 = ((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_7] [i_7]);
                                arr_25 [i_7] [i_7] [i_6] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_1 + 1])), (arr_13 [i_0] [(_Bool)1] [i_0] [i_1 + 1])))) ? (((unsigned long long int) arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_6 [i_1] [i_6] [i_1])))))), (((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (min((arr_20 [i_8] [i_0] [i_6] [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_7] [3ULL])))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))))))));
                                arr_26 [i_0] [i_1 + 1] [i_6] [1ULL] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [i_1 + 1] [i_6] [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_0] [i_6] [i_0] [i_8])))) : (min((((/* implicit */unsigned int) arr_10 [i_0] [4LL] [i_6] [i_7] [(short)0] [(short)0])), (var_13)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_7]))))) : (arr_22 [i_0] [i_1] [i_6] [i_7] [i_8])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        for (unsigned int i_10 = 3; i_10 < 21; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_33 [(unsigned short)14] [0LL] [i_11] [i_13]))));
                                arr_39 [i_9] [i_10 - 1] [i_10 - 1] [i_10] [(signed char)2] = ((/* implicit */unsigned int) (short)-32760);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((unsigned short) (short)-32760));
                    arr_40 [i_9] [i_9] [i_10] [i_9] = ((long long int) max((((/* implicit */long long int) (unsigned short)47061)), (4778073445318101669LL)));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_28 [i_10])))) ? ((~(((/* implicit */int) arr_34 [i_9] [i_9] [i_9] [i_10 + 2])))) : (((/* implicit */int) arr_37 [(signed char)14] [(signed char)14] [(signed char)14] [(signed char)14] [9LL] [(signed char)14]))))) ? ((~(arr_29 [i_11]))) : ((-(((((/* implicit */_Bool) var_7)) ? (arr_30 [i_9] [i_9]) : (((/* implicit */unsigned long long int) 825352538U))))))));
                    var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_29 [i_9]), (arr_33 [i_9] [i_9] [i_9] [i_9])))) ? ((~(((/* implicit */int) (short)32759)))) : (((int) (~(825352531U))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((var_11) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) var_3))))));
}
