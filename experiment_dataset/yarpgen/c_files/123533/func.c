/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123533
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
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1))))));
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (0ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)106)) >> (((((/* implicit */int) (signed char)-103)) + (119)))));
                var_12 = ((((/* implicit */int) ((arr_1 [i_0 + 2] [13]) || (arr_1 [i_0 + 2] [i_1])))) <= (((/* implicit */int) min((arr_3 [i_0 + 2] [2] [i_1]), (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])))));
            }
        } 
    } 
    var_13 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) (short)-6)), (var_8))))) ^ ((+(((/* implicit */int) var_1))))));
    var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) var_2))))) : (((/* implicit */int) (unsigned short)40110)))), (((/* implicit */int) var_3))));
    var_15 = var_8;
}
