/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124000
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
    var_17 = ((/* implicit */int) ((short) ((((((/* implicit */int) (signed char)-76)) + (var_16))) + (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)64)), (var_15)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */int) (signed char)-69)) : (var_9)))));
                var_19 = ((/* implicit */int) arr_1 [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) > (var_16)))), (((((/* implicit */_Bool) -1772838593)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))) & (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((((/* implicit */int) (signed char)-69)) - (arr_2 [i_0]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))), (((((/* implicit */_Bool) arr_5 [1])) ? (((/* implicit */int) arr_1 [i_0])) : (var_9))))));
                var_20 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-15))))) : ((~(113079951U))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) 124474517U)) ? (((/* implicit */int) var_15)) : (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)9601)))) / (var_8)))))));
}
