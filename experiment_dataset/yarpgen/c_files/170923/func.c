/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170923
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
    var_15 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((int) arr_2 [i_0 + 2] [i_0 + 2]);
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 22LL))) ? (min((arr_1 [i_0 + 2]), (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) (unsigned char)181))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (_Bool)1)))))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned short)24942))))), (((unsigned long long int) arr_1 [i_0]))))));
            }
        } 
    } 
}
