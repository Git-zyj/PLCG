/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108958
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
    var_10 = ((/* implicit */unsigned char) 1441782840U);
    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_3)), (288230375614840832ULL)))))) ? (((/* implicit */long long int) 1441782841U)) : ((~(7271862475911138998LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(signed char)0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) > (2853184428U)))), (var_0)));
                arr_6 [i_0] &= 14U;
                arr_7 [10U] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) 255ULL))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
}
