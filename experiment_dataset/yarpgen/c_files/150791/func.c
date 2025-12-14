/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150791
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) (signed char)-95);
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
        var_21 = ((/* implicit */signed char) var_10);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? ((+(arr_1 [i_0]))) : (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_1]))))))));
            var_23 -= ((/* implicit */unsigned long long int) ((((var_8) * (((/* implicit */unsigned long long int) (-(2931529500U)))))) == (((unsigned long long int) (~(129206925U))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7746788675107246962LL)) ? (8884871019897740535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42592)))));
                            var_25 *= ((/* implicit */signed char) arr_6 [i_4 - 1] [i_4] [i_0]);
                            var_26 = ((/* implicit */_Bool) (((((_Bool)1) ? (685517174453876518ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34828))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3079133281U))))) << (((var_5) + (489375575))))))));
                            var_27 = ((/* implicit */int) ((-1690243025) != (1690243024)));
                        }
                    } 
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned long long int) var_4);
}
