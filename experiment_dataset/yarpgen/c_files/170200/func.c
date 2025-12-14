/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170200
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 6U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) : (min((4294967290U), (((/* implicit */unsigned int) (short)27556))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-9223372036854775807LL - 1LL))));
    var_11 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) var_3)) ^ (6U))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_2] &= ((/* implicit */short) max(((unsigned char)186), ((unsigned char)255)));
                    var_12 = ((/* implicit */unsigned short) (unsigned char)87);
                }
            } 
        } 
    } 
}
