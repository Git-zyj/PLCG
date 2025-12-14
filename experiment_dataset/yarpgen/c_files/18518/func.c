/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18518
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
    var_10 = ((/* implicit */_Bool) (unsigned short)22651);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = var_9;
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_9 [(unsigned short)15] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [(unsigned char)17] [i_1] [i_2]))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42885)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42885))) : (10217129520464638857ULL)))))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) (unsigned short)42865))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42885)) * (((/* implicit */int) (unsigned short)4071))))) : (2682890959U)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) > (966713845946067929LL)));
                        arr_13 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_3))));
                        arr_14 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((var_4) >= (((/* implicit */long long int) -2009740044))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] [(_Bool)1] [i_2] [i_4] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                        arr_18 [i_2] [i_1] [i_2] [i_4] = (unsigned short)16633;
                        var_14 *= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */int) max(((~(137438691328ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_2] [i_1])) : (arr_3 [i_1 - 1]))))));
                        arr_21 [i_2] [i_2] [i_0] [i_2] = (+(((/* implicit */int) ((signed char) var_5))));
                    }
                    arr_22 [i_0] [6LL] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [1] [i_1] [(_Bool)1] [i_2] [i_2]))) > (arr_12 [i_2] [i_1] [i_0] [i_2])));
                    var_16 += ((/* implicit */signed char) (~(min((((((/* implicit */int) (_Bool)0)) << (((4294967277U) - (4294967248U))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [3] [3])) : (1701563991)))))));
                }
                arr_23 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((+(12271246684717239318ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
}
