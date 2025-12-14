/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15545
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
    var_18 += ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)99)), (16105890826307089123ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2])) << (((((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [(short)15])) - (185)))))) : (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 1] [i_2]))) : (var_5)))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) >= (arr_8 [i_0] [i_3] [i_2] [i_3] [i_0] [i_3])))) != (((/* implicit */int) ((short) var_8)))));
                            arr_11 [i_3] [10] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [12U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14604)) ? (arr_9 [i_5] [i_1] [i_5 + 1] [i_4 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
                            arr_20 [(short)17] [i_1] [i_4] [(unsigned char)16] = ((/* implicit */unsigned char) ((_Bool) arr_17 [i_5 + 2] [i_5 - 2] [(short)11] [i_5] [i_5 + 1]));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_4 - 1] [i_4 + 1] [i_5 + 2]) : (arr_2 [i_4 + 1] [i_4 + 1] [i_5 - 2]))) : (min((arr_2 [i_4 - 1] [i_4 - 1] [i_5 + 1]), (arr_2 [i_4 - 1] [i_4 + 1] [i_5 + 1])))));
                            arr_21 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) var_11);
    var_22 = ((/* implicit */signed char) var_7);
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_16))));
}
