/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122840
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_2 + 2] [i_3] = ((/* implicit */long long int) 1430184307U);
                            arr_12 [i_0] [i_1] [i_3 + 2] [i_3 + 1] [i_1] = ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) != (2017612633061982208LL))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) : (4232598344U)))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((0ULL) ^ (17ULL)));
                            var_19 = arr_7 [i_3 + 2] [i_1] [i_3 - 1];
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 1]), (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])))) ? (0U) : (((((/* implicit */_Bool) 2340185240U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (0U)))));
                        }
                    } 
                } 
                var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) >= (var_13)))) != (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-1))))))), (var_7));
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (-(var_4)));
                                arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] [i_5] |= ((/* implicit */unsigned int) arr_2 [i_0]);
                                var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) min((max((((/* implicit */long long int) 3565733557U)), (-4611686018427387904LL))), (((long long int) -4611686018427387904LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_1] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4294967295U)))))))) : (((((6234845914596907407LL) <= (931859397814005764LL))) ? (arr_0 [i_6]) : ((+(6251215498216875217LL)))))))));
                                var_24 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_0] [i_4]))))) : (((/* implicit */int) arr_8 [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 1]))))) > ((((!(((/* implicit */_Bool) arr_3 [i_6] [i_4 - 1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((549755805696ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))))))) : (((((/* implicit */long long int) var_3)) & (var_13)))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (max((((/* implicit */unsigned long long int) 63LL)), (9217219995941802590ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))))) ? (18446744073709551615ULL) : (max((var_18), (((((/* implicit */_Bool) 17089706453522186775ULL)) ? (arr_19 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_6)))))))))));
            }
        } 
    } 
    var_26 = max((max((var_5), (max((var_8), (((/* implicit */unsigned long long int) var_17)))))), ((-(((15ULL) - (((/* implicit */unsigned long long int) var_2)))))));
    var_27 = max((((/* implicit */long long int) var_0)), ((+(((((/* implicit */_Bool) 1152921504606846976ULL)) ? (20LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
    var_28 *= ((/* implicit */unsigned long long int) var_17);
}
