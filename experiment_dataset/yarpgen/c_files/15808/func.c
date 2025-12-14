/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15808
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [14] |= ((/* implicit */short) min((((/* implicit */int) (unsigned char)170)), ((-(((/* implicit */int) ((unsigned short) 9455975646055231461ULL)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) var_9);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1871388032U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))) : (1871388032U)));
                        var_12 = ((/* implicit */int) var_2);
                        var_13 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_15 [(_Bool)1] [i_4] [i_4])), (((var_1) | (((/* implicit */long long int) arr_19 [i_2] [i_4] [i_4] [i_5])))))) + (((/* implicit */long long int) arr_10 [i_3] [i_3]))));
                        var_14 |= (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_17 [i_2] [i_2])) ? (var_1) : (-7091989927351841812LL)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 4; i_6 < 20; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */short) (signed char)13);
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_3] [i_2])) & (((/* implicit */int) ((unsigned short) (signed char)13))))))));
                    }
                    arr_22 [i_2] [i_4] [(short)20] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (_Bool)0)) : (arr_11 [i_2])))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_2] [i_3]))));
                        arr_27 [i_7] [2U] [18U] [i_7] = ((/* implicit */short) (~(1972284880U)));
                    }
                    arr_28 [i_3] = ((/* implicit */unsigned long long int) (~((~(arr_19 [i_2] [i_2] [22ULL] [i_2])))));
                    arr_29 [3U] [3U] [3U] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((arr_18 [i_2] [i_2] [i_2] [i_7]), (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2]))))) ? (arr_11 [i_7]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7] [7U])) || (((/* implicit */_Bool) var_4))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31))) < (arr_10 [i_2] [i_3]))))));
                    arr_30 [i_3] [i_3] = ((/* implicit */_Bool) 165790376104385766ULL);
                }
                var_18 = ((/* implicit */unsigned long long int) 742723926);
                var_19 *= ((/* implicit */unsigned int) arr_21 [i_2] [15LL] [i_3] [i_3] [i_3] [i_3]);
                var_20 -= max((((unsigned int) arr_17 [i_2] [i_2])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_3])) ^ (((/* implicit */int) arr_23 [i_3] [i_2] [i_2] [i_2]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_9 = 1; i_9 < 21; i_9 += 2) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_25 [i_2] [i_3] [i_3] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((arr_25 [8LL] [i_9] [i_10] [8LL]) >> (((((/* implicit */int) var_0)) - (60872)))));
                                var_23 = ((/* implicit */signed char) ((unsigned int) arr_37 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 3]));
                                var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [12] [12])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1460813587)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (signed char)-31))));
                    var_26 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [9U] [i_2] [i_2] [i_2])) ? (arr_31 [i_2] [(unsigned char)4] [(unsigned char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_2] [i_3])))))), (min((((/* implicit */unsigned long long int) (unsigned char)183)), (1779002344039788043ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_21 [i_2] [i_3] [i_12] [i_3] [i_2] [i_12]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 23; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            {
                                var_27 = ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_14] [i_14] [i_2] [i_13] [i_12] [i_2] [i_2]))) <= ((+(((var_10) - (((/* implicit */long long int) 3017778476U)))))));
                                arr_50 [i_12] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)61856))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (min((2423579239U), (3258528539U)))));
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((unsigned int) (((+(18280953697605165850ULL))) <= (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) arr_15 [i_2] [i_3] [i_13])))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((signed char) max((((((var_10) + (9223372036854775807LL))) >> (((((/* implicit */int) var_0)) - (60854))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (415791174)))))));
}
