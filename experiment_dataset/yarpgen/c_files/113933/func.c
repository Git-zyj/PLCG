/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113933
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
    var_11 = ((/* implicit */unsigned char) (~(-13)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0 - 1] = var_8;
                    var_12 = ((/* implicit */int) (+(((4294967286U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1 + 2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_9)) * (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2 - 3] [(unsigned short)4] [(unsigned short)4])))), (((/* implicit */int) var_9)))) >= (((/* implicit */int) ((max((((/* implicit */long long int) arr_0 [i_0])), (var_5))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -13)) < (arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [i_1 + 2]))))))))));
                                arr_15 [i_4] [(_Bool)1] [i_4] [i_1] [3] [i_1] [i_0] = ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_10)))) | (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_1 [i_4] [i_0]))))))) + (((((/* implicit */int) arr_3 [i_2 - 3] [i_1 - 1])) % (((/* implicit */int) arr_3 [i_2 - 1] [i_1 - 1]))))));
                                var_14 = -13;
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = max((23U), (max((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5] [i_0] [i_5] [i_5])) ? (arr_7 [i_0] [i_1] [i_0]) : (var_0))), (arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -11)) ? (arr_9 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_5] [i_0 + 1]) : (arr_9 [i_0 - 2] [i_1 - 1] [i_5] [i_5] [i_0]))) <= (max((arr_9 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1]), (arr_9 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0])))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(arr_16 [i_1])))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (((var_7) >> (((var_7) - (4288445332276878593ULL))))))))))));
                    arr_19 [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)33927)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_18 [i_1] [i_1]))))))) || (((/* implicit */_Bool) -11))));
                }
                arr_20 [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_4);
}
