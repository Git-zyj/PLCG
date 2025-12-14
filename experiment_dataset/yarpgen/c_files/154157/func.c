/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154157
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
    var_12 = ((/* implicit */int) max((4294967295U), (((/* implicit */unsigned int) (short)-9699))));
    var_13 = var_7;
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (var_4) : ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) && (((/* implicit */_Bool) (short)9698)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_2 - 1] [i_3])) ? (arr_6 [i_0 - 1] [i_1 - 1] [i_3 + 2]) : (arr_6 [i_0 - 2] [i_1 - 2] [i_0 - 2])))) >= (((arr_3 [i_0] [i_1 - 2] [i_1 - 2]) / (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2]))))));
                            arr_10 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_1 + 1] = ((/* implicit */unsigned int) (+(((int) 4294967295U))));
                            arr_11 [i_0 - 2] [i_1] [i_3] [i_2] = ((/* implicit */signed char) (+(min((max((-1907429882), (var_4))), (((/* implicit */int) arr_7 [i_0 - 2] [i_1 - 1] [i_3] [i_3 - 1]))))));
                            var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (short)9699)) : (((/* implicit */int) (signed char)-118)))))))));
                            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((signed char) arr_1 [i_0 - 2]))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)-114)) > (arr_1 [i_0 - 3]))))))) / ((+(arr_6 [i_1] [i_3] [i_2 + 1])))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 - 1] [i_1] [i_1])) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1]))))) ? (min((arr_6 [i_0] [i_0] [i_1 + 1]), (arr_5 [i_1 - 2]))) : (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */int) var_2)))))) > (var_4)));
            }
        } 
    } 
}
