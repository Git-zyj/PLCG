/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183066
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_11 ^= ((/* implicit */short) ((12847517557899759683ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_0)) + (12847517557899759683ULL))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_9 [i_3 + 2] [i_1] [i_4 - 1])) + (12847517557899759701ULL))) / (((/* implicit */unsigned long long int) arr_9 [i_3 + 3] [(short)3] [i_4 - 1]))));
                                var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((var_1) / (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_4))))) * (((((5599226515809791933ULL) * (5599226515809791933ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1582892330)) / (var_1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (-(min((min((((/* implicit */unsigned long long int) var_2)), (12847517557899759682ULL))), (((/* implicit */unsigned long long int) var_9))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (70368744177663LL)))) ? (((var_10) - (((/* implicit */unsigned int) 1853247294)))) : (var_6)))))))));
}
