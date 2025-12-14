/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186328
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_0))))) ^ (((/* implicit */int) var_6))))) ^ (7400894380534213098ULL)));
    var_16 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((short) (unsigned short)17259))) ? (((/* implicit */unsigned int) var_8)) : (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)57305)) / (((/* implicit */int) (short)-30455))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) : (var_5)));
    var_18 &= ((/* implicit */unsigned long long int) ((((var_12) * (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_7))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0] [(signed char)9])))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((((((/* implicit */_Bool) arr_2 [7ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3118438401U))) >> (((((-1073741824) - (((/* implicit */int) var_3)))) + (1073741941)))))));
        arr_4 [(unsigned short)12] [i_0] = ((/* implicit */unsigned char) ((arr_2 [(unsigned short)12]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)4])))));
    }
}
