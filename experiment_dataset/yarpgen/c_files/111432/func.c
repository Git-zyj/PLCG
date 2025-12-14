/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111432
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) != (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))) <= ((+(((/* implicit */int) (short)-1)))))))));
    var_21 = ((/* implicit */_Bool) max((var_8), (var_17)));
    var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))), (((unsigned char) var_14)))))) : (((var_11) ? (var_10) : (min((((/* implicit */unsigned int) (short)4095)), (var_10)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */int) max((var_23), (((((((/* implicit */int) var_2)) >= (((/* implicit */int) (unsigned char)179)))) ? (((((/* implicit */int) (short)-310)) % (((/* implicit */int) arr_3 [i_1 - 1] [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)128))))))));
                var_24 -= ((/* implicit */short) (((+(((/* implicit */int) (short)-310)))) - (min((((/* implicit */int) min(((short)-4100), ((short)-21971)))), (((int) (short)-24965))))));
            }
        } 
    } 
    var_25 = -67090841;
}
