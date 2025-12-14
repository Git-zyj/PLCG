/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159870
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
    var_17 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_3 [(short)0] |= ((/* implicit */int) 118718108U);
        var_18 += max(((unsigned char)158), (((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))));
        var_19 = ((/* implicit */unsigned char) (_Bool)1);
        var_20 = ((/* implicit */short) ((signed char) (-(arr_1 [i_0 - 1]))));
        arr_4 [i_0] = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) max((var_11), ((-2147483647 - 1))));
        var_21 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) (-2147483647 - 1));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_3 - 1] [i_1]), (((/* implicit */short) arr_7 [12] [i_3 + 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) 2147483647);
                            var_25 ^= ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned int) var_11)), (0U))))) ? ((+(((int) (_Bool)1)))) : (arr_11 [(_Bool)1]));
                            arr_17 [i_1] [i_2] [i_1] = ((/* implicit */short) ((int) (~(((/* implicit */int) min(((unsigned char)102), (((/* implicit */unsigned char) arr_14 [i_1] [i_2]))))))));
                            var_26 = ((/* implicit */unsigned int) var_16);
                            arr_18 [5] [i_4] [i_3 + 1] [i_1] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) ^ (max((((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_3 - 1])), (arr_15 [i_5] [i_5] [i_5 + 1] [i_3 + 1])))));
                        }
                    } 
                } 
            }
            arr_19 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((_Bool) (((_Bool)1) ? (arr_0 [i_1]) : (2147483647)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) min(((_Bool)1), ((_Bool)1)))))));
        }
        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) var_13));
            var_27 = (+(min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((signed char)-38), (((/* implicit */signed char) (_Bool)1))))))));
        }
    }
    var_28 = ((/* implicit */int) var_12);
}
