/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107332
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
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) (_Bool)1))));
    var_18 *= ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) 3683577178U)), (var_13))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((0U), (arr_3 [i_0] [i_0])))), (max((arr_15 [i_3 - 2] [i_3 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_1]), (((/* implicit */unsigned long long int) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))))));
                                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [7LL] [i_2 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2 - 1] [i_2] [i_3] [i_4] [i_4]))) : (max((((/* implicit */unsigned int) (short)-32753)), (var_9))))), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (~((-(6550953361531849771LL)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [(short)0] [(short)0] [i_1] [i_1] [(signed char)1] [(signed char)1])))))));
                            var_23 = ((/* implicit */int) arr_5 [i_6]);
                            var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) max((max(((unsigned short)15053), (((/* implicit */unsigned short) (short)-10827)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -62166217398221304LL)) <= (17609297461964120567ULL))))))), (((1527493361U) ^ (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_5] [i_6]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
