/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106042
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
    var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -373298909)) ? (373298908) : (((/* implicit */int) (unsigned char)31))))))) ? (-373298908) : (min((-373298909), (((/* implicit */int) (unsigned char)31))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((4273139924U), (((/* implicit */unsigned int) (-2147483647 - 1)))));
        arr_3 [i_0] = ((((max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_9))) == (((/* implicit */unsigned long long int) max((373298908), (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)53)), (-373298906)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), ((unsigned char)58))))) : (((unsigned int) (short)-6759)))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (min((((/* implicit */unsigned char) var_11)), (arr_1 [i_0] [i_0])))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) -373298909))))), (((((/* implicit */_Bool) (unsigned short)14124)) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned char)31)))))) : ((+(((/* implicit */int) var_19))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned short) ((int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) ((unsigned short) ((signed char) arr_0 [i_0])));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_18) >> (((1474600135) - (1474600120))))) >> (((((/* implicit */int) (unsigned short)51400)) - (51386)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((min((373298908), (((/* implicit */int) (short)26011)))) >> (((/* implicit */int) ((signed char) 0))))))));
}
