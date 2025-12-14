/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16957
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4))) | (var_8))) : (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_8))))))));
    var_15 = ((/* implicit */unsigned int) ((unsigned short) var_12));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 |= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_3);
                var_17 = ((/* implicit */unsigned char) arr_2 [i_1] [i_0]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */signed char) var_9);
                                var_18 = ((/* implicit */unsigned char) var_10);
                                arr_16 [i_1] [(signed char)1] = ((/* implicit */_Bool) (+(var_13)));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned short)9576))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) (+((+(((/* implicit */int) var_11))))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_9))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
}
