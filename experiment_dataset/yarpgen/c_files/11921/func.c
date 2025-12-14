/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11921
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = max((((((/* implicit */_Bool) (unsigned short)58876)) ? (2147483647) : (-2147483624))), (((/* implicit */int) (short)7437)));
                arr_5 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(11423796523351779702ULL)))) ? (((/* implicit */int) (short)-7438)) : (arr_4 [i_0] [i_1] [i_1])));
            }
        } 
    } 
    var_14 = min(((-(((4294967295U) >> ((((((-2147483647 - 1)) - (-2147483618))) + (38))))))), (((/* implicit */unsigned int) var_5)));
}
