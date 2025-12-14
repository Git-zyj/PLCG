/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183633
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21367))) : (arr_3 [i_2] [(unsigned char)19]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_9 [i_0] [i_1] [0] [i_1])))) > (((/* implicit */int) min((var_3), ((unsigned short)65535)))))))));
                    var_18 = ((int) ((short) (unsigned short)11315));
                    var_19 *= ((/* implicit */short) arr_6 [i_1]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_15);
}
