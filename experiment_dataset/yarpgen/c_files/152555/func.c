/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152555
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
    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) (short)-32750)), (3700099046192893865ULL))) : (var_4)))));
    var_13 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 803677844))) ? (((/* implicit */long long int) ((int) arr_2 [i_0]))) : (arr_2 [i_0])));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_3 [i_0]))))));
                }
            } 
        } 
    } 
}
