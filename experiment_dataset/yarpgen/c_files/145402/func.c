/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145402
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (signed char)56)))))) % (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) 1660328522)))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_14 *= ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] |= ((/* implicit */short) var_5);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_4 - 3] [i_2] [i_3] = ((/* implicit */unsigned short) arr_0 [i_2]);
                                var_15 *= ((long long int) (~(((/* implicit */int) (short)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((unsigned long long int) 15979460878555844049ULL);
}
