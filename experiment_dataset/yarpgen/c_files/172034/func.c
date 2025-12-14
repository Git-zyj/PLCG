/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172034
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)28439))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)98))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned short) 22LL)), (((/* implicit */unsigned short) min((((/* implicit */short) var_12)), ((short)3453))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)-3455))) ? ((+(arr_1 [i_0]))) : (((/* implicit */long long int) ((int) (signed char)-73))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */int) arr_2 [i_0]);
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))));
    }
}
