/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120854
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
    var_10 = min((((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-37)), (var_0)))) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (var_1) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7))))) : (((var_8) ? (((/* implicit */int) var_8)) : (var_1))))));
    var_11 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) (unsigned short)35383)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (3917387464512861328ULL))) : (((var_8) ? (var_6) : (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((min((14529356609196690288ULL), (var_6))) < (((/* implicit */unsigned long long int) -11)))))));
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_3)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] [i_2] [i_4] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_1] [i_4] [i_3] [i_4 - 1])), (var_2))), (((/* implicit */unsigned long long int) (~(arr_13 [i_0] [6] [i_2] [(short)2] [i_4 - 3]))))));
                                arr_16 [(unsigned short)9] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */_Bool) (signed char)14)) && (((/* implicit */_Bool) (signed char)-63))))));
                }
            } 
        } 
    } 
}
