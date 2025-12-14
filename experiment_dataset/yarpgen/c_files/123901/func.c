/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123901
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
    var_18 = (signed char)72;
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((((/* implicit */int) (short)14215)) + (((/* implicit */int) (short)14215)))) : (((((/* implicit */_Bool) (short)14203)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-14215))))))) & (131068U)));
    var_20 = ((/* implicit */signed char) (+(var_7)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((((unsigned int) ((((/* implicit */int) (short)14211)) - (((/* implicit */int) (unsigned char)200))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)14214))) | (max((4294836216U), (4294836227U)))))));
                arr_6 [i_0] [6U] = ((/* implicit */signed char) arr_4 [i_0] [(unsigned char)17]);
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(unsigned short)18])) ? (max((((/* implicit */int) (unsigned char)193)), (((((/* implicit */_Bool) (short)7593)) ? (((/* implicit */int) (short)14214)) : (((/* implicit */int) (short)-14204)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16383)))))));
            }
        } 
    } 
}
