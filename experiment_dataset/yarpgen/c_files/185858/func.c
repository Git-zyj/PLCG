/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185858
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
    var_11 = ((/* implicit */unsigned long long int) var_7);
    var_12 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */int) var_10))))), (((var_0) * (((/* implicit */unsigned long long int) var_1)))))) << (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((((var_1) + (9223372036854775807LL))) >> (((((-9223372036854775803LL) - (-9223372036854775782LL))) + (83LL)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)14] [i_1 - 3] = ((/* implicit */unsigned int) var_10);
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [7LL] [i_3] = ((/* implicit */_Bool) min((arr_13 [i_3 + 1] [i_3] [i_3] [i_3]), ((-(((/* implicit */int) arr_2 [i_2 - 1]))))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (0))))))), (var_3)));
                            var_13 = ((/* implicit */unsigned char) var_5);
                            arr_16 [i_0] [i_0] [i_0] [10U] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_3 [i_2]) << (((var_3) - (13267128657229469817ULL)))))) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3 + 1])))) - (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 0)))))))) : (var_3)));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 2] [i_1 + 1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (-2))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_4)))) / (((((/* implicit */unsigned long long int) ((long long int) var_1))) - (min((4158829814353660757ULL), (((/* implicit */unsigned long long int) var_5))))))));
    var_16 = ((/* implicit */unsigned short) (~(0)));
}
