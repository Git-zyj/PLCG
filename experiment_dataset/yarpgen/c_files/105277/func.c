/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105277
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
    var_10 = ((/* implicit */short) ((((var_5) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (short)20110))) - (var_5))) - (499991100U))))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (-3794806737436515719LL)))))))));
    var_11 = ((/* implicit */short) min((14352849105970170927ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) > ((~(3794806737436515718LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))));
                arr_5 [i_0] = ((/* implicit */_Bool) min(((~(max((-3794806737436515719LL), (((/* implicit */long long int) 1996724561)))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) -3794806737436515707LL))))) < (((/* implicit */int) min((var_7), ((unsigned short)15402)))))))));
            }
        } 
    } 
}
