/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186583
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_19 = ((long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (_Bool)1))));
                    var_20 = ((/* implicit */unsigned int) ((6330804781983700447ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_21 = (~(9053953232263678LL));
                                arr_16 [i_3] [i_1] [i_2 + 2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) 10364953308722241380ULL);
                                var_22 = ((/* implicit */signed char) max(((((+(var_5))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11882))))), (((/* implicit */long long int) (unsigned short)11858))));
                                var_23 = ((/* implicit */_Bool) min((max((arr_15 [i_2 + 2] [i_3] [i_2] [i_4] [5LL] [i_2]), (arr_15 [i_2 - 1] [i_1] [i_1] [i_3] [(unsigned short)5] [i_0]))), ((-(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_6 [i_0] [4U] [2U])) : (((/* implicit */int) (signed char)-15))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
