/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146488
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */long long int) (-2147483647 - 1))), (var_11))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_3))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (-2147483647 - 1));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) % (var_9))) : (((long long int) var_6)))) : (((((/* implicit */_Bool) -7905048976089246778LL)) ? (((/* implicit */long long int) max((838035810), (((/* implicit */int) (signed char)(-127 - 1)))))) : (arr_1 [i_0 - 1] [(unsigned char)2]))))))));
        arr_3 [i_0] = ((/* implicit */int) ((min((min((7262893642976648104LL), (((/* implicit */long long int) var_1)))), (7262893642976648093LL))) >> ((((~(((/* implicit */int) (signed char)104)))) + (167)))));
        var_18 = (((-(((((/* implicit */_Bool) var_8)) ? (-4740308117555603767LL) : (arr_1 [i_0] [i_0]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (unsigned char)69))))));
        arr_4 [i_0] = ((/* implicit */signed char) -1782451065);
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)110)), (-8137959972753978198LL)));
        arr_7 [i_1] = ((/* implicit */unsigned short) max((-5LL), (((/* implicit */long long int) (signed char)117))));
    }
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)164)))), (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (1782451064)))))) > (var_6)));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */int) arr_6 [i_2] [i_2 + 4])) & (((/* implicit */int) (unsigned short)13234)))), (var_0)));
    }
}
