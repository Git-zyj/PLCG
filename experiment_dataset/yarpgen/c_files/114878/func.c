/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114878
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
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = arr_5 [i_0 - 1] [0] [i_0 + 1];
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) arr_1 [9] [i_1])) ? (-321644312) : ((-(-1029804021))));
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0] [1]) : ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) arr_0 [(short)9])) ? (321644312) : (-321644312))) : (arr_1 [i_0] [2]))) < (((/* implicit */int) ((min((((/* implicit */int) (short)4096)), (arr_4 [i_0] [i_1]))) != (((int) var_13)))))));
                var_17 = max((((((/* implicit */_Bool) arr_3 [(short)8] [i_1])) ? (((-2147483629) + (2147483520))) : (((/* implicit */int) (short)1920)))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_12) - (2147483520)))) || (((/* implicit */_Bool) min((((/* implicit */int) (short)-21684)), (-365049936))))))));
            }
        } 
    } 
    var_18 = ((int) max((min((var_7), (var_14))), (min((-1144389513), (var_4)))));
    var_19 = ((((((-1071059951) / (var_0))) / (((((/* implicit */_Bool) -1363221919)) ? (-2080134965) : (((/* implicit */int) (short)1920)))))) + (-1904294038));
}
