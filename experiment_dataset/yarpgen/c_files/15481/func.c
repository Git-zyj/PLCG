/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15481
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2147483647)) ? (14489183351665671127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1157266690U) > (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1] [i_2])))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_3 [i_0])))))))));
                    var_18 = -1874480988;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_4);
    var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)61581)) : (((/* implicit */int) (signed char)27))))) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_12)))))) : (min((((unsigned long long int) -960785876)), (((/* implicit */unsigned long long int) var_11))))));
}
