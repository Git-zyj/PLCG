/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180328
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
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_1]) & (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)255)), (arr_7 [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)198)) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_6 [9] [9])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)58))))))))));
                var_13 = ((/* implicit */unsigned char) arr_7 [i_1]);
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50690))))) ? (min((((/* implicit */unsigned long long int) (short)4095)), ((~(arr_1 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) var_6)) < (((/* implicit */int) var_0))))))));
            }
        } 
    } 
}
