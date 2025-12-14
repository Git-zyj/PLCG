/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159263
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) 4294967274U);
                arr_7 [i_0] [i_0] [i_0] |= min((((/* implicit */long long int) arr_2 [10] [10])), (arr_0 [i_1] [i_1 + 1]));
                arr_8 [i_0] [i_0] [i_0] &= ((((/* implicit */int) ((arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]) > (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) / (((/* implicit */int) (signed char)86)));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) var_12))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 3]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (~(var_1)));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((unsigned int) arr_16 [i_1] [i_1 + 2] [i_1] [i_1]));
                            var_23 = ((/* implicit */unsigned short) 2129556176);
                            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_0]))) : (-8663581211080165554LL))) * (((/* implicit */long long int) var_19))));
                            arr_21 [i_1] [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) -91941434)))));
                        }
                        var_25 = ((/* implicit */int) ((short) arr_15 [i_1 - 2] [i_1 + 1] [i_2 - 1] [i_2 - 1]));
                        var_26 = ((/* implicit */unsigned char) (~(((var_18) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_19 [i_1] [i_2] [i_1] [i_1] [(_Bool)1] [i_1] [i_1])))));
                    }
                    var_27 = ((/* implicit */unsigned int) (_Bool)1);
                    var_28 ^= ((/* implicit */unsigned long long int) ((unsigned char) (-9223372036854775807LL - 1LL)));
                    var_29 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1] [i_0]);
                }
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_17))))) : (min((((/* implicit */unsigned int) var_10)), (var_3)))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)0), ((signed char)(-127 - 1))))))));
    var_31 = ((/* implicit */signed char) (short)29141);
}
