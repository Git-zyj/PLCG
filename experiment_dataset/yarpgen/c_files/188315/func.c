/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188315
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [18] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (var_6))), ((+(((/* implicit */int) ((unsigned char) 5360982631800369524LL)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_10)))))));
                    var_15 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_7))))) * ((~(12039824498547464200ULL)))))) ? (min((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned short) var_0))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_7)))))));
                }
            }
        } 
    } 
    var_17 = ((short) var_0);
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)45288))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_11)))));
}
