/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115676
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
    var_14 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (~(1616779677)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-1616779698) : (((/* implicit */int) (unsigned char)197)))))))), (min((((/* implicit */int) var_5)), (min((((/* implicit */int) var_1)), (var_9)))))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) var_0))));
    var_16 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((unsigned short) var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */signed char) var_12);
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_2)))))) + ((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (1616779673) : (-1616779677)))))));
                arr_6 [i_1] [i_0] [i_0] = ((((arr_1 [i_1]) ? (max((((/* implicit */int) (signed char)(-127 - 1))), (-49715762))) : (((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_7)))))) != (min(((~(((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned char) var_4))))))));
                var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-123)) >= (((/* implicit */int) min((var_13), (var_13)))))) ? (((var_9) | (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) arr_3 [20])) ? (-1616779659) : (((/* implicit */int) var_4))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) var_11)) * (((/* implicit */int) var_8)))))))));
            }
        } 
    } 
}
