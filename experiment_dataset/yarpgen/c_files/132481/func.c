/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132481
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
    var_16 = ((/* implicit */unsigned short) max((((short) max((((/* implicit */unsigned short) (signed char)11)), (var_12)))), (((/* implicit */short) var_9))));
    var_17 &= ((/* implicit */short) (unsigned char)39);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)109))))))))));
                                var_19 = min((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) arr_11 [i_0] [i_4] [i_2 - 2])))), (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_2 + 3] [i_4])) : (((var_2) ? (arr_0 [i_0]) : (((/* implicit */int) (short)32767)))))));
                                var_20 = ((/* implicit */short) arr_3 [i_2 - 2] [i_2 + 3] [i_3 - 1]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) var_8))), (((((/* implicit */_Bool) (unsigned char)216)) ? (132120576U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103)))))));
                    arr_12 [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_0] [i_0] [i_2 - 2] [i_2 + 3] [i_2 + 3] [i_2 + 3])))) ? (arr_10 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_1] [i_1] [i_1] [i_0]) : ((-(arr_10 [(unsigned short)17] [1LL] [10U] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_1])))));
                    arr_13 [i_1] [i_1] [i_2 + 2] [(signed char)11] = ((/* implicit */int) ((short) var_12));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (132120582U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [14LL] [(signed char)2])) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_0] [i_6] [i_5])) : (((/* implicit */int) (short)11275)))))))) ? (arr_9 [i_1] [i_6] [i_6]) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) arr_14 [i_6] [i_2] [i_2]))))))))))));
                                arr_18 [i_5] [i_1] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((short) (-2147483647 - 1)))) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) ((unsigned short) var_3))))));
                                arr_19 [i_1] = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
