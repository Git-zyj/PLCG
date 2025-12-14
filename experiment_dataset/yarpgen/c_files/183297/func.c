/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183297
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
    var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) 1469884112U)))), (((/* implicit */unsigned long long int) var_2))));
    var_14 -= ((/* implicit */unsigned int) max((-731519968), (((/* implicit */int) (_Bool)0))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2825083184U))))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) > (((/* implicit */int) (short)1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) arr_5 [i_0]);
                var_17 = ((/* implicit */unsigned long long int) ((((unsigned int) arr_2 [i_0])) >= (((((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44109)))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (arr_3 [i_1] [i_1] [i_0])))) ? (arr_2 [i_0]) : (((int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (unsigned char)7))) >> ((((((-2147483647 - 1)) - (-2147483635))) + (39)))))) : (((arr_0 [i_0]) + (min((var_9), (((/* implicit */unsigned int) var_2)))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)137)) ? ((-(2938038798U))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)10])) : (((/* implicit */int) (short)-1)))) << (((-731519968) + (731519995))))))));
            }
        } 
    } 
}
