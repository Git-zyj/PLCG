/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179534
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) max((((unsigned long long int) (short)5770)), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)20))))) / ((-(((/* implicit */int) var_4)))))))));
        var_18 = (-(((((/* implicit */_Bool) min((-1601507297), (((/* implicit */int) (short)-32748))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (signed char)2);
        arr_6 [i_1 + 1] &= ((/* implicit */unsigned char) var_7);
        var_20 = (signed char)1;
    }
    var_21 = ((/* implicit */int) var_7);
    var_22 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_11)))), ((-(((/* implicit */int) (signed char)-23))))));
}
