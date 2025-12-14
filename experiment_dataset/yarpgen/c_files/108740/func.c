/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108740
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = min((-2031532080), (1333333237));
        arr_4 [i_0] [i_0] = max((((int) max((-1790515796), (112029694)))), (((((/* implicit */_Bool) min((-1013861164), (1060992814)))) ? (1256004852) : ((~(-693353173))))));
        var_16 = ((/* implicit */int) min((var_16), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -100175956)) ? (var_14) : (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (arr_0 [i_0] [i_0]))) - (((/* implicit */int) (!(((/* implicit */_Bool) 1683775945)))))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 *= min((((/* implicit */int) ((min((arr_5 [i_1] [i_1]), (arr_5 [15] [i_1]))) == (((int) -131476827))))), (var_3));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_10 [i_1] = var_15;
            arr_11 [i_1] [i_2] |= (((~(((489232268) ^ (arr_9 [12]))))) ^ (max(((~(-1132957872))), (1683775945))));
            var_18 = ((/* implicit */int) min((var_18), (max((((((((/* implicit */_Bool) var_6)) ? (693353171) : (1256004852))) ^ (((arr_7 [i_1] [i_1] [i_1]) - (var_1))))), (min((526099349), (arr_9 [i_1])))))));
            var_19 = ((int) arr_5 [i_2] [i_1]);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) 526099349)) && (((/* implicit */_Bool) 1397858286)))))));
        }
    }
    var_21 = var_12;
    var_22 ^= var_5;
}
