/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176418
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 2] [i_1] [i_1] = (+(var_12));
                var_14 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2060329922)) ? (((((/* implicit */int) (signed char)-13)) / (arr_2 [i_0]))) : ((+(((/* implicit */int) var_9)))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))))));
                arr_7 [i_0] [(short)9] [i_0 - 1] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (arr_3 [i_0 - 1] [i_0 + 2] [i_0 + 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 2])) : (max((((/* implicit */unsigned int) arr_2 [i_0])), (3370987645U))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (short)-21300);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_5))));
    var_17 = var_6;
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned short i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) min((var_12), (((/* implicit */int) arr_15 [i_5] [i_3 + 1] [i_4]))))) ? (min((var_1), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) (-(var_3)))));
                            arr_20 [i_3] [i_3] [i_2] [i_5] = ((((/* implicit */_Bool) max((var_11), (((unsigned int) 0U))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_8 [i_5] [i_3 + 3]) : (-1))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) / (((/* implicit */int) max(((signed char)-30), (arr_18 [i_2] [i_3] [i_4] [(signed char)3])))))));
                            arr_21 [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_19 [i_2] [i_2] [i_3] [i_2]))) && (((/* implicit */_Bool) min((arr_10 [i_3]), (((/* implicit */unsigned int) (unsigned short)59547))))))))) - (var_5)));
                        }
                    } 
                } 
                var_19 ^= min(((~(min((2427863960U), (((/* implicit */unsigned int) var_13)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_2))) && (((/* implicit */_Bool) var_12))))));
            }
        } 
    } 
}
