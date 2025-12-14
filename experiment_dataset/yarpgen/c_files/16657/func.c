/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16657
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
    var_17 -= ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), (max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)200))))));
    var_18 = ((/* implicit */_Bool) (short)24919);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) (unsigned char)58))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_3)))));
                arr_6 [(unsigned short)12] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (2147483638) : (((/* implicit */int) (short)32752))))), (arr_2 [i_0])))), (((((/* implicit */_Bool) (unsigned short)65531)) ? (((var_0) | (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (arr_1 [i_0] [i_0])))))))));
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)27)) || (((/* implicit */_Bool) var_2)))))) << ((((-(2147483620))) + (2147483642))));
                arr_8 [i_0] [i_0] [4U] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (_Bool)0)))))))), (-1218246586845201935LL)));
            }
        } 
    } 
}
