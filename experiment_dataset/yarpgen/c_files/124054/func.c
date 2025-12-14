/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124054
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) var_7)))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_10))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_11)))));
    var_15 *= ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_16 *= ((/* implicit */short) (unsigned char)253);
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        arr_9 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (-1697282144) : (((/* implicit */int) var_10))))));
                        arr_10 [i_1] [i_2] [i_1] [i_1 + 2] [i_0] [i_1] = ((/* implicit */int) (unsigned char)228);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (~(max((((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))), ((~(var_0))))))))));
                    }
                    arr_11 [i_0 - 2] [15U] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 4117093339U))));
                }
            } 
        } 
    }
    for (int i_4 = 4; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4 - 4] [i_4]))));
        arr_14 [i_4] [i_4] |= ((((/* implicit */int) (unsigned short)52861)) ^ (((/* implicit */int) (unsigned char)53)));
        arr_15 [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_12 [i_4] [i_4])))))))) | (min((3468722224U), (((/* implicit */unsigned int) (short)26881)))));
    }
}
