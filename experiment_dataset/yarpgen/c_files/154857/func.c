/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154857
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((min((var_4), (1740092600))) + (335766347)))))) ? (var_17) : (((((/* implicit */_Bool) (+(var_0)))) ? (var_9) : (var_3))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) / (arr_2 [3] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (-1740092581) : (-1965948563))) : (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)2] [i_0])))))));
        var_22 = arr_2 [i_0] [3];
        var_23 = ((/* implicit */unsigned char) ((int) min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 - 1]))));
        var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -1740092601)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) (unsigned char)108))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
        var_25 = ((/* implicit */int) ((min((1965948571), (((((arr_2 [i_0] [i_0]) + (2147483647))) << (((((-1740092595) + (1740092605))) - (10))))))) != (1740092568)));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_26 = arr_4 [i_1];
        var_27 = (unsigned char)128;
        arr_5 [i_1] [i_1] = -1965948571;
    }
}
