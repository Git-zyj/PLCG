/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111401
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
    var_13 -= ((/* implicit */signed char) ((long long int) ((_Bool) (_Bool)1)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */unsigned short) ((short) (!((_Bool)1))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26185)) ? (min((arr_1 [i_2]), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)7670)), (-1)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))))));
                    var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))) <= (15350463517523454988ULL)));
                }
            } 
        } 
    } 
}
