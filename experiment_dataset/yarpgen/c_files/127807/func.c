/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127807
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
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = arr_1 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (unsigned short)40926)) - (40926)))))) % (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) : (3224801306205362623ULL)))));
        var_19 -= ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (2868945886821287019LL)));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1 - 1]))))) <= (-3092465371588072234LL))) ? (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (arr_0 [i_1] [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_3 [i_1])))) && (((/* implicit */_Bool) 3704232480974337008LL))))))));
    }
    var_22 -= ((/* implicit */long long int) max((9223371899415822336ULL), (((((/* implicit */_Bool) min((15221942767504188990ULL), (3224801306205362623ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_3)))))));
    var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(var_2)))) ? (-4079561008329574281LL) : (max((((/* implicit */long long int) var_14)), (8310298986137445580LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (3704232480974336996LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255)))))));
}
