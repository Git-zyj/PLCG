/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174863
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
    var_18 = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) var_4)), (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) * (((unsigned int) 0U)))))));
    var_19 &= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_3)) & ((+(((/* implicit */int) (unsigned char)224)))))));
    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((1073741824U), (((/* implicit */unsigned int) (short)29770))))))) ? (((/* implicit */int) (short)31960)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3495)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((_Bool) 4212662861U))));
                arr_7 [i_1] [i_0] [(short)15] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                var_22 = ((/* implicit */short) (signed char)-12);
                arr_8 [i_0] [2U] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (3900719845U)));
            }
        } 
    } 
}
