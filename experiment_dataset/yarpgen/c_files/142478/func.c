/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142478
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
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [12ULL] = (+(((/* implicit */int) var_10)));
                arr_7 [(unsigned char)8] [(short)16] = ((/* implicit */short) var_4);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_16 [3ULL] [i_3] [0U] = var_2;
                    arr_17 [8] = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4611685743549480960LL))));
    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
}
