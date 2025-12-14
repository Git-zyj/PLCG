/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165092
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((int) min((4864692798503964932ULL), (5125875920537654721ULL))))), (1032751900U)));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [(short)1])) ^ (arr_3 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 487454151)) : (4303771233251820202LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))))));
                var_20 = arr_1 [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((_Bool) 7)))));
    var_22 *= ((/* implicit */unsigned char) var_5);
}
