/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181180
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_0] &= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(var_15)))) : (0U))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((((((((/* implicit */_Bool) -649594797)) ? (arr_3 [i_1] [i_1]) : (0U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_2])))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((+(((int) var_3)))) > (1017891970))))));
                }
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        var_20 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 4294967273U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-29120)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3] [i_4])))))) : (((unsigned int) var_11))));
                        var_21 = ((/* implicit */short) (~(arr_5 [i_4] [i_4] [i_4 + 2] [i_4])));
                    }
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        var_22 |= ((/* implicit */unsigned int) ((int) var_14));
                        var_23 = ((/* implicit */int) min((var_23), (var_7)));
                    }
                    for (signed char i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        arr_19 [i_0] [i_3] [i_1] [i_3] [i_6] |= ((/* implicit */short) (+(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (((unsigned int) var_5))))));
                        var_24 = ((/* implicit */signed char) var_9);
                        var_25 -= ((((/* implicit */int) ((short) ((short) 1017891970)))) + (((arr_1 [i_6 - 1]) % (arr_1 [i_6 - 1]))));
                        var_26 = ((/* implicit */int) (+(1199279952U)));
                    }
                    arr_20 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) (!(((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
                }
                var_27 = min(((+((+(var_7))))), (((/* implicit */int) ((((/* implicit */_Bool) 1017891974)) && (((/* implicit */_Bool) var_12))))));
                var_28 &= (+(max((-1017891983), (-1965015323))));
                var_29 ^= var_17;
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (+(((int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */int) var_2))))))))));
}
