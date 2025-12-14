/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183410
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
    var_10 = ((/* implicit */long long int) 196745172);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((min((arr_0 [i_0]), (arr_0 [i_0]))) - (arr_0 [i_0])));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (short)4);
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 = 1106943148U;
                            var_13 |= ((((/* implicit */_Bool) 2172143536U)) && ((_Bool)1));
                            var_14 = ((/* implicit */unsigned int) arr_1 [i_3]);
                            var_15 ^= ((/* implicit */signed char) (+((+(2024413990894762543LL)))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-18964))));
            }
        } 
    } 
}
