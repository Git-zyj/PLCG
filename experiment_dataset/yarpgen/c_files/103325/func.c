/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103325
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
    var_16 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned char) ((arr_1 [2LL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33050))) : (-7045521602418914247LL)));
    }
}
