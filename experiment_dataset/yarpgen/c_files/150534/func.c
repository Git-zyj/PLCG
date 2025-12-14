/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150534
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
    var_15 = var_0;
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) != ((-(var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_2)), (arr_1 [i_0])))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0 - 1])), (arr_1 [i_0 + 1])))))))));
                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)126)) : ((+(((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1 - 3])) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) <= (((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1])))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((16ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_1 + 1])))), (((/* implicit */unsigned long long int) (~(8200857346154498050LL))))))) ? (min((((/* implicit */int) var_2)), ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) : (((/* implicit */int) arr_0 [i_1 - 3] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)85)) && (((/* implicit */_Bool) (short)-24594)))))))) ? (-8200857346154498056LL) : (((/* implicit */long long int) var_8))));
}
