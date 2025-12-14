/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144811
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_14 ^= ((/* implicit */unsigned char) max((((arr_1 [i_0 - 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : ((-(var_9))))), (((/* implicit */unsigned int) (signed char)-111))));
        var_15 ^= ((/* implicit */long long int) min((arr_0 [i_0 - 3] [i_0]), (((/* implicit */signed char) ((max((((/* implicit */int) arr_0 [(_Bool)1] [i_0])), (1145028056))) > ((~(((/* implicit */int) (unsigned short)47542)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_16 += ((/* implicit */short) ((long long int) arr_5 [i_1 - 2]));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) != (((long long int) 4294967295U)))))));
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1 - 3])) / (((/* implicit */int) arr_5 [i_1 + 1]))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_7 [i_2]))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_10)), (var_3)))), (((unsigned int) var_2))))) ? (min((((/* implicit */int) (unsigned short)47542)), (871934683))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) (short)2602)) : (min((((/* implicit */int) (short)9600)), (var_1))))))))));
    }
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((var_6), (var_8))))));
    var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 231818863))));
    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((long long int) var_7)), (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned short) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (var_7)));
}
