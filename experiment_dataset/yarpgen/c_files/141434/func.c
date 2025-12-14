/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141434
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (-(-1072128778)));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)63), ((unsigned short)7019)))) ? (1932504314580825552ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_4])), ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) -8883249900465644894LL)))))));
                var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-((-(var_11))))))));
            }
        } 
    } 
}
