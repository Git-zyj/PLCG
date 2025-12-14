/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131135
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((((((/* implicit */int) var_2)) == (((/* implicit */int) (!(((/* implicit */_Bool) 2689720898U))))))) ? (((((/* implicit */unsigned long long int) min((-513898746), (((/* implicit */int) (unsigned char)188))))) - ((-(13171267879793879830ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((/* implicit */int) var_4)), (((((/* implicit */int) (_Bool)0)) * ((-(((/* implicit */int) arr_0 [i_0])))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)-25113)) || (((/* implicit */_Bool) arr_0 [i_0]))))))));
        arr_6 [i_0] = ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32752))))) : (arr_3 [i_0])));
    }
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 11627915414196438918ULL))));
        var_12 += ((/* implicit */unsigned long long int) (_Bool)1);
        var_13 += ((/* implicit */int) var_7);
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_14 &= ((/* implicit */signed char) (!(min((var_3), (var_0)))));
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))) ? (arr_7 [i_2]) : (min((arr_7 [i_2]), (((/* implicit */int) (_Bool)0))))));
    }
    var_15 = ((/* implicit */unsigned char) (_Bool)0);
    var_16 = ((/* implicit */_Bool) var_9);
}
