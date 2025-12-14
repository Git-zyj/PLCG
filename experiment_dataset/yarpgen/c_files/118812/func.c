/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118812
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_5))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (0LL)))))))) < (0LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)41)))))) : (((((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_1])) / (arr_3 [i_1] [14LL] [(unsigned char)2]))))) == (((/* implicit */unsigned long long int) ((-1LL) - (0LL))))));
                var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) ^ (arr_3 [i_0] [0U] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)41))))))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1642160745)) ? (arr_0 [11]) : (((/* implicit */unsigned int) 14)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            {
                arr_8 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_5 [6ULL]);
                arr_9 [i_3] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1])), (403131261U))));
            }
        } 
    } 
}
