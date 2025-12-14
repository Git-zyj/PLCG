/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173064
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
    var_16 = ((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)246))))))) - (((((/* implicit */_Bool) -5709535680919212012LL)) ? (max((var_13), (-5709535680919212012LL))) : (min((((/* implicit */long long int) var_8)), (-5709535680919211998LL))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 5709535680919212012LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) & (((5709535680919212012LL) / (7431826237019552601LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-5709535680919212011LL) : (8388607LL)))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)116)))) : ((+(((/* implicit */int) var_9)))))))));
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = (unsigned char)34;
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 -= (~(((((7431826237019552601LL) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_2]))))) ? (((((/* implicit */_Bool) -5709535680919212039LL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_1 [(unsigned short)11] [i_1])))) : (((1240685231) - (((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_2]))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & ((((((_Bool)1) ? (arr_5 [i_0]) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [(_Bool)1])))) - (((/* implicit */long long int) 4026531840U))))));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1]))) * (4026531840U))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5709535680919212012LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)217))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)25459))) : (-5709535680919212012LL)))) : (((((/* implicit */_Bool) (short)-16970)) ? (((/* implicit */unsigned long long int) 424062715)) : (10045713832951894500ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [15LL] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)244)) - (214)))))) ? (((((/* implicit */_Bool) -2638630908230105726LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (5214705444420119932ULL)))))))) ? (((/* implicit */int) var_11)) : ((-(var_2)))));
}
