/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139244
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_3))))) != (max((min((((/* implicit */long long int) -1216611483)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65531)) / (((/* implicit */int) (signed char)-92)))))))));
    var_12 = ((/* implicit */signed char) ((((((((/* implicit */int) var_6)) * (((/* implicit */int) var_1)))) - (((((/* implicit */int) var_0)) / (((/* implicit */int) var_7)))))) / (min(((-(((/* implicit */int) var_9)))), ((-(((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-1421)))))), (((((((/* implicit */_Bool) -9223372036854775805LL)) || (((/* implicit */_Bool) 4717261038895514597LL)))) || (((/* implicit */_Bool) arr_5 [i_1 + 1]))))));
                    var_14 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) var_6)), (arr_7 [(_Bool)1] [i_1 - 2] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */short) ((6390751114570754152LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)5)))));
}
