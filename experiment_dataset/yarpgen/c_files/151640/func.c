/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151640
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = 1222395522;
        var_20 ^= ((((/* implicit */_Bool) -227123952)) ? (182740909) : (2147483643));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((min((var_1), (arr_2 [i_1]))) & (max((arr_2 [19]), (-182740910))))))));
        var_21 = min((((((((/* implicit */_Bool) arr_3 [i_1])) ? (-2147483644) : (-1851438689))) / (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_1]) : (2147483643))))), (((-890544781) / (182740909))));
        var_22 = ((((min((var_16), (-2147483644))) + (2147483647))) >> (((/* implicit */int) ((arr_3 [i_1]) < (arr_2 [i_1])))));
        arr_5 [i_1] = min((arr_3 [i_1]), (arr_3 [i_1]));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_23 = max((arr_6 [i_2]), (max((var_3), (arr_6 [i_2]))));
        arr_8 [i_2] [10] = (((!(((/* implicit */_Bool) ((182740881) & (1398972275)))))) ? (max((arr_2 [i_2]), (arr_2 [i_2]))) : (((((max((-890544781), (-1842506296))) + (2147483647))) >> (((min((1610612736), (182740896))) - (182740866))))));
        arr_9 [1] [i_2] = min((max(((-(227123951))), (((2037108538) / (-1797509715))))), (((var_8) + (max((var_5), (1524775873))))));
        var_24 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (arr_2 [i_2]) : (var_2)))) ? (((((/* implicit */_Bool) 1073741824)) ? (-1506108936) : (1842506295))) : (arr_0 [18] [18]))) >= (((arr_1 [i_2] [i_2]) | (arr_7 [i_2])))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_2]) : (arr_3 [i_2])))) && (((/* implicit */_Bool) max((var_0), (var_5))))));
    }
    var_25 &= ((((/* implicit */_Bool) var_10)) ? (var_9) : (((int) var_5)));
}
