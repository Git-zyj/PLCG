/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18309
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
    var_15 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) var_9);
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122))))) / (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
        var_17 = (((~(arr_1 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) min((((arr_4 [i_1] [i_1]) >> (((max((((/* implicit */unsigned int) var_14)), (1760005030U))) - (1760005015U))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))), ((~(((/* implicit */int) var_13)))))))));
        var_19 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((var_11) >= (((/* implicit */int) var_1)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (signed char)56))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (144115188075839488LL)))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) && (var_2)))) : (((((/* implicit */int) var_3)) << (((int) (_Bool)1)))))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) == (-1)));
}
