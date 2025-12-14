/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132242
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
    var_12 = ((/* implicit */int) ((((max((140737488354304ULL), (8397378052598483760ULL))) % (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (1188897466224920923LL)))))) <= (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [9] [i_3] [i_4] [7LL] [9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_9 [i_0]) & (((/* implicit */long long int) ((var_9) >> (((9223372036854775795LL) - (9223372036854775787LL))))))))), (((((((/* implicit */unsigned long long int) var_6)) * (arr_7 [i_2]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [8LL] [i_1] &= max((max((-1LL), (-1LL))), ((((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (arr_12 [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 1]) : (((/* implicit */long long int) (+(1207778036)))))));
                            }
                        } 
                    } 
                    arr_16 [3LL] [i_2] = ((/* implicit */long long int) (-((((-(15058171582234037364ULL))) * (((/* implicit */unsigned long long int) max((0LL), (-5LL))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 11; i_7 += 1) 
                    {
                        arr_23 [10LL] [i_7 - 1] [i_7] [i_7] [i_7 - 1] &= arr_5 [i_7 - 3] [i_7 - 2];
                        var_14 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_7 - 3] [i_7 - 2] [i_7 - 4] [i_7 - 2] [i_7 - 4] [i_7 + 1]))));
                        var_15 = (-(arr_12 [i_7 - 2] [i_7 - 2] [i_7 - 3] [i_7 - 3] [i_7]));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((-7LL) / (9223372036854775798LL)))), (min((((/* implicit */unsigned long long int) arr_3 [i_8 + 1])), (arr_17 [i_8 + 1] [i_8 + 1]))))))));
                        arr_27 [i_0] [6LL] [i_0] [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_8 + 4] [i_8 + 4] [i_5] [i_0])) ? ((-(arr_11 [i_8 + 3] [i_8 + 3] [i_6] [3U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8 + 3] [i_8 + 4] [11LL] [i_5]))))))));
                    }
                    arr_28 [0LL] [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (-(arr_10 [i_6] [i_5] [i_5] [i_5] [i_0] [i_0])))) : ((~(arr_8 [i_5]))))) : (((/* implicit */unsigned long long int) max((arr_20 [i_0] [i_0] [i_5] [i_6]), ((-(281474976710655LL))))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_5] [i_6] [i_9] [i_9] [i_10] [i_9] = (-(0ULL));
                                arr_34 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -1350101268)), (-9223372036854775795LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 &= ((314911554942545110LL) ^ ((+(arr_22 [i_0] [i_0] [i_0] [i_0] [5LL]))));
        var_18 = 0ULL;
    }
    var_19 = 7LL;
}
