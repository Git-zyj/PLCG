/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114050
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
    var_13 = ((/* implicit */long long int) (((((~(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_1)))) - (((/* implicit */int) var_9))));
    var_14 = ((/* implicit */_Bool) (+(((var_8) ? (((var_8) ? (var_3) : (-5246636102287860045LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (short)-1)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)24)));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294962014U)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (signed char)127))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (-((+(arr_5 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_17 = arr_7 [i_1] [i_2] [i_2];
            arr_9 [i_2] [i_2] [i_1] = arr_8 [i_1] [i_1];
        }
        arr_10 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (signed char)-101)))))))));
    }
}
