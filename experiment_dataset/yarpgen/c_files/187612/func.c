/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187612
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (signed char)-64);
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((short) (((~(arr_5 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4027379110U))))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28960))) & (2147467264LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 8078090)) != (arr_2 [i_0] [i_1])))))))))))));
                            arr_12 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((arr_8 [i_2]) >> (((arr_6 [i_0]) - (3636088319U))))) & (max((((/* implicit */unsigned long long int) arr_11 [i_2] [(unsigned char)8])), (18446744073709551615ULL))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (arr_7 [i_0] [i_1])))) ? (((((/* implicit */_Bool) -4540515613276640266LL)) ? (var_8) : (((/* implicit */unsigned long long int) 4290772992U)))) : (((/* implicit */unsigned long long int) 1738976727))))) ? (((((/* implicit */_Bool) arr_10 [15LL] [i_0] [(unsigned short)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(short)17] [i_1] [14ULL])) && (((/* implicit */_Bool) arr_0 [i_0] [i_1])))))) : (((((/* implicit */unsigned int) 1544615787)) + (401355488U))))) : ((+(arr_10 [i_1 - 1] [i_1] [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) -4827814910774161222LL))), (var_6)));
}
