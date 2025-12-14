/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176952
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) var_4))), ((short)-15621)))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_12))))) : (max((var_3), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15620))) < (1167343172U))))))));
                        arr_13 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) arr_3 [i_0 + 3] [i_0 + 3])), (1128325790U)))));
                        var_15 = ((/* implicit */unsigned int) min((((signed char) 1901739501U)), (((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0])), (10033713064587492881ULL)))))));
                        var_16 += ((/* implicit */short) min((((/* implicit */unsigned int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 3] [i_2])))))), (((max((13U), (((/* implicit */unsigned int) (_Bool)1)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        var_17 *= ((/* implicit */_Bool) var_2);
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0 - 2]))));
                        arr_18 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) (-(((unsigned long long int) arr_15 [i_1 - 1] [i_0 - 2]))));
                    }
                    var_18 = ((((/* implicit */_Bool) 11956709728621096900ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12870)));
                    var_19 = ((/* implicit */int) (((-(var_2))) >= (((/* implicit */long long int) (~(-970750194))))));
                    var_20 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)63051)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (14583063403733641445ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : ((+(max((var_10), (((/* implicit */unsigned long long int) 4294967295U)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((min((var_10), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_0))));
    var_22 = ((/* implicit */signed char) var_4);
    var_23 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_6))))))));
}
