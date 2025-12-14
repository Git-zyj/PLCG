/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126397
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
    var_18 = ((/* implicit */unsigned char) ((short) min(((-(((/* implicit */int) (signed char)-28)))), (((/* implicit */int) var_7)))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43288))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 7959659497422354225ULL))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) (unsigned short)14130)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned short)43288)))))), (((((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 1] [i_2 + 1])) ^ (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 2]))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_3 [i_3] [(_Bool)0] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (signed char)-32);
    var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */int) (unsigned short)22243)) / (((/* implicit */int) (signed char)28)))) - (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))));
}
