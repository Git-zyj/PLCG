/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133886
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */short) 2002090735);
                arr_5 [(signed char)10] &= var_7;
                var_17 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((max((arr_13 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_2])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                arr_15 [i_2] [i_3] |= ((/* implicit */signed char) max(((short)16071), (((short) (unsigned short)36659))));
            }
        } 
    } 
}
