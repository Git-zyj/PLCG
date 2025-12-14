/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135540
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [(unsigned short)12] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_0))));
                            var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_3])), ((+(((/* implicit */int) arr_0 [i_1]))))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1])) ? (var_10) : (arr_9 [i_2] [15ULL] [i_0 + 1] [i_0]))) : (arr_9 [i_0] [i_1] [i_2] [(_Bool)1])));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)101))))) ? (((((/* implicit */_Bool) (short)29360)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0]))))) : (((unsigned int) arr_5 [i_0])))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_3)) : (-2147483647))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (short)-17)))) ^ (2147483647)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [24LL] [i_1] [i_1] [(_Bool)1]))))) : (arr_9 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0]))) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
                var_23 = ((/* implicit */signed char) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) ((((((/* implicit */int) arr_7 [i_4] [i_5] [i_6 - 1] [i_6])) * (((/* implicit */int) var_7)))) < (((/* implicit */int) min((arr_7 [i_4] [i_5] [i_4] [i_5]), (arr_7 [17] [i_5] [i_5] [i_6 + 1]))))));
                    arr_19 [(unsigned char)12] [i_5] [i_6] = ((/* implicit */short) ((arr_7 [i_4] [i_4] [i_4] [i_4]) ? (min((((/* implicit */unsigned int) ((signed char) arr_3 [i_4] [i_4] [i_4]))), (arr_9 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_16 [i_6 - 1] [i_6 - 1]), (arr_16 [i_6 + 1] [i_6 + 1])))))));
                    var_25 *= ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) ((((unsigned int) var_17)) >> (((/* implicit */int) var_12))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_19))))))) : (((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)1)))))));
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_2))));
}
