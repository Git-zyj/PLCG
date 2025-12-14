/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11622
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
    var_15 = ((/* implicit */signed char) max((3041960U), (((/* implicit */unsigned int) -1386168046))));
    var_16 &= ((/* implicit */signed char) (short)5407);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1])))))));
        arr_4 [i_0] [5] = ((/* implicit */int) ((min((min((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [16LL] [i_0])))), (((/* implicit */long long int) 1858490926U)))) & (arr_1 [i_0])));
        arr_5 [10U] &= ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-58)), ((unsigned char)100)))), (((6519069675252643363ULL) & (((/* implicit */unsigned long long int) arr_1 [2U]))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_1]), (((/* implicit */long long int) arr_6 [i_1]))))) ? (min((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (15714079775317190203ULL))), (((/* implicit */unsigned long long int) (signed char)-106)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_12) >= (arr_6 [i_1])))), (arr_6 [i_1]))))));
        arr_9 [i_1] &= ((/* implicit */int) var_8);
    }
    var_19 = ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) (-(((406991465) / (var_3)))))) | (var_6))))));
}
