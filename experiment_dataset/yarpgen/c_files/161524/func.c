/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161524
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
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((/* implicit */unsigned int) (~(var_8)));
    var_16 = ((/* implicit */int) (signed char)-80);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((max((min((arr_0 [i_0]), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [10])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))), (min((((arr_0 [i_0]) - (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)17502)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0]))))))));
        var_18 &= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned int) (unsigned short)29649)), (((((/* implicit */_Bool) 9LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (_Bool)1);
        var_19 ^= ((/* implicit */long long int) (((!(((((/* implicit */int) (unsigned short)44915)) < (((/* implicit */int) (signed char)-120)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((-(((/* implicit */int) arr_4 [10ULL] [i_1])))))) : (1316112473)));
        var_20 *= (_Bool)0;
    }
    for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
    {
        var_21 = ((/* implicit */int) arr_8 [i_2]);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))) - (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-94))))) ? (((int) 884208698)) : (((/* implicit */int) arr_6 [i_2 - 2])))))))));
    }
}
