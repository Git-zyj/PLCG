/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12280
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) (-2147483647 - 1))) + (arr_4 [i_0] [i_1 - 1] [i_2]))), (((/* implicit */unsigned int) var_3))))) : ((~(min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_10))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) : (var_9)))), ((((-(var_2))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [14] [i_4] [i_2] [i_4] [i_0])) || (((/* implicit */_Bool) var_8))))))))));
                                var_13 = arr_0 [i_0];
                                var_14 = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36698))) != (159132216242476886LL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
}
