/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186522
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (short)-14687))));
                                var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)24486)) : ((~(((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_2]))))))));
                                var_19 = ((/* implicit */unsigned long long int) max((((int) (-9223372036854775807LL - 1LL))), (((((/* implicit */int) arr_0 [i_0])) + ((+(((/* implicit */int) arr_0 [i_0]))))))));
                                var_20 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_1]))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_0 - 3])) ? ((-(((/* implicit */int) arr_2 [i_3])))) : ((~(((/* implicit */int) var_4)))))), (((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) arr_10 [i_0 + 1] [i_0] [i_2]);
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_3 [i_0 - 3] [i_1] [i_1])))))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (~(9223372036854775807LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (((((/* implicit */_Bool) ((signed char) (short)23))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)23)))))) : (((arr_1 [i_1]) ? (arr_11 [i_2] [i_2] [i_0] [i_0] [i_1] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-5405893430487209434LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((var_11) ? (13888781962264949533ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))))))))));
}
