/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172896
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)57391)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8144))) : (2340567720U))), (((/* implicit */unsigned int) (unsigned short)57391))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = min((((/* implicit */unsigned int) max((arr_11 [i_0] [i_2 + 2] [i_2 + 2] [i_3] [i_3] [i_4 - 2]), (arr_2 [i_2 - 1] [i_4 + 1])))), (min((max((((/* implicit */unsigned int) (unsigned short)18458)), (arr_0 [i_0] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned short)57391)) - (57360)))))))));
                                arr_14 [i_4 + 1] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) max((((((/* implicit */long long int) ((((/* implicit */unsigned int) 0)) | (var_2)))) ^ (max((var_14), (((/* implicit */long long int) arr_4 [i_0])))))), (((arr_13 [i_4 + 1] [i_0] [i_4 + 1] [i_3] [i_4] [i_2 - 1]) & (arr_13 [i_4 - 2] [i_0] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_2 + 2])))));
                                var_21 *= ((/* implicit */signed char) max((((unsigned int) arr_3 [(unsigned short)10] [i_3] [i_4])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)15), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_2]))) : (205761076))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_0))));
}
