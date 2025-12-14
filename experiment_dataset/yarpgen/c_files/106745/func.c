/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106745
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) (((+(arr_1 [i_1 + 1] [i_1 - 1]))) > (((arr_1 [i_1 + 1] [i_1 - 1]) & (arr_1 [i_1 - 1] [i_1 + 1])))));
                arr_4 [i_0] = ((((/* implicit */_Bool) (+(min((var_10), (var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((18446744073709551611ULL) >> (((var_7) - (872158286U)))))))))) : (min((((arr_1 [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-53))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((((unsigned long long int) var_7)) == (((/* implicit */unsigned long long int) var_4)))) ? (((/* implicit */int) min(((short)-1), ((short)-1)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
}
