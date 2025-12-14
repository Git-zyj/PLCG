/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148131
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
    var_15 = ((/* implicit */_Bool) ((unsigned int) var_7));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)15))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (33550336) : (((/* implicit */int) (unsigned short)39934))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (unsigned char)145))));
                            var_18 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) <= (((((/* implicit */_Bool) 8160U)) ? (max((17ULL), (((/* implicit */unsigned long long int) (unsigned char)110)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
