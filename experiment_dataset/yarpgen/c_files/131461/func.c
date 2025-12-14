/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131461
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
    var_14 = ((/* implicit */signed char) var_5);
    var_15 = ((/* implicit */int) max(((unsigned short)12), ((unsigned short)65524)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */unsigned char) ((6213578806607078867ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))));
                    var_17 = (+(13ULL));
                    var_18 = ((/* implicit */short) ((unsigned int) (~(arr_0 [i_1] [i_0]))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_1 - 1]))) - (0U))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) (((~(max((0U), (((/* implicit */unsigned int) arr_1 [i_0])))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)32)))))));
        var_21 = ((/* implicit */_Bool) var_6);
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        var_22 -= ((/* implicit */unsigned short) max((14680622562234244974ULL), (((/* implicit */unsigned long long int) (short)14888))));
        var_23 = ((/* implicit */unsigned int) var_1);
    }
    var_24 = ((/* implicit */short) var_9);
}
