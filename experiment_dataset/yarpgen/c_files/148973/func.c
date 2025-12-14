/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148973
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) 1749634816577119812ULL))));
        arr_3 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1918584400U)))) ? (((arr_1 [i_1] [i_1]) | (arr_1 [i_1] [i_1]))) : (((/* implicit */int) ((signed char) arr_1 [i_1] [i_1])))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (((long long int) 1918584414U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)14] [i_1])))))));
        var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-26))))))))));
        var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 85962528977069812ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_1])))))))));
    }
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_2)))));
}
