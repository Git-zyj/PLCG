/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137944
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
    var_20 = ((/* implicit */signed char) max((max(((+(var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)39878)), (6680516558425939183LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(5127541870368382748ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_19)))))));
    var_21 = ((var_2) ? (var_4) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) max(((-((+(arr_0 [(_Bool)1] [(_Bool)1]))))), (((/* implicit */long long int) (-((+(((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                var_23 = ((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)8] [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_24 = ((/* implicit */signed char) arr_3 [i_2] [(signed char)7] [i_0]);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5127541870368382733ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4583507908756927128ULL)));
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) max(((signed char)76), ((signed char)102))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_16 [i_0] = var_11;
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(arr_9 [i_0] [i_0] [15LL] [i_4] [15LL] [(_Bool)1])));
                    }
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11781861564188402083ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551601ULL)))) ? ((-((+(arr_6 [i_0] [i_1] [i_1] [i_0]))))) : (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)0))))))));
                    var_26 = ((/* implicit */unsigned long long int) min((((arr_8 [(signed char)16] [i_1] [i_1] [i_1] [(signed char)0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [0] [i_2] [i_1] [i_0] [i_0] [i_0]))) : (-8370581013310688463LL))), (((/* implicit */long long int) (+(((arr_14 [i_0] [i_1] [i_1] [12U] [i_0] [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_3 [4U] [i_0] [i_0])))))))));
                }
            }
        } 
    } 
    var_27 *= ((/* implicit */unsigned long long int) var_18);
}
