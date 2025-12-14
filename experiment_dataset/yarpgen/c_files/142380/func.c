/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142380
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
    var_14 = ((2949689405965357185ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [8LL] = ((/* implicit */short) ((arr_2 [i_1] [i_0]) >> (((((((/* implicit */int) (unsigned char)248)) << (((((/* implicit */_Bool) -59192659)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)32)))))) - (482)))));
                var_15 = ((/* implicit */unsigned short) var_3);
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_0 - 1] [i_1 - 1])))), (((/* implicit */int) arr_0 [i_0] [(unsigned short)1]))));
                var_16 += ((((/* implicit */_Bool) (signed char)127)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(var_11)))))));
            }
        } 
    } 
}
