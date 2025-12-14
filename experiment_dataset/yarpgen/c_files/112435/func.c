/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112435
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
    var_14 = ((/* implicit */long long int) (short)-2433);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (unsigned short)65535)))));
                    var_16 = ((/* implicit */unsigned int) ((unsigned char) min((min((((/* implicit */unsigned long long int) (unsigned char)32)), (5502401719132157041ULL))), (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_3 [i_0]))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_6 [(signed char)1] [i_2 - 1] [i_2 - 1]), (((/* implicit */long long int) (short)-10080))))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)8))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (9128149501277888584ULL))))))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
}
