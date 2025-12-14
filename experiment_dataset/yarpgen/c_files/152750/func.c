/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152750
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
    var_12 = min((var_5), (var_7));
    var_13 |= (+(var_9));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_1] = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (4449562976080836940ULL) : (((unsigned long long int) arr_0 [6ULL] [i_0])))), (((unsigned long long int) ((unsigned long long int) 1090921693184ULL))));
                var_14 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8070450532247928832ULL) : (11406049234232156640ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_1]) : (arr_6 [i_1] [i_0]))))))) : (var_4));
                arr_8 [i_1] [i_1] [i_1] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (var_3)))) ? (min((8749371579269943456ULL), (arr_3 [i_0] [i_1]))) : (((8989607068696576ULL) & (arr_1 [i_0]))))), (min((max((8266973519414586268ULL), (arr_5 [2ULL] [i_0]))), (((((/* implicit */_Bool) 15042600410998939920ULL)) ? (arr_2 [i_0]) : (arr_2 [i_1]))))));
            }
        } 
    } 
}
