/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102848
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)-3186)) : (((/* implicit */int) (short)-3186))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_3 - 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3 - 2] [i_1 - 3])) >= (((/* implicit */int) arr_0 [i_3 + 1] [i_1 + 2]))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) + (19603)))));
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1 - 3]))));
                                arr_17 [i_4] [i_3] [i_2] = (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])));
    }
    for (short i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_19 [i_5]);
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) max(((short)-23739), (((/* implicit */short) (_Bool)0))))) << (((((((/* implicit */_Bool) arr_19 [i_5 + 1])) ? (arr_19 [i_5 + 1]) : (arr_19 [i_5 - 1]))) - (1135734386U)))));
    }
    var_23 += ((/* implicit */unsigned short) var_13);
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_0))) : (((((/* implicit */_Bool) (short)-3173)) ? (var_0) : (((/* implicit */unsigned long long int) var_12))))))));
    var_25 = ((/* implicit */unsigned short) (+(1001192918)));
}
