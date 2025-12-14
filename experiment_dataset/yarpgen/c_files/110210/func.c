/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110210
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned int) var_2)))));
                var_17 = (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (arr_2 [i_1])))) || (((/* implicit */_Bool) (signed char)-12))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) arr_0 [(signed char)3] [i_1]);
                var_18 = ((/* implicit */unsigned short) var_15);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) -76552108)) ? (1852806042U) : (4294967290U)))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) (~(var_2)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (var_8)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}
