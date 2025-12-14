/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179425
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
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3205883814U))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */long long int) (-(var_15)));
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) < (var_9)));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_21 += ((/* implicit */unsigned long long int) (_Bool)1);
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) arr_4 [i_2])) : ((~(((/* implicit */int) arr_3 [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_10)) + (7416)))))))) : (((unsigned long long int) arr_2 [i_2] [i_1]))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 + 1]))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_0 + 1]))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_5])) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25206)))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                                arr_17 [(short)13] [i_3] [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+((~(arr_10 [i_1])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) arr_10 [i_1]);
                }
            }
        } 
    } 
}
