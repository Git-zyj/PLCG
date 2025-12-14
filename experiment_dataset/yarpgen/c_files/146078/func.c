/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146078
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) ((1152903912420802560LL) < (((/* implicit */long long int) 8388600U))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [(short)7] [8LL] [i_3] [10U] [9ULL] = ((/* implicit */signed char) ((-6398811713850754033LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-14640)))));
                            arr_11 [i_3] = ((/* implicit */unsigned long long int) var_6);
                            arr_12 [(short)8] [4U] [4ULL] [i_2] [8] [0U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [3U] [10ULL] [i_1] [7])) ? (-1152903912420802561LL) : (((/* implicit */long long int) var_7))))) || (((/* implicit */_Bool) 6398811713850754045LL))));
                            arr_13 [3LL] [i_3] [(short)3] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((short) arr_0 [10LL]))), (0U))), (((((/* implicit */_Bool) 8388606U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))) : (4286578696U)))));
                            var_13 += arr_1 [6ULL];
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) ((short) (signed char)89));
    var_15 = ((/* implicit */int) 2757602737U);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((3960667572U) >= (((/* implicit */unsigned int) -1529248480)))))));
}
