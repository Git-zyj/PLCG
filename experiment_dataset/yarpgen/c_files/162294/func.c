/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162294
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (unsigned char)22))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 += arr_3 [i_1] [(unsigned short)0];
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)233);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 16265182495444350656ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)235))))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)19)) ? (min((((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned short) (unsigned char)22))))), (max((((/* implicit */unsigned int) (unsigned char)22)), (arr_0 [i_3]))))))));
                arr_12 [i_2] [i_2] [i_3 + 4] = ((/* implicit */int) (unsigned char)178);
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-41)) * (((/* implicit */int) (signed char)41))));
                            var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) & (2824153116924398101ULL));
                        }
                    } 
                } 
                arr_19 [i_3] = ((/* implicit */long long int) (+(3729224425U)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)222)))))), (max((((long long int) var_0)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))))))));
}
