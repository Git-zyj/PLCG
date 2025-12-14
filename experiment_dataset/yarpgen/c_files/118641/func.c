/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118641
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 + 2] [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_18 = ((/* implicit */int) (+(arr_1 [i_0] [i_0 + 3])));
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1080215188U)) ? (15688926505601155177ULL) : (((/* implicit */unsigned long long int) 793547573))))))) ? (((var_7) ^ (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 + 1])))) : (((max((arr_4 [i_1] [i_1 + 1]), (var_11))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (arr_1 [i_1] [i_1]))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_4))), (((var_11) << (((var_7) - (102884550285154948ULL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((arr_1 [i_1 - 1] [i_1 + 2]), (((/* implicit */unsigned int) (short)7582))))));
        var_20 -= ((/* implicit */short) var_14);
    }
    var_21 = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7583))) > (2757817568108396439ULL)))), (min((((/* implicit */short) ((((/* implicit */_Bool) (short)7582)) && (((/* implicit */_Bool) var_2))))), ((short)-7583)))));
}
