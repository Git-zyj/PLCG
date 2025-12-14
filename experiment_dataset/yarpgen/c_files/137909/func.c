/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137909
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))), (arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_3 [5LL]))))))))));
        var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (-4230433794811284694LL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_13 = (((!(((/* implicit */_Bool) max((arr_6 [i_1]), (arr_6 [i_1])))))) ? (((/* implicit */int) arr_4 [i_1])) : ((~(((/* implicit */int) arr_5 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((arr_11 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) (_Bool)1))))) : (max((6688077050954543703ULL), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2]))))))) ? (arr_10 [i_2] [i_2] [i_1] [i_2]) : (((/* implicit */unsigned long long int) min((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_3))), (((/* implicit */long long int) min((arr_5 [i_1] [i_2]), (((/* implicit */unsigned char) arr_12 [i_3]))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_1] [i_4]);
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9149395114785782518LL))))));
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_1] [22LL] [i_5] [i_2 - 1]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_11 [i_1] [i_2] [i_3] [i_3])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 24; i_7 += 3) 
            {
                for (int i_8 = 2; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(4294967283U))), (((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8 - 1] [i_1] [i_1] [i_1])) ? (arr_17 [i_1] [i_6] [i_7 - 3] [i_1] [i_6]) : (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_7] [i_7]))))) ? (-1) : ((~(arr_14 [i_1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) max((arr_10 [i_1] [i_1] [i_1] [i_8]), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_1] [i_7] [i_1])) ? (((/* implicit */int) arr_18 [13ULL] [13ULL] [13ULL] [i_1] [i_8] [13ULL] [i_1])) : (arr_21 [i_1] [i_1] [0ULL]))) : (((/* implicit */int) arr_12 [i_1]))))));
                        var_19 = arr_14 [i_1] [i_7] [i_8] [i_8];
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) var_2);
    var_21 = ((/* implicit */int) min((var_21), (var_9)));
    var_22 = ((/* implicit */unsigned char) (!(var_8)));
}
