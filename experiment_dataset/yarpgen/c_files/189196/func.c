/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189196
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
    var_17 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 |= min((max((((int) var_10)), ((-(-1324867403))))), ((+(var_10))));
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((int) ((signed char) arr_2 [i_1] [i_2] [i_3])))) > (((max((((/* implicit */unsigned int) (short)2720)), (arr_7 [i_1]))) >> (((((/* implicit */int) (short)32767)) - (32760)))))));
                            arr_10 [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_3)))) ? (var_13) : (var_10))), (((867043181) / (867043181)))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) arr_7 [i_1]))), (((var_11) << ((((-(((/* implicit */int) (short)18266)))) + (18323)))))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_5)))))))), (max(((~(var_10))), ((~(((/* implicit */int) var_12))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(var_16))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) -867043182)) >= (9223372036854775807LL))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(arr_7 [i_4]))))));
            }
        } 
    } 
}
