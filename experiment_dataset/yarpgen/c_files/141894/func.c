/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141894
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
    var_11 = ((/* implicit */_Bool) ((long long int) (signed char)87));
    var_12 = ((/* implicit */long long int) ((_Bool) var_7));
    var_13 = var_3;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)124)), (arr_2 [13U])))))))) ^ (var_3)));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned char) min((arr_8 [(signed char)9] [i_1 - 2] [(short)15] [(short)15]), ((-(min((5524252454934944355LL), (3332917402438792851LL)))))));
                    var_15 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10364)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 2] [6LL] [i_2])) : (((int) var_6))))), (((((/* implicit */_Bool) arr_3 [(signed char)6] [(signed char)6] [(signed char)6])) ? (((((/* implicit */_Bool) (unsigned short)25106)) ? ((-9223372036854775807LL - 1LL)) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (+(var_1)));
                                arr_14 [i_2] = ((/* implicit */_Bool) (-(-2135049442)));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(arr_12 [(signed char)7] [i_1] [i_2] [i_2] [i_3] [i_3]))))));
                                arr_15 [17LL] [17LL] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_13 [i_3 + 1] [i_3 + 1] [i_3] [i_2] [i_3 + 1]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 6420038088016004120LL))) || (((/* implicit */_Bool) ((long long int) -6420038088016004121LL)))));
                }
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned int) var_1);
}
