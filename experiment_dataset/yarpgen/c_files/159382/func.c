/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159382
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_0 [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) (+(var_6)))) : (max((arr_0 [i_1]), (758824566U)))))) : (arr_2 [i_0] [i_1]))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)15])) : (((/* implicit */int) (signed char)0))))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_2 [(unsigned char)6] [(signed char)4])))))) ? (((max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) 4272364419U)))) ^ (max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)32594)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [(short)4])))) ? (arr_3 [i_0]) : ((+(22602876U))))))));
                var_15 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) var_6)) : (4272364420U)))) ? (arr_2 [1] [1]) : (((/* implicit */unsigned long long int) var_1)))));
                var_16 = 22602864U;
                var_17 = ((/* implicit */unsigned int) max((var_17), (arr_3 [i_0])));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (~(var_5)))), (((((/* implicit */_Bool) var_5)) ? (8415961853687794773LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-29344))))))), (((/* implicit */long long int) var_10))));
    var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)16200)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967285U))));
}
