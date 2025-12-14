/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16302
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
    var_12 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)20] [i_3 + 2])) ? (var_2) : (((/* implicit */long long int) arr_5 [i_2] [i_3 - 1]))))) ? (((/* implicit */int) arr_2 [i_0] [9])) : (((((/* implicit */_Bool) ((long long int) arr_11 [i_2] [i_2]))) ? ((~(((/* implicit */int) var_4)))) : (var_3))));
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 4] [i_0 + 1] [i_0] [i_0] [i_0 - 1])) == (((/* implicit */int) arr_7 [(signed char)16] [i_1] [i_2] [i_2] [i_2])))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((_Bool) ((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 1])));
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)32)))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_7] [i_6])) ? (max((var_1), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))))) ? (((/* implicit */int) ((short) ((int) var_0)))) : (((((int) (unsigned char)0)) % (((((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_5] [i_0] [i_1])) & (-1854481017))))))))));
                                var_16 ^= ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_3) : (1493160324)))) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_5 + 1] [i_1] [i_0]))) : (var_1))))));
                                var_17 ^= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_12 [9U] [9U] [i_5] [i_5] [i_5] [i_5 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
