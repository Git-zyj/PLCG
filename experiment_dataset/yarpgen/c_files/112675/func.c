/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112675
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
    var_13 = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((short) var_11))))) | (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)3] [i_1] [i_1] = ((/* implicit */short) (((((~(((/* implicit */int) arr_2 [i_0 - 1])))) + (2147483647))) >> (((((((/* implicit */int) arr_3 [i_1])) | (((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_4 [i_0])) - (29))))))) - (214)))));
                var_14 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                arr_7 [i_0] = ((/* implicit */_Bool) (((-(((unsigned int) 1636771980497923718ULL)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (_Bool)0)))) >= ((-(((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
}
