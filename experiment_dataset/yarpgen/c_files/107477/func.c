/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107477
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)61320)) == (((/* implicit */int) (unsigned char)69))))))));
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)61320)) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */unsigned long long int) arr_3 [(unsigned short)12] [i_1]))))) || (((/* implicit */_Bool) ((int) arr_5 [i_1] [i_1] [15])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-30190)) % (((/* implicit */int) (unsigned short)61317))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19596))))) : ((+(((/* implicit */int) var_17))))))));
                arr_8 [(unsigned char)13] [9U] = ((/* implicit */unsigned int) (-((+((-(4323455642275676160ULL)))))));
            }
        } 
    } 
    var_20 += ((short) ((unsigned long long int) (-(3039368107U))));
    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))) + (127LL)))))));
    var_22 = ((/* implicit */short) var_6);
    var_23 = ((/* implicit */long long int) ((((long long int) (short)16384)) < ((~(max((((/* implicit */long long int) (_Bool)1)), (-127LL)))))));
}
