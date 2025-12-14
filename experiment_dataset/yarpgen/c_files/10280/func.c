/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10280
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
    var_18 = min(((-((-(16038737102242218395ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 3428941054U))))), (var_0)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((((_Bool) 3428941054U)) ? (((4396635114952734817ULL) - (((((/* implicit */_Bool) 3195302159U)) ? (((/* implicit */unsigned long long int) 0)) : (arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_10)))) ^ (0LL)))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((-(15ULL))) : (arr_5 [i_0] [i_2 - 2]))))));
                        arr_11 [i_2] = (short)11941;
                    }
                }
            }
        } 
    } 
}
