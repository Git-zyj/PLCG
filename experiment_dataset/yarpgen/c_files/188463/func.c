/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188463
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-911955550) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] &= ((/* implicit */short) arr_0 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32757)) : (arr_4 [i_3]))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_2 [i_3]))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (signed char)108);
                        }
                    } 
                } 
                arr_14 [i_0 - 2] [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (-6578704983104377372LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(arr_3 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65515)) ? (arr_2 [i_1]) : ((-2147483647 - 1)))))))) ? ((-2147483647 - 1)) : (arr_2 [i_0 + 1])));
                arr_16 [i_1] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) 1616134001U);
    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
}
