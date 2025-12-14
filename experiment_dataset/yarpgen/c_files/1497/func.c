/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1497
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
    var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((var_12), (((/* implicit */short) var_3))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) min((var_10), (((/* implicit */unsigned int) var_12)))))) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(short)15] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (var_9)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((short) ((unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (arr_12 [(short)14] [i_1] [1] [9U]) : (var_9)))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((short) (+(((var_5) << (((var_6) - (14903959244713682420ULL)))))))))));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [(unsigned short)14] [(unsigned char)14] [10LL]))));
                var_18 = min((((((/* implicit */_Bool) max((arr_0 [(short)7]), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (((/* implicit */int) arr_8 [(short)9] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0]))))) : (var_10))), (((/* implicit */unsigned int) var_0)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_8);
}
