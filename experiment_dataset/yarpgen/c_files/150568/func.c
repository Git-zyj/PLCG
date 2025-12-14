/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150568
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_7)))) : (var_4)));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-1)))) ? (-1) : (((((((/* implicit */_Bool) var_4)) ? (-145832863) : (((/* implicit */int) var_8)))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)-4096)) && (((/* implicit */_Bool) 145832863))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned int) (signed char)3);
                                arr_15 [i_4 + 1] [i_0] [i_0] [i_1 - 2] [2] = arr_9 [i_0 - 1] [i_1 + 1] [i_0 + 1] [i_3] [18];
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = -6;
                                arr_17 [i_0] = ((/* implicit */unsigned int) arr_12 [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */short) ((int) arr_3 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) (~(((int) 5))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_22 [(short)8] [(unsigned short)20] [i_5] [i_6]))));
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((max((((/* implicit */int) arr_6 [i_1] [i_0 - 1] [i_1])), (145832862))), (min((-6), (1373321252)))))) | (((unsigned int) arr_14 [(_Bool)1] [i_0 - 1] [i_1 - 2] [i_1]))));
                                var_18 *= ((/* implicit */_Bool) -1);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_24 [(unsigned short)10] [i_0 + 1] [1] [i_1] [13] [i_2]))) ? (((((/* implicit */_Bool) arr_13 [i_1 - 2] [i_0])) ? (((((/* implicit */int) (short)-22397)) + (145832844))) : (arr_11 [i_1] [i_1 + 1] [i_1] [i_0 + 1] [i_2]))) : (min((((((((/* implicit */int) var_0)) + (2147483647))) << (((1) - (1))))), (((int) var_4))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_10)))), (max((var_11), (((/* implicit */int) (unsigned char)3))))))) ? (((((((/* implicit */_Bool) 145832832)) && (var_9))) ? (((/* implicit */int) ((5) == (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_6)) : (var_1))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) 5562875290201497819LL))))), (((-145832855) | (var_1)))))));
}
