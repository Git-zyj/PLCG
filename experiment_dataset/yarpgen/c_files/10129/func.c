/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10129
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
    var_14 = ((/* implicit */_Bool) (((+((+(-6222487206190221246LL))))) ^ (((/* implicit */long long int) var_4))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_1 [16U]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) max((max((((/* implicit */unsigned int) max((arr_0 [4]), (arr_0 [i_0])))), (min((((/* implicit */unsigned int) arr_1 [i_1])), (var_4))))), (((/* implicit */unsigned int) arr_1 [1]))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0])))))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_12 [4] [4] [i_2] [i_3] [4] = ((/* implicit */unsigned int) max((((unsigned long long int) ((var_9) ? (var_6) : (((/* implicit */long long int) arr_9 [3] [3] [i_4 + 3] [i_4]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_0))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(min((((/* implicit */unsigned int) var_3)), (var_4)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((+(var_7)))))))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (2132625285U)))))))) / (((((/* implicit */_Bool) (-(arr_9 [i_0] [i_2] [i_3] [i_5])))) ? ((+(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)11] [i_4 + 3] [i_5] [(unsigned char)6] [i_4 + 3] [i_5] [17LL]))))))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_13))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) 2132625290U)))));
    }
    var_22 = ((/* implicit */unsigned int) (short)-2048);
}
