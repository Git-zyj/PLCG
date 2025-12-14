/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143142
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
    var_19 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)0))))));
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (114688U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [(signed char)17] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3035006674U)) <= (18446744073709551615ULL)));
        var_21 = min((max(((signed char)23), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) arr_0 [i_1])));
    }
    for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (var_6)))))));
        var_23 = ((/* implicit */long long int) arr_7 [i_2] [i_2]);
        arr_10 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_2]))));
        arr_11 [i_2] = ((/* implicit */unsigned short) var_5);
        var_24 = ((/* implicit */signed char) arr_7 [i_2] [i_2]);
    }
    var_25 = ((/* implicit */_Bool) var_16);
    var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-10803)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_0)))))))));
}
