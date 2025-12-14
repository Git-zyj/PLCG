/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1255
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (~(18446744073709551615ULL)));
                    var_12 -= (((!(((/* implicit */_Bool) max((4194296U), (((/* implicit */unsigned int) (short)10574))))))) ? (((/* implicit */unsigned int) 16)) : (1251161231U));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [2U] [i_3] [i_4]))) : (arr_14 [i_0] [i_3] [i_4]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_1] [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))))))));
                            var_14 = 17029596442488646332ULL;
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1845355293U)), (11035194861084125792ULL)))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1])) : (((((/* implicit */unsigned long long int) -215129029)) * (arr_10 [13ULL])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_1))));
}
