/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159237
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 = (+((+(arr_6 [i_1] [9] [i_2 - 1] [5ULL]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) (-((~(arr_14 [i_4] [i_2 - 1] [(unsigned short)3] [i_2] [i_2 - 1] [3])))));
                                arr_15 [i_0] [i_4] [i_2] [i_3 + 1] [(signed char)14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((arr_7 [i_2 - 1] [i_3] [i_3]), (((/* implicit */short) arr_2 [i_2] [i_0])))))) ? ((-(((/* implicit */int) min((((/* implicit */signed char) var_10)), ((signed char)-20)))))) : (min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])) < (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_16), (((/* implicit */unsigned long long int) max((var_8), (var_6))))));
    var_21 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_4))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) -1))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) arr_17 [i_5] [i_6]);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */int) ((((/* implicit */int) arr_20 [(signed char)1] [i_6] [i_7])) != (-1)))))))));
                            arr_24 [i_5] [i_6] [i_7] [i_5] [i_8] [(short)10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(10234422920578628418ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
