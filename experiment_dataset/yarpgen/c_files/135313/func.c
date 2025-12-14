/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135313
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
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) -154009467)) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 2])))));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-24642), (arr_2 [i_1] [i_1 - 3])))) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)-32756))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((signed char) max((((((/* implicit */_Bool) (short)24645)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24654))) : (14526250440770480934ULL))), (((/* implicit */unsigned long long int) ((var_9) >> (((14526250440770480913ULL) - (14526250440770480907ULL)))))))));
    var_14 = ((/* implicit */short) (-((+(min((16948123382604652054ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))));
}
