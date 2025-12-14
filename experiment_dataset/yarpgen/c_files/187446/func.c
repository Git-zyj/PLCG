/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187446
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned char) ((-1301010624) | (-1301010618)));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(-1301010629))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1301010627)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (-1301010624) : (((/* implicit */int) var_10)))) : (-182267398)));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((var_10) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 182267398))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_1])));
        var_20 = ((/* implicit */long long int) var_13);
        arr_9 [i_1] = ((/* implicit */unsigned int) ((int) var_3));
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (-1301010602) : (((/* implicit */int) (signed char)-60))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) var_2)))))))))));
        arr_13 [i_2] [i_2 + 1] = ((((/* implicit */int) (signed char)17)) << (((((/* implicit */int) (unsigned char)66)) - (62))));
    }
    var_21 = ((/* implicit */unsigned int) (-(var_11)));
    var_22 = ((/* implicit */long long int) var_13);
    var_23 += ((/* implicit */int) ((unsigned char) var_14));
}
