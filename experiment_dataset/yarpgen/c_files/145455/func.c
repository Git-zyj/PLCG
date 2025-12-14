/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145455
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -659642585)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_1])))))));
                var_17 = ((/* implicit */long long int) (((~(137438953468LL))) < (max((((-4898396404985063868LL) / (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) 2109001478))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_1);
    var_19 -= ((((/* implicit */_Bool) (-(-4408785495042490604LL)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (134217727U)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)119))))));
}
