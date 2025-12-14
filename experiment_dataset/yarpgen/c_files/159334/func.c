/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159334
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1 - 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 3])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-30835))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                arr_5 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_10)))));
                var_12 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_1 [i_1 - 4] [i_0 + 4]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned short i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [(unsigned char)1] [i_3 - 3] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_10 [i_3] [i_3] [i_3] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), ((_Bool)0))))) : (min((arr_10 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1]), (((/* implicit */unsigned long long int) var_1)))))))));
                    arr_14 [i_2] [i_3 - 4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_9 [i_3 - 1] [i_3 - 1])))));
                }
            } 
        } 
    } 
}
