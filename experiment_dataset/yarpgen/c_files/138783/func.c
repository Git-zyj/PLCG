/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138783
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
    var_10 = ((/* implicit */unsigned long long int) ((((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (var_4))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_6), (((/* implicit */short) var_4))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_11 += ((/* implicit */signed char) arr_5 [i_1] [i_2]);
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) arr_1 [i_1] [i_1]))));
                    arr_6 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_0)));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -772039510)) ? (772039509) : (-772039512))))));
                    var_14 *= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18067)) * (((/* implicit */int) (signed char)0))))), (min((((arr_10 [i_0] [i_0] [i_0] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0))), (((/* implicit */long long int) arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1]))))));
                }
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)85)) ? (772039509) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1 - 1])))) : (-2033742660))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_7))));
    var_17 = ((/* implicit */unsigned short) var_7);
}
