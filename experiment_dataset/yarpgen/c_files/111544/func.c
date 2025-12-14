/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111544
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [10LL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_2 [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (short)14260))))) ? (((((/* implicit */_Bool) 10228188687806587757ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1]), ((short)126))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38464))) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38464))))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) arr_3 [i_2] [(_Bool)1] [(short)2]);
                    arr_10 [i_1] = arr_3 [i_2] [i_1] [i_0];
                }
            } 
        } 
    } 
    var_14 = var_2;
    var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))));
}
