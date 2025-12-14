/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149769
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5004901943968832561ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_7);
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 2097151U))) ? (max((((/* implicit */unsigned long long int) var_4)), (5004901943968832561ULL))) : (((/* implicit */unsigned long long int) ((arr_0 [i_1]) - (arr_0 [16LL]))))));
                var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) min((288230376151187456LL), (9048638821468375014LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -590424384)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8)))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 5004901943968832561ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [4U] [i_1]))))), (((/* implicit */unsigned long long int) 7218063425245014174LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_1);
    var_22 = ((/* implicit */long long int) ((signed char) max(((-(2251799813554176LL))), (min((((/* implicit */long long int) var_0)), (2251799813554166LL))))));
    var_23 -= ((/* implicit */long long int) var_0);
}
