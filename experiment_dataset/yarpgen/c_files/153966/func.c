/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153966
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
    var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_14)) ? ((-2147483647 - 1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -731971024)))))))));
    var_21 ^= ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((int) arr_3 [i_0]));
                arr_5 [i_0] [i_1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (max((((/* implicit */int) var_18)), (var_15))) : (((/* implicit */int) (short)-24009)))))));
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_1])))) : (min((((/* implicit */long long int) (unsigned short)35532)), (-2875981402310141507LL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */long long int) -1048576)) / (-6909964989918148246LL)));
}
