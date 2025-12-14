/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10039
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
    var_14 = ((/* implicit */short) var_11);
    var_15 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) ((_Bool) var_9))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((signed char) var_3)))));
    var_17 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_13)))), (max((((/* implicit */unsigned int) var_8)), (var_4)))))), (((max((2841340874298896739ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)147), (((/* implicit */unsigned char) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) > (((long long int) min((var_11), (((/* implicit */unsigned long long int) 3529667279U)))))));
                var_19 += ((/* implicit */long long int) arr_3 [i_0] [i_0 - 1] [i_0 - 3]);
                arr_4 [i_0] [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((arr_2 [i_0] [i_0] [i_0]) - (1962651781)))))), (-4417172877546158515LL)))) ? (((var_2) - (max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])), (arr_0 [i_1]))))) : (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (63U))), (((/* implicit */unsigned int) (+(arr_2 [i_0] [i_0] [i_0])))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((((arr_2 [i_0] [i_0] [i_0]) - (1962651781))) + (366710578)))))), (-4417172877546158515LL)))) ? (((var_2) - (max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])), (arr_0 [i_1]))))) : (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (63U))), (((/* implicit */unsigned int) (+(arr_2 [i_0] [i_0] [i_0]))))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_3))));
                                var_21 = ((/* implicit */_Bool) (+(max((arr_2 [i_0 - 2] [i_0] [i_0]), (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))));
                                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) != (((long long int) (-(((/* implicit */int) arr_7 [i_1] [i_1])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        var_23 = ((((unsigned int) arr_3 [i_0] [i_0] [i_0])) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_0] [i_0] [i_0]))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_16 [i_0] [i_0]);
                        arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) arr_10 [i_6] [i_0] [i_6] [i_6] [i_6 + 1] [i_6 + 1]));
                    }
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (432814416)));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) 17468836853109645996ULL)) ? (1152919305583591424ULL) : (min((((/* implicit */unsigned long long int) 3821750195716597454LL)), (288230376151711743ULL))))))))));
                    arr_23 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]))))) ? (((((/* implicit */int) arr_10 [i_7] [i_0] [i_0] [i_7] [i_7] [i_7])) + (var_10))) : (((/* implicit */int) (signed char)6))));
                    var_25 ^= ((/* implicit */unsigned char) max(((signed char)4), (((/* implicit */signed char) (_Bool)1))));
                }
            }
        } 
    } 
}
