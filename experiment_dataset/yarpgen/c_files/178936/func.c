/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178936
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
    var_16 = ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */_Bool) var_13);
    var_18 = var_1;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((((((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_12))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23651)))) : (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (short)-9389)) : (((/* implicit */int) (unsigned char)56)))));
        arr_2 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (unsigned short)48909)) : (211411431)))) ? (((/* implicit */int) (short)-9394)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (903802834))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)207)), (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
    }
}
