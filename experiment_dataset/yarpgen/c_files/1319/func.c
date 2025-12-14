/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1319
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
    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) 3250063230U)) | (7883318201610279714LL))) * (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */signed char) var_10))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2813914495314428521LL)) ? (-953409295) : (2105957372)))) : (var_2)));
    var_13 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) (unsigned short)30339))), ((-((((_Bool)1) ? (((/* implicit */unsigned long long int) 7883318201610279698LL)) : (576460752303423487ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned char)159))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (953409314) : (((/* implicit */int) var_10))))) : ((~(arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))));
                    arr_6 [i_2] [6] [i_1] [i_2] = ((/* implicit */signed char) arr_4 [i_0] [i_1 - 4] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)));
}
