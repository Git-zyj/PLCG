/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13654
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_0])) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(arr_3 [i_0 + 4] [i_1] [i_0])))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0])))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (unsigned char)2))));
                }
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    var_17 = ((/* implicit */short) arr_0 [i_0]);
                    arr_9 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4161550704U)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)49))));
                }
                for (unsigned short i_4 = 3; i_4 < 11; i_4 += 2) 
                {
                    arr_12 [i_0 - 1] [i_0] [i_0] [i_0] = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0 - 3] [i_0])), (min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))))) > (max((((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)97)) : (arr_1 [i_4]))), (((/* implicit */int) var_3)))));
                    arr_13 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) <= (max((-528012258), (((/* implicit */int) (unsigned char)196))))));
                    arr_14 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) var_0);
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_6 [i_4] [i_4] [i_4] [i_4 - 2]), ((_Bool)1)))), (min((517268517), (((/* implicit */int) (unsigned short)9462))))));
                    arr_15 [i_0] [i_0] [i_0] = (unsigned char)253;
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
}
