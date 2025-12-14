/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17231
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
    var_10 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) -1597588458)) ? (7627605484231807122LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) (signed char)-1)) ? (var_2) : (((/* implicit */int) var_1)))))))));
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) -7627605484231807120LL))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) -1432147491);
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 935019659)) ? (((/* implicit */int) (unsigned short)37787)) : (-1)))), (((((/* implicit */_Bool) 1432147490)) ? (arr_2 [i_0] [(unsigned short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27758))) >= (((arr_1 [i_0 + 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (unsigned short)27748))));
                var_14 -= ((/* implicit */short) var_1);
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) (signed char)0)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned short) ((long long int) (~(-7627605484231807122LL))));
}
