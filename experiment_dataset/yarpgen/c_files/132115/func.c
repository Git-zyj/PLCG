/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132115
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
    var_11 = ((/* implicit */unsigned char) ((var_6) - (((/* implicit */unsigned int) (~(713743785))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((int) ((long long int) var_1)));
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) min((-2827998935138775395LL), (((/* implicit */long long int) 0U))));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1037130271))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 607361562))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))))))) && ((!(((((/* implicit */_Bool) 12U)) || (((/* implicit */_Bool) var_6))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((var_9) + (2147483647))) >> (((((((/* implicit */int) ((signed char) (unsigned short)65512))) & (((var_1) ? (((/* implicit */int) (short)-10811)) : (((/* implicit */int) (signed char)127)))))) - (104)))));
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) * (((((((/* implicit */_Bool) 3176803274U)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)77))))) / (((/* implicit */long long int) ((var_3) << (((-932540128) + (932540157))))))))));
}
