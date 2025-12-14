/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158344
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
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)8191))));
    var_15 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = (!(((/* implicit */_Bool) 536346624LL)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_3] |= ((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2]);
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_1 + 2] = arr_0 [i_0];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_16 = arr_0 [i_0];
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0]))))) ? (((long long int) var_10)) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
}
