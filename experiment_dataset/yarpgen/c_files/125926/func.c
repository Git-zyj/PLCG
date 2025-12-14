/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125926
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0] [i_0 - 1]);
                                var_19 += ((/* implicit */short) ((max((((/* implicit */int) var_17)), ((~(((/* implicit */int) var_17)))))) <= (((((/* implicit */int) arr_3 [i_2 - 1] [i_3] [i_4])) * (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_3 [i_0] [i_2] [5])))))))));
                                arr_11 [i_4] [(_Bool)1] [i_1] [i_2] [i_1] [(unsigned char)4] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_3] [i_1] [(_Bool)1]))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned short) var_3)), (arr_4 [i_1] [i_0] [i_1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1] [i_0] [i_1])), (-1882235882))))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((unsigned long long int) arr_10 [i_0 - 1] [(short)0] [(_Bool)1] [i_0] [i_1] [i_1])) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((-(((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0]))))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) var_10))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(var_0))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (-2147483647 - 1)))) * (((/* implicit */int) var_0))));
}
