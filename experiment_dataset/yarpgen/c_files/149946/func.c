/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149946
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
    var_15 = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) ((short) var_7))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) (-((-(var_4)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))))))));
            arr_6 [i_1] = ((/* implicit */int) ((long long int) (+((+(-3202365585933836856LL))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (236))))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [16ULL] [2LL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >> ((((-(((/* implicit */int) var_11)))) + (213)))))));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((long long int) -5033053542565501336LL)))));
        }
    }
    var_18 = (-(((/* implicit */int) ((short) (+(((/* implicit */int) (short)32767)))))));
    var_19 = ((/* implicit */unsigned char) ((int) var_7));
}
