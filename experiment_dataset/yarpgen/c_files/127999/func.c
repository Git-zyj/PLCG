/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127999
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned char)5))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 + 1])))))));
        var_22 = ((/* implicit */unsigned int) var_6);
        arr_2 [5U] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_1 [(unsigned char)12] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))) : (var_0)))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : ((-(((/* implicit */int) var_6))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) ((_Bool) var_5)))))) ? (max((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))))));
        var_24 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (unsigned char)5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_0] [i_0 + 1]))))) : (var_15))) / (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)251)))), (((/* implicit */int) var_6)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (-(((unsigned long long int) (-(arr_6 [i_1]))))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)252), ((unsigned char)252)))) && (((/* implicit */_Bool) (unsigned char)12))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_11)) << (((arr_5 [i_2]) - (1691945298U)))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((var_8) ? (arr_6 [i_2]) : (arr_6 [i_2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_11)))))))))));
        var_27 |= ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) arr_9 [i_2])))));
    }
}
