/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116455
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((9223372036854775807LL) << (((((((/* implicit */int) arr_4 [11ULL])) + (29202))) - (37)))))) / (4221011771917335780ULL)))) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) arr_1 [10ULL] [i_0])))) && (((/* implicit */_Bool) arr_4 [i_1 - 1])))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_1 + 4]), (((/* implicit */short) arr_1 [i_1 + 3] [i_1 + 4])))))) * (((long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) var_18)) + (93))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) -5342867419830334287LL))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5342867419830334280LL)))))) <= (((long long int) var_7)))))) | (((((((/* implicit */_Bool) 5342867419830334285LL)) ? (var_15) : (var_15))) >> (((((((/* implicit */_Bool) (short)32757)) ? (var_13) : (-5342867419830334287LL))) + (5387913244883465784LL)))))));
}
