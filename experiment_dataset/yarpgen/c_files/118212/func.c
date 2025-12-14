/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118212
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) (~(arr_2 [0ULL] [i_1] [i_0])));
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) && (((/* implicit */_Bool) max((arr_1 [i_1 + 1] [i_0]), (((/* implicit */int) var_6))))))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (var_1)));
                var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((-1743650968), (arr_1 [i_1 - 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */short) var_14)))))) : (((((/* implicit */_Bool) -1743650971)) ? (var_18) : (((/* implicit */unsigned int) 1743650971))))))));
    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (short)63))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_11)))) : (((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_11))))))) * (((int) (!(((/* implicit */_Bool) (unsigned short)13572)))))));
}
