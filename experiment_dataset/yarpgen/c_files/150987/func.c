/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150987
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = arr_3 [(unsigned char)1] [i_1] [i_1];
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))) & ((+(16776192U)))))) <= (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (min((3412765108311647128ULL), (((/* implicit */unsigned long long int) var_0))))))));
                arr_7 [i_0] [i_0] = (unsigned char)12;
            }
        } 
    } 
}
