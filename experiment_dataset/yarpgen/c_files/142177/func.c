/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142177
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
    var_18 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_14)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)64))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))) & (var_0)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) >= (((/* implicit */int) var_5)))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) >= (((unsigned long long int) var_14))));
                        var_22 = ((/* implicit */short) var_3);
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_23 = ((((/* implicit */int) ((unsigned char) (unsigned short)25169))) >= (((((/* implicit */int) arr_9 [i_5] [i_2] [i_2] [i_1])) << (((/* implicit */int) var_14)))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(arr_16 [i_0 + 2] [i_1] [i_2] [i_4 - 1] [i_5])))) | (arr_5 [i_0] [i_0 - 2] [i_0 - 2])));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40367))))) ? (((((/* implicit */_Bool) 16140901064495857664ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (10367899427945337050ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [24ULL])))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_0 + 2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_4 + 1] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_2))));
    var_27 = ((/* implicit */unsigned char) ((unsigned long long int) min((var_16), (((/* implicit */short) var_11)))));
}
