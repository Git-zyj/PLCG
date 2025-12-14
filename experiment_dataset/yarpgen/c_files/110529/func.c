/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110529
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
    var_17 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0] [9]));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (unsigned char)251)) : (871144896)));
                            var_20 = ((/* implicit */_Bool) arr_9 [11] [i_3 + 1] [i_3 - 1] [i_2 + 2]);
                            arr_10 [i_0] [i_2] [i_2 + 2] [6U] = ((/* implicit */short) 2147483647);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [(unsigned short)1] = ((/* implicit */short) ((var_9) == (((/* implicit */int) (short)-879))));
                                var_21 ^= ((/* implicit */short) (-(arr_6 [i_3] [i_3 + 1] [i_3] [i_3])));
                                arr_16 [i_2] [i_2] [i_2 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)249))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_2] [(unsigned short)3] [i_4 - 3] [i_4])) ? (((/* implicit */int) ((_Bool) (short)-18745))) : (((/* implicit */int) ((871144896) == (((/* implicit */int) arr_1 [i_1] [i_1])))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned short) ((_Bool) arr_1 [i_1] [i_2]));
                                arr_19 [i_0] [i_3] [i_2] [i_2] [i_2] [15U] = ((/* implicit */short) (~(var_11)));
                                var_24 |= ((/* implicit */unsigned char) ((((((_Bool) -1141353663)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [(unsigned char)2] [i_2] [(unsigned char)0] [i_3])) : (((/* implicit */int) arr_12 [(unsigned short)4] [(_Bool)1])))) : (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_2 + 2] [i_2 + 2]), (((/* implicit */unsigned short) arr_5 [(unsigned char)3]))))))) ^ (((/* implicit */int) arr_4 [i_0] [16]))));
                            }
                        }
                    } 
                } 
                arr_20 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [10])) && (((/* implicit */_Bool) (unsigned short)22003))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (short)-898))))));
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) var_6);
    var_26 = ((/* implicit */int) min(((((!(((/* implicit */_Bool) (unsigned char)13)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (((var_5) >> (((-6080618167655779324LL) + (6080618167655779346LL))))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-19498))))), (0U)))));
}
