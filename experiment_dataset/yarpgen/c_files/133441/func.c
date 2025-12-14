/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133441
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) && (((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))));
                var_18 = ((/* implicit */short) ((((/* implicit */int) max(((short)-16115), (((/* implicit */short) arr_0 [i_0]))))) % (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) arr_0 [i_0])))))));
                var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) + (max((arr_3 [i_1]), (arr_3 [i_0])))))), (((long long int) arr_6 [i_0] [(unsigned short)11] [i_1]))));
                var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) var_15)))) : ((~(((/* implicit */int) arr_0 [i_0]))))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(max((arr_3 [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [10U]))))))))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-26575)) / (((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) (unsigned char)145)) ? ((-(((/* implicit */int) (short)-16115)))) : (((/* implicit */int) (short)16127)))));
    var_23 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))))), (max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) var_6))))));
}
