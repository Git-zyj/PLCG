/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18275
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
    var_19 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */long long int) arr_6 [(short)6] [i_1] [i_1]);
                    arr_7 [i_0] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_4))))))) ? (((((/* implicit */int) max((((/* implicit */short) (unsigned char)63)), ((short)16626)))) >> ((((-(var_17))) - (2460299263U))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (signed char)62)) != (((/* implicit */int) arr_2 [13LL] [i_1])))))))));
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (9223372036854775807LL)))) ? (((/* implicit */int) var_8)) : (max((-1806792832), (((/* implicit */int) (signed char)-62)))))));
                }
            } 
        } 
    } 
}
