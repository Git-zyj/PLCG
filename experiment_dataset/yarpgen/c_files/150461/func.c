/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150461
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) ((unsigned char) max((arr_0 [i_0 + 2]), (((_Bool) var_6)))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    var_14 += ((/* implicit */unsigned short) max((((unsigned int) max((((/* implicit */short) (_Bool)0)), ((short)-28232)))), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) var_0)), (arr_5 [(unsigned char)6] [i_1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_5 [i_0] [i_3])));
                        var_16 = ((/* implicit */int) var_5);
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) : (var_7)));
                    }
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        arr_10 [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)28)) >> (((((/* implicit */int) (short)-28236)) + (28240)))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) -4426019942071604596LL)) ? (var_9) : (((/* implicit */int) var_0)))))), (max(((-(8699066867918924615LL))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_8))))))))))));
                    }
                }
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 399241580)), (max((((/* implicit */long long int) min((var_3), (((/* implicit */int) var_8))))), ((-(var_7)))))));
                    var_20 = min((((/* implicit */long long int) min((arr_9 [i_0 + 2] [i_0] [i_1] [i_5]), (arr_9 [i_0 - 2] [i_0] [i_1] [(unsigned short)9])))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_0 - 2] [(unsigned short)0]))) & (8699066867918924615LL))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0 - 3]), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (arr_5 [i_0] [i_5]))))) : (((long long int) ((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_5])) / (var_7))))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((signed char) arr_9 [i_1] [(unsigned short)0] [i_1] [i_1])))));
                    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                }
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)28232)) << (((((/* implicit */int) (signed char)127)) - (111)))));
}
