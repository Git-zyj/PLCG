/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10100
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
    var_11 = min((((/* implicit */unsigned long long int) ((signed char) var_10))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)34222))))) ? (((((/* implicit */_Bool) 7343407701163110990ULL)) ? (13762629135676700943ULL) : (((/* implicit */unsigned long long int) -1073741824)))) : (min((((/* implicit */unsigned long long int) -6538472883235692833LL)), (13762629135676700943ULL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [3LL] [10LL] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) arr_8 [i_0] [i_0] [i_2] [i_3])));
                            arr_11 [i_2] [i_2] [i_2 - 1] [(signed char)9] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) 4120157630U)) ? (((/* implicit */int) var_8)) : (0)))))), (-6538472883235692833LL)));
                            var_12 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_3), (var_10)))) ? (((/* implicit */unsigned long long int) min((-3626661383225487055LL), (-1681849280551413860LL)))) : (min((((/* implicit */unsigned long long int) 549755813856LL)), (18ULL)))))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_3 - 1] [i_1 - 1])) ? (arr_1 [i_2 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1681849280551413837LL)) ? (-3) : (((/* implicit */int) arr_4 [i_2 + 1] [i_3 - 1] [i_1 - 1]))))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -1285879743))) ? (((/* implicit */unsigned long long int) 1340358762)) : (15496003140233329398ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2950740933476222218ULL)) ? (1681849280551413830LL) : (4594149707819773554LL)))) ? (-27LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1340358737)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)116))))))) : (1151795604700004352LL)))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((signed char) max((3792769654761927258LL), (((/* implicit */long long int) 587483462))))))));
                arr_12 [(unsigned short)0] = ((/* implicit */short) min(((+(((/* implicit */int) arr_7 [i_0] [i_1 + 1] [(signed char)7] [(signed char)6])))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3] [i_1] [i_1])) ? (arr_2 [i_1] [i_1 - 2] [i_1]) : (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_1] [i_1]))))));
                var_16 = max((((/* implicit */long long int) max((12U), (1U)))), (((long long int) arr_6 [i_1 - 2] [(unsigned short)1] [i_0] [i_1 - 3] [8U] [(signed char)8])));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((long long int) (((-(-7675384868252697245LL))) / (((/* implicit */long long int) ((/* implicit */int) max(((short)32512), (((/* implicit */short) var_3)))))))));
}
