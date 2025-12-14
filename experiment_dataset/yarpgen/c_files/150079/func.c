/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150079
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (-775945944261242894LL)))), ((-(((/* implicit */int) var_3))))))))))));
    var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 11646466191304935742ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_16), (var_10))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_17)))))));
    var_20 = var_17;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7506552290701671641LL)) ? (((/* implicit */unsigned long long int) 7506552290701671633LL)) : (6627067755069846623ULL)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((max((-3320497472574348518LL), (((/* implicit */long long int) var_10)))) < (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (arr_0 [(_Bool)1] [i_0 + 2])))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) -3004641528158538874LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_1 [i_0]))))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 1] [i_0 - 3]))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((11507201674324807823ULL), (((/* implicit */unsigned long long int) (short)32747))))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 3]))))));
        var_23 ^= ((/* implicit */unsigned int) ((arr_0 [i_0] [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0 - 3] [i_0]))))))))));
    }
    var_24 = ((((((/* implicit */_Bool) (-(-6089452377452548267LL)))) ? (((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)-15186)))))));
}
