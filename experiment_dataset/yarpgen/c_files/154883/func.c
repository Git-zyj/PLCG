/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154883
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
    var_19 = ((/* implicit */unsigned int) ((signed char) var_16));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (3914302848U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24837)))))) ? (((((/* implicit */_Bool) (short)24840)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)24837)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))))))));
                var_21 = ((/* implicit */long long int) max(((~(3914302826U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)125)), ((unsigned short)65528))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)38173)))), (((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [(unsigned char)10]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) * (var_13))))))));
                arr_5 [(unsigned char)11] [i_1 + 2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 1])))), (min((16676585244871107326ULL), (((/* implicit */unsigned long long int) var_14))))));
                arr_6 [i_1 + 2] [i_1 + 2] [15U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))) ? ((-(((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 2] [i_0 - 1])))) : (((/* implicit */int) ((535977461353553260ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [21LL] [i_1 - 2] [i_1]))))))))) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned short)65528)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_2 [(unsigned char)3]))))))) : (((((/* implicit */_Bool) 33554431)) ? (208282577U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24834)))))));
            }
        } 
    } 
}
