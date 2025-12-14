/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172544
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
    var_18 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        arr_12 [i_3 + 2] [i_0] [i_2] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_6))))) ? (max((var_1), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_7) : (((/* implicit */long long int) var_12)))))) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (max((((/* implicit */long long int) var_11)), (var_7))) : (((long long int) (signed char)-11))))));
                        arr_13 [i_0] [i_2] = ((/* implicit */unsigned long long int) var_15);
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)1)), (2302139351760950137LL)));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-11)), (520093696))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_10)))), (((((/* implicit */_Bool) (unsigned char)50)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)22)) ? (var_17) : (var_2))))) ? (min((max((var_10), (var_17))), (max((((/* implicit */unsigned int) var_3)), (var_16))))) : (var_10)));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_2] = ((/* implicit */short) -4607639637327895344LL);
                }
            } 
        } 
    } 
}
