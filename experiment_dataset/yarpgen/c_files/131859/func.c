/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131859
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) : (arr_3 [i_0] [i_0])))) ? ((~(arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) : (3651176221018779161LL))))));
                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1458467173U)) ? (arr_3 [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_14 = ((/* implicit */unsigned long long int) (~((+(arr_10 [3U] [i_1] [i_2] [i_1] [3ULL] [(unsigned char)10] [i_4])))));
                            }
                        } 
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2337755340U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (217203173U)))) : (((((/* implicit */long long int) arr_4 [i_0] [i_1])) | (-1127766472156708859LL))))) % (452420670335573879LL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (12528533929354943569ULL)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_16 = (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 134216704)) ? (((/* implicit */long long int) 134216733)) : (-452420670335573879LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3031428639U)))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (max((((452420670335573879LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))), (((/* implicit */long long int) var_4))))));
}
