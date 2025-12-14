/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131310
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
    var_19 = ((/* implicit */_Bool) (+(var_6)));
    var_20 = ((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((((/* implicit */_Bool) var_4)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_6);
                    var_22 = (i_0 % 2 == 0) ? (((min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (8117135720371188544ULL) : (10329608353338363072ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1] [i_2]))))) >= (((/* implicit */unsigned long long int) ((((((arr_4 [10ULL] [i_1 - 1] [i_0]) + (9223372036854775807LL))) << (((arr_3 [i_2]) - (4454378592747927246LL))))) << (((((/* implicit */_Bool) 18024349873888150429ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14540851572165788088ULL)))))))) : (((min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (8117135720371188544ULL) : (10329608353338363072ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1] [i_2]))))) >= (((/* implicit */unsigned long long int) ((((((((arr_4 [10ULL] [i_1 - 1] [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((arr_3 [i_2]) - (4454378592747927246LL))))) << (((((/* implicit */_Bool) 18024349873888150429ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14540851572165788088ULL))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 9223372036854775807LL)) != (193464849884977138ULL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? ((+(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (var_17))))))))));
}
