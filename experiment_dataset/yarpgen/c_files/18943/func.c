/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18943
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((max(((+(((/* implicit */int) var_6)))), (max((var_8), (((/* implicit */int) var_0)))))), (min((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])), (max((arr_0 [i_2]), (((/* implicit */int) arr_8 [i_0] [(unsigned short)10] [i_0]))))))));
                    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [i_1]))))) / ((+(((/* implicit */int) arr_3 [i_1]))))))) ? ((~(((/* implicit */int) (unsigned short)65524)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12)))))))));
                    var_16 = ((/* implicit */signed char) (+(arr_9 [(signed char)12] [i_1] [(signed char)2])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (~((+(var_3)))));
    var_18 &= ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            {
                arr_15 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)106)) >> (((-2108072350) + (2108072367)))))));
                var_19 = ((/* implicit */signed char) arr_12 [i_3] [i_3] [(_Bool)1]);
            }
        } 
    } 
}
