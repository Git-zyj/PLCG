/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160589
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_3 [i_1 + 1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [(short)8] = ((/* implicit */signed char) (unsigned char)255);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((arr_13 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] [i_0]) | (arr_13 [i_3] [i_3] [i_3] [i_1 - 1] [i_1] [i_1])));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (2715777667785939239LL)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [i_3]))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (arr_13 [i_0] [i_1] [i_1] [i_5 - 3] [i_5] [i_0]) : (((unsigned int) arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1])))))));
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1096307733)) ? (arr_13 [i_0] [(unsigned short)0] [i_1 + 1] [i_5] [i_5 - 3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))))))));
                    var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_12 [(unsigned char)17] [i_1] [i_5 - 2] [i_5])) ? (((/* implicit */int) arr_12 [i_5] [(unsigned short)17] [i_5 - 2] [i_5])) : (((/* implicit */int) arr_12 [(unsigned char)18] [(_Bool)0] [i_5 - 1] [i_5])))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) var_9)), (var_12)))));
}
