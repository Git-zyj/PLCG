/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117658
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])))) ? (((((/* implicit */int) (unsigned char)192)) ^ (((/* implicit */int) (unsigned char)117)))) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (576460752303423487ULL) : (17870283321406128129ULL)));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 10244815131912262851ULL))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [4U] [i_0] [4U] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (max((arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) < (((/* implicit */int) arr_1 [i_1] [i_0]))))))));
                                var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) arr_3 [i_3] [i_3] [i_3])))) : (((/* implicit */int) ((unsigned char) var_4))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (6644357562464657000LL) : (((/* implicit */long long int) 8388576))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((short) var_2))), ((-(((/* implicit */int) var_7)))))))));
    var_21 = ((/* implicit */long long int) max((var_1), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))) < (((long long int) var_6)))))));
}
