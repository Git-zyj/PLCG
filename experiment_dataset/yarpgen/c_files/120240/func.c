/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120240
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
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((((unsigned long long int) (-(18446744073709551615ULL)))) >> ((((~(((((/* implicit */_Bool) var_9)) ? (var_9) : (-1480325576))))) + (1395353248)))));
                            var_21 = ((/* implicit */signed char) (+(max((((((/* implicit */int) (unsigned char)214)) & (0))), ((-(var_12)))))));
                            arr_12 [i_2] [i_1 - 1] = ((/* implicit */unsigned int) ((int) 4294967295U));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_2))))))) : (((max((18446744073709551615ULL), (var_16))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119)))))));
            }
        } 
    } 
}
