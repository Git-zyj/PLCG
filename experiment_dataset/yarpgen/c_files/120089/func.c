/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120089
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((_Bool) var_9)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((((/* implicit */int) arr_0 [i_0 - 1])) < (((((/* implicit */_Bool) 7637586524482622358LL)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11551)))))))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53982)) ? (((/* implicit */int) max(((unsigned short)39425), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) 954393064)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [(signed char)14] [(signed char)14])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (_Bool)1))))), ((+(var_1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)43579));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53985)) && ((_Bool)0)))) <= (((/* implicit */int) min((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 - 1]))))));
    }
}
