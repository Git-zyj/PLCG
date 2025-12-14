/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130516
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [i_4]))))) ^ (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) : (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                                arr_13 [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) -2943711628743232760LL)))));
                                var_21 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_3 - 2] [i_3] [12ULL] [i_3 - 2] [i_2])), (arr_11 [i_3 - 3] [i_3 - 1] [i_0] [i_3 - 1] [i_0])))) ? ((+(arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]))) : (((/* implicit */long long int) (+(max((var_9), (((/* implicit */int) arr_0 [8ULL]))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) ((((long long int) arr_7 [i_0] [i_0] [i_1] [i_1])) ^ (((-1768979625441617772LL) / (((/* implicit */long long int) 882765076))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */short) var_5);
                            var_24 *= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-26)) < (((((arr_17 [i_5] [i_1] [i_5]) - (((/* implicit */int) (signed char)-12)))) | ((+(((/* implicit */int) (unsigned short)39594))))))));
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)26)) < (((/* implicit */int) (signed char)-85)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (-(((var_19) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))))));
}
