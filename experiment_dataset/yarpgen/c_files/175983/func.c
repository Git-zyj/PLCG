/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175983
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
    var_10 = ((/* implicit */long long int) (~(-1841033935)));
    var_11 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned short)49934))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]));
        arr_3 [0ULL] [(_Bool)1] = ((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_2))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551594ULL)))))));
        var_13 = ((/* implicit */unsigned short) (~(arr_0 [i_0] [i_0])));
    }
    var_14 = ((/* implicit */unsigned short) ((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(15780203504029368189ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))))));
    var_15 = ((/* implicit */unsigned long long int) var_6);
}
