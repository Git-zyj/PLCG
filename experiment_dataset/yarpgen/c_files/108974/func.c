/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108974
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
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (short)32762))));
                    arr_8 [i_0] [(short)14] [i_0] = ((/* implicit */short) ((((((var_8) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) + (2147483647))) >> (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) (unsigned short)0));
                    arr_18 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */int) (short)14977)) == (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
}
