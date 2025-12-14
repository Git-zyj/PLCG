/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124870
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
    var_11 &= ((/* implicit */unsigned int) (_Bool)1);
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)-47)) ^ (((/* implicit */int) (_Bool)1))))))), (var_2)));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [i_0])), (var_7)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (6137835861253863193LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [11ULL]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)63321))))))) : (min((arr_2 [(unsigned short)13] [i_1]), (arr_2 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_15 = -1283453333;
}
