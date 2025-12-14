/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164697
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = min(((-(((/* implicit */int) min(((unsigned short)457), (var_0)))))), ((+(max((-1599639496), (((/* implicit */int) (unsigned char)238)))))));
                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((min(((unsigned short)65535), ((unsigned short)457))), (min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-8817))))))), (((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) var_10)))) * ((-(((/* implicit */int) var_14))))))));
                arr_7 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) max((((min((((/* implicit */int) arr_2 [i_0])), (-174117052))) - (((((/* implicit */int) arr_2 [i_0])) - (2147483647))))), (((/* implicit */int) (((-(arr_5 [i_0] [i_0]))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)465))))))))))) : (((/* implicit */signed char) max((((min((((/* implicit */int) arr_2 [i_0])), (-174117052))) + (((((/* implicit */int) arr_2 [i_0])) + (2147483647))))), (((/* implicit */int) (((-(arr_5 [i_0] [i_0]))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)465)))))))))));
            }
        } 
    } 
    var_21 = (!(((/* implicit */_Bool) (~(min((var_13), (((/* implicit */long long int) var_11))))))));
    var_22 = ((/* implicit */signed char) (((+((+(((/* implicit */int) var_2)))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_14)))))) != (max((var_13), (((/* implicit */long long int) var_11)))))))));
}
