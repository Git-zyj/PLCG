/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168819
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = (+(arr_0 [i_0]));
        var_14 = ((unsigned int) ((((/* implicit */_Bool) -6220743)) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (var_12))) : (((/* implicit */unsigned int) max((343779771), (6220743))))));
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) 8192U)) ? (4294967295U) : (3670972536U))) + (((((/* implicit */_Bool) 8192U)) ? (((/* implicit */unsigned int) var_8)) : (var_3)))));
    }
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 3583488343U)) ? (623994758U) : (((/* implicit */unsigned int) 6220743)))))) ? (max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [3])) ? (590639737) : (var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (3670972536U))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-6220741) : (var_11))))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 6220743)) ? (var_7) : (((/* implicit */unsigned int) (-2147483647 - 1))))), (var_7))) != (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((var_7), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((int) var_9)))))) ? (((((/* implicit */_Bool) ((int) -1560366957))) ? (var_6) : (((unsigned int) 3941937712U)))) : (((/* implicit */unsigned int) (-(((arr_5 [i_1 + 1]) % (var_4))))))));
        var_19 = (+(max(((+(var_0))), (((((/* implicit */_Bool) 138537717)) ? (((/* implicit */unsigned int) var_11)) : (var_3))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */int) max((max((((unsigned int) var_12)), (max((((/* implicit */unsigned int) arr_4 [i_2] [i_2])), (var_9))))), (((/* implicit */unsigned int) var_1))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_8)) : (var_12)))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (623994758U) : (((/* implicit */unsigned int) var_1)))) : (((unsigned int) 623994758U)))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) ((int) min((var_0), (var_7))))) ? (var_5) : ((-(var_12))));
}
