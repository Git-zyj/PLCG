/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141487
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) : (var_4))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)104))))), (((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20416))))))), (max((((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (9U))), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_1]))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((/* implicit */unsigned int) ((short) var_13))), (arr_4 [i_0] [(unsigned short)16] [i_2]))))));
                    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-2188)), (((((/* implicit */_Bool) (short)16081)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-31271))))))) ? (((min((((/* implicit */unsigned int) (unsigned char)255)), (1652674279U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 4] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)31288), (((/* implicit */short) (signed char)(-127 - 1)))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((_Bool) arr_2 [i_0 + 3] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (short)-27843)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (9223372036854775807LL)))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                arr_15 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 948812478U)) ? (max((((/* implicit */int) (signed char)127)), (var_13))) : (((var_15) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-65)) / (32767)))) - (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) max((var_15), (var_1)))) * (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) (short)31250)) : (((/* implicit */int) var_1)))))))));
                arr_16 [i_3 + 2] [i_3 + 3] = ((/* implicit */signed char) 3346154817U);
                var_19 = ((/* implicit */long long int) 1209809796U);
                arr_17 [i_4] = ((/* implicit */signed char) (short)31270);
            }
        } 
    } 
}
