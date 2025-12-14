/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187610
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)2048)) + (((/* implicit */int) arr_1 [i_0 - 2])))) > (((((/* implicit */_Bool) 4237048756U)) ? (var_0) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_12 *= ((/* implicit */short) ((((/* implicit */int) (short)2034)) + (max((-1911917453), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (signed char)-124))))))));
            var_13 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)2049)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2065))) : (1969082002U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))))) ? (((/* implicit */long long int) ((max((((/* implicit */int) var_1)), (-24))) + (var_3)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (1207278261953644649LL)))));
        }
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((1274057499U), (min((((/* implicit */unsigned int) 1776061787)), (199547166U)))))) == (max((((/* implicit */unsigned long long int) 2130989138)), (7582732631360237605ULL)))));
    }
    var_15 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)2051)) ? (((/* implicit */int) (unsigned short)15760)) : (((/* implicit */int) (short)-2063)))) < (((/* implicit */int) (short)-24936)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
}
