/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173087
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
    var_11 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [7ULL] [i_4 - 1] [8ULL] [2ULL])) ? (((/* implicit */int) arr_11 [i_4 - 1] [2LL] [i_4 - 1] [4LL] [(unsigned short)20])) : (((/* implicit */int) arr_11 [i_4 - 1] [23ULL] [i_4 + 1] [9LL] [(short)9]))));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)10])) && (((/* implicit */_Bool) arr_4 [5ULL] [15ULL]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)65473)) > (((/* implicit */int) var_4)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((4509655322016964182ULL) > (8ULL)));
                                arr_22 [i_5] [(unsigned short)18] = ((/* implicit */long long int) arr_6 [16LL] [(unsigned short)19] [7ULL]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0] [1ULL]);
                }
                var_18 *= ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [3LL] [20LL] [4ULL] [(short)20] [23ULL])), (var_10)))))) ? (((((/* implicit */_Bool) arr_7 [12ULL])) ? (((((/* implicit */_Bool) arr_18 [16ULL])) ? (arr_5 [(short)19] [14ULL] [22ULL] [2ULL]) : (var_10))) : (max((((/* implicit */unsigned long long int) arr_19 [(short)19] [18ULL] [(short)6] [2LL])), (arr_2 [10LL]))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_19 [15ULL] [8ULL] [(short)17] [10LL]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_16 [(unsigned short)12] [9ULL] [9ULL] [23ULL] [3LL] [22ULL])) : (13736771755837676655ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [20ULL] [i_1] [20ULL] [(short)0] [2ULL])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_10), (4509655322016964182ULL)));
}
