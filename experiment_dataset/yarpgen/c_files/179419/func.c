/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179419
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 13377783166233603680ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 13377783166233603675ULL)) && (((/* implicit */_Bool) -241588871))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 13377783166233603680ULL)))))))) || (((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (short)-1)), (var_3))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned short)254)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) max((((((-1233189255) + (2147483647))) >> (((((/* implicit */int) (unsigned short)14185)) - (14175))))), (((int) arr_2 [i_0] [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))))) ? (max(((~(241588870))), (((/* implicit */int) ((unsigned char) var_14))))) : (((/* implicit */int) var_10))));
}
