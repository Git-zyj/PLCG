/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113851
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)255))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
        var_12 = ((/* implicit */unsigned int) (+((~(var_3)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 4; i_2 < 12; i_2 += 2) 
        {
            arr_10 [i_1 - 1] = ((/* implicit */_Bool) var_8);
            var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_2))))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_2] [i_2]))))));
        }
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1948894450)) ? (arr_2 [(short)0] [i_1 - 1]) : (arr_2 [2ULL] [2ULL])));
    }
    var_14 = ((/* implicit */signed char) (unsigned char)3);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((short) (unsigned char)212))), (((int) var_2))))) ? ((((-(((/* implicit */int) (short)-12617)))) << (((var_4) - (164556842))))) : (((/* implicit */int) var_1))));
}
