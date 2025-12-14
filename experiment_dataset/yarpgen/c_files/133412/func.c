/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133412
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
    var_16 ^= ((/* implicit */unsigned char) (-(((((((/* implicit */long long int) 2478108154U)) < (var_3))) ? (((((/* implicit */int) var_2)) | (var_11))) : (((/* implicit */int) (short)6928))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_10)))) ? ((-(((/* implicit */int) arr_3 [i_0] [(_Bool)1])))) : (((/* implicit */int) arr_3 [i_0] [i_1])))), ((~(((/* implicit */int) ((signed char) (signed char)-3)))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) arr_2 [i_0]))))) > (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((-4648482559372062983LL), (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (signed char)(-127 - 1))))))));
}
