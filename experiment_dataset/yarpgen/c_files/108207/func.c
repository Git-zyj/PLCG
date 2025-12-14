/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108207
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
    var_13 &= max((((min((((/* implicit */unsigned long long int) (unsigned char)204)), (var_8))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (var_7) : (36028797018963967ULL))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min(((~(4294967280U))), (((/* implicit */unsigned int) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) var_11)))))));
                                var_15 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0 - 2] [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0 - 2] [i_0])) : (var_12))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] = ((/* implicit */long long int) (((~(-1))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1])) >= (var_12))))));
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) (short)-26763)) + (26774)))))))));
                }
            } 
        } 
    } 
}
