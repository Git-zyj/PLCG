/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160375
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        var_10 = ((signed char) var_5);
                        var_11 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                        var_12 &= ((/* implicit */signed char) ((short) (signed char)-111));
                    }
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        var_13 = ((unsigned int) ((short) (signed char)103));
                        var_14 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))));
                    }
                    var_15 |= ((signed char) (unsigned char)238);
                    var_16 = var_2;
                    var_17 += ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))))) ? (var_5) : (((((/* implicit */_Bool) (unsigned char)253)) ? (1621709266U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))))));
    var_19 -= ((/* implicit */unsigned int) var_1);
}
