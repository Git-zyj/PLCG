/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181267
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
                var_20 = ((/* implicit */_Bool) min((max(((unsigned short)25467), (((/* implicit */unsigned short) arr_3 [i_0] [i_0 + 1] [(_Bool)0])))), (((/* implicit */unsigned short) min((arr_3 [i_0 - 2] [i_0 + 1] [i_1]), (arr_3 [i_1] [i_0 + 2] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((max((var_6), (((/* implicit */unsigned int) min((var_17), (((/* implicit */int) var_2))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_1)))) <= (((((/* implicit */int) (_Bool)1)) + (var_0)))))))));
    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) var_15)) != (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            {
                var_23 *= ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_5 [i_3]))) << (((/* implicit */int) min((((unsigned char) var_2)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_2]))))))))));
                arr_8 [i_2] = ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)59721)) : (((/* implicit */int) arr_5 [i_2]))))))) ? ((+(((((/* implicit */int) var_13)) - (((/* implicit */int) var_1)))))) : (((/* implicit */int) max((arr_7 [i_3 - 2] [i_2] [i_2]), (arr_7 [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
            }
        } 
    } 
}
