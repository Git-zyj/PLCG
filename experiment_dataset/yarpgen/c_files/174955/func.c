/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174955
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
    var_20 += ((/* implicit */short) (~(((((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) var_10)))) & (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) arr_1 [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~((-(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))))))));
                                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_8 [i_0] [(unsigned char)0] [i_3] [i_4]), (((/* implicit */signed char) var_17)))))));
                                var_24 = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 1073741822ULL))))) ^ (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_6 [6ULL])))))) < (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_25 = arr_6 [i_0];
                var_26 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_14))))), (arr_2 [i_0])));
            }
        } 
    } 
}
