/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159702
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)19401))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1]))))) : (var_11)))) : (min(((~(arr_3 [0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned char) (+(var_7)));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 - 2] [(_Bool)1] [i_4])) || (((/* implicit */_Bool) ((long long int) (signed char)37)))));
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)32)))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                            {
                                arr_18 [i_0] [i_1] [i_2 + 2] [i_3] [i_5] = ((/* implicit */short) ((long long int) arr_5 [i_5]));
                                arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] &= (!(((/* implicit */_Bool) var_11)));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_11 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */_Bool) var_11)) ? (var_8) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_7)))))));
}
