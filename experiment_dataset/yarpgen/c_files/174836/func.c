/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174836
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_15))));
    var_17 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = (+(((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) (short)-25419)))));
                                var_19 += ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [(unsigned char)1] [i_1] [(signed char)2] [i_3])), (arr_2 [i_0] [i_0] [i_0])))))));
                                var_20 -= ((/* implicit */int) (((-(((((/* implicit */_Bool) arr_8 [(_Bool)1] [0] [(_Bool)1] [(signed char)3])) ? (((/* implicit */int) (signed char)124)) : (arr_5 [i_3]))))) != (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (signed char)12))), (((((var_12) + (2147483647))) >> (((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(arr_3 [i_1] [i_5 + 2]))))))) : (((((/* implicit */_Bool) max(((short)-6457), (((/* implicit */short) (_Bool)1))))) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_2 [8] [i_1] [i_5]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))))));
                    var_22 = (!(((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) < (((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)-105))))))));
                }
                var_23 = min((((/* implicit */int) ((signed char) (_Bool)1))), (((1142135995) ^ (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
