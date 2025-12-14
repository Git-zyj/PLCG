/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115362
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_1)), ((~(min((1262961058960960431ULL), (1262961058960960431ULL)))))));
    var_18 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2135))) & (((((/* implicit */_Bool) 8796093022207LL)) ? (17183783014748591177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (signed char)-101))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((18ULL) & (72056494526300160ULL))))))))));
                            arr_10 [i_3] [i_2] [i_1] [i_0 - 2] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (((-(((/* implicit */int) (short)25666)))) < (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (signed char)118))))))), ((+(((/* implicit */int) var_3))))));
                            var_20 = ((/* implicit */unsigned char) (unsigned short)43540);
                            arr_11 [i_3] [i_2] [i_1] [(unsigned char)15] [i_0 - 1] = ((/* implicit */unsigned int) ((short) arr_9 [i_0] [15LL] [i_1] [15LL] [i_2] [6LL]));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [(short)0] [i_0 - 2])))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [19LL] [19LL] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)39691))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) < (((/* implicit */int) var_4)))))))) : ((-((-(6937379324698701783LL)))))));
                                var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [(short)6])))) : (((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 743204344)), (var_0))) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_4])))))) : (max((var_10), (max((((/* implicit */unsigned long long int) (unsigned short)49266)), (var_10))))));
                                arr_21 [i_0] = ((/* implicit */long long int) ((_Bool) ((signed char) arr_0 [i_0 - 2])));
                                var_22 ^= ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8388600U)) / (17592185520128ULL)))) ? (72056494526300160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)18522)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49266))) : (56744943U))), (((/* implicit */unsigned int) max((-1), (((/* implicit */int) (short)0)))))));
                var_23 &= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1938999864)) ? (((/* implicit */int) ((short) var_14))) : ((-(((/* implicit */int) arr_9 [(signed char)5] [i_1] [i_0] [i_0 - 2] [i_0 - 2] [8U])))))));
            }
        } 
    } 
}
