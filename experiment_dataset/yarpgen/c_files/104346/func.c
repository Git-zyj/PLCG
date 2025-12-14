/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104346
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_2] = ((/* implicit */short) ((long long int) var_5));
                            var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(arr_3 [i_0])))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38725))) - (0ULL)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) var_2);
                            arr_19 [i_2] = ((/* implicit */long long int) (unsigned short)38721);
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_5 + 1] [i_1])) ? (arr_14 [14LL] [i_1 - 1] [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_5 + 1]) : (var_12))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3]))))))))));
                        }
                        arr_20 [i_0] [i_2] [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1] = (!(((/* implicit */_Bool) ((var_16) | (((/* implicit */int) arr_16 [i_3] [i_3] [15] [i_2] [i_3 - 2]))))));
                    }
                    var_20 ^= (-((-(((((/* implicit */_Bool) -6109612405463520475LL)) ? (var_16) : (((/* implicit */int) var_14)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (+((+(18446744073709551603ULL))))))));
}
