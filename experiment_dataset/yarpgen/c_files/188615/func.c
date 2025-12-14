/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188615
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
    var_12 -= ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-((+((~(var_3)))))));
                    var_13 ^= arr_4 [2U] [i_0];
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_0))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_16 [5U] [i_4] [5U] [i_5] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 + 1] [i_4]))))), (((/* implicit */unsigned int) min((arr_3 [2U] [i_4]), (arr_3 [i_4] [i_4]))))));
                    arr_17 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */long long int) arr_1 [i_3]);
                }
            } 
        } 
    } 
}
