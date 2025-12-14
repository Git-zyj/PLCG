/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131421
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
    var_10 = ((/* implicit */int) max((var_10), (max((((int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))) : (min((var_5), (((/* implicit */int) var_2))))))))));
    var_11 = ((((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)54880)), (-1236652917))) / (-1236351681)))) ? ((((_Bool)1) ? (min((-20930755), (((/* implicit */int) (unsigned short)10655)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)61462)) : (((/* implicit */int) (unsigned short)54851)))))) : (((-1036562051) * (((int) (_Bool)1)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (1932511988))), (((((/* implicit */_Bool) arr_1 [8] [8])) ? (arr_1 [(_Bool)1] [i_0]) : (arr_1 [i_0] [i_0])))))) ? (max((((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))), (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [10]))))) : (((((/* implicit */_Bool) ((arr_1 [1] [i_0]) / (((/* implicit */int) arr_0 [4]))))) ? (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [(unsigned short)3]))) : (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0] [0])))))));
        var_13 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = max((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (-900489359))), (((((/* implicit */_Bool) ((1932511988) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)62838)) : (max((((/* implicit */int) (unsigned short)28006)), (278673245))))));
        arr_7 [(unsigned short)0] [i_1] |= ((((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned short) arr_3 [i_1]))))) && (((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_1] [(_Bool)1]))))))) ? (((((((/* implicit */_Bool) 52292996)) && (((/* implicit */_Bool) (unsigned short)9404)))) ? (1725651213) : (((((/* implicit */_Bool) (unsigned short)6137)) ? (-410830453) : (-382707855))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : (((/* implicit */int) arr_3 [i_1]))))) && (arr_3 [i_1])))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((int) ((_Bool) arr_2 [i_1]))), (((((/* implicit */_Bool) max((arr_0 [i_1]), (arr_5 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (arr_2 [i_1])))))))))));
    }
}
