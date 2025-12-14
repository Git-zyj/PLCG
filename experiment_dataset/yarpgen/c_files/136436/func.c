/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136436
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
    var_13 -= ((/* implicit */unsigned int) var_7);
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((270193800U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 270193795U)) != (var_8)))) : (((/* implicit */int) (unsigned char)0)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2708519031386603753LL) : (var_7)));
                                var_17 ^= ((/* implicit */long long int) arr_3 [19LL] [i_1] [i_2]);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (short)-27218);
}
