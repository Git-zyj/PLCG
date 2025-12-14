/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180013
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-72)) && (((/* implicit */_Bool) (unsigned char)254)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) == (var_1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = ((((((arr_4 [i_0 - 1] [i_0 + 1]) + (2147483647))) >> (((((/* implicit */int) var_12)) - (168))))) | (((/* implicit */int) ((arr_4 [i_0 + 1] [i_0 + 1]) < (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4561728217019940318LL)) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)120)))));
                            var_22 = ((/* implicit */short) ((unsigned long long int) 4561728217019940339LL));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2])) / (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1])) ? (arr_4 [i_0 - 1] [i_0]) : (arr_4 [i_0 - 1] [i_0 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
