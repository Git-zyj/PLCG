/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109992
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_3 [i_1 - 2] [i_1]))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27825)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (signed char)-18)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                arr_9 [i_3] [1LL] [i_2] = ((/* implicit */_Bool) arr_0 [i_3]);
                arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-44)) || (((/* implicit */_Bool) (unsigned char)0))));
            }
        } 
    } 
}
