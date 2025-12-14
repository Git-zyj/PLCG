/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118974
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) ((long long int) 4978874397021484293LL))))));
                var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((1455051402433561523LL) == (var_4)))), (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                arr_5 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) min((((short) (signed char)0)), (((/* implicit */short) (signed char)39)))))));
                var_11 = ((/* implicit */long long int) (-(((((arr_3 [i_1 + 1] [i_0 + 1]) + (2147483647))) >> (((arr_3 [i_1 + 1] [i_0 + 1]) + (1991917770)))))));
                var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_0), ((signed char)41)))) : (((/* implicit */int) max((arr_2 [i_0] [i_1]), (((/* implicit */signed char) var_5))))))), (926945221)));
            }
        } 
    } 
    var_13 = ((/* implicit */short) (+(var_7)));
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            {
                arr_10 [i_2] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)16223)))));
                var_14 += var_0;
                var_15 = ((/* implicit */long long int) var_6);
                arr_11 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (signed char)-34)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((var_6) > (((/* implicit */unsigned int) ((((/* implicit */int) (short)14990)) % (((/* implicit */int) (unsigned short)16246))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_17 += ((/* implicit */long long int) var_5);
}
