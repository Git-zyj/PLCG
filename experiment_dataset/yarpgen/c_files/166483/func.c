/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166483
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [(unsigned short)4] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 65535U)) ? (8046468298897100327ULL) : (((/* implicit */unsigned long long int) 4294901755U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 65540U)) ? (145019191) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -5765678874598324003LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (65539U)))));
    }
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */unsigned short) (signed char)-117);
    var_13 -= ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)-33))))) ? (arr_2 [i_1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
        var_15 = ((/* implicit */int) var_9);
        var_16 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1]))));
        var_17 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [(short)16]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294901761U)) ? (2705138286761458232LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57269))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_8 [i_2]))));
    }
}
