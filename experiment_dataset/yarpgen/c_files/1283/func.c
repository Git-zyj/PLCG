/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1283
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
    var_13 -= ((/* implicit */int) ((((/* implicit */unsigned int) min((2097151), (((/* implicit */int) (_Bool)0))))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_5)))) ? (var_9) : (((/* implicit */unsigned int) var_4))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / ((~(min((0U), (((/* implicit */unsigned int) arr_0 [20U] [i_0])))))))))));
                var_15 = ((/* implicit */_Bool) -2097152);
            }
        } 
    } 
}
