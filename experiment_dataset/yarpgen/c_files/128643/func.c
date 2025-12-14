/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128643
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 752393760)) ? (-752393760) : (((/* implicit */int) (_Bool)1))));
                    var_19 |= (((!(((/* implicit */_Bool) ((unsigned int) var_18))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) -1227040162))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((long long int) ((((_Bool) 6185734290116363650ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) max((((/* implicit */short) var_8)), (var_12))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_17 [i_1 + 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)5287))))) || (((/* implicit */_Bool) var_16))));
                                var_21 -= max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_3 - 2])), (((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_2 - 1] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (-752393771))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (max((((/* implicit */unsigned long long int) ((short) arr_12 [i_3 + 1] [i_4] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_12 [i_3 + 3] [i_4] [i_4] [i_4]))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_23 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_11)) : (var_1))) << ((((~(((/* implicit */int) (_Bool)1)))) + (25)))));
                    var_24 |= ((/* implicit */unsigned int) var_17);
                }
            }
        } 
    } 
    var_25 = (+(752393756));
}
