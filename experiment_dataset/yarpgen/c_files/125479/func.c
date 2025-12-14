/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125479
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */_Bool) ((unsigned short) min((var_0), (((/* implicit */short) ((_Bool) arr_3 [i_0] [i_0]))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min(((-((-(((/* implicit */int) arr_1 [(_Bool)1])))))), (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_0)), (10646942246139429434ULL))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)86))))) ? (((/* implicit */int) min(((unsigned char)170), (var_11)))) : (((/* implicit */int) min((var_4), ((unsigned char)86))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_13))))))) : (max((min((((/* implicit */unsigned int) var_7)), (var_13))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)63)))))))));
}
