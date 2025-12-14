/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14923
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
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (1201779449) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10))))))) : ((((_Bool)0) ? ((+(var_1))) : (((/* implicit */int) arr_5 [i_0] [i_2]))))));
                    arr_6 [i_0] = ((/* implicit */int) (unsigned char)80);
                }
                var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-5550))) >= (min((1465413635U), (((/* implicit */unsigned int) var_11)))))) ? ((~(((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (449204567U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)20760), ((unsigned short)0)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((1465413625U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */int) var_4)))))))) ? (((/* implicit */int) var_5)) : (max((max((((/* implicit */int) var_5)), (var_11))), (var_11)))));
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (var_3) : (((/* implicit */unsigned long long int) -5549587391690423970LL))));
    var_17 = ((/* implicit */int) (signed char)-111);
}
