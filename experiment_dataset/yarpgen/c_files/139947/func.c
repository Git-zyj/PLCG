/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139947
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] [(short)5] [10ULL] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 138545757497512246LL)) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_1] [i_4 - 3])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_13 [i_4] [i_3] [i_2 - 1] [i_1] [i_0])) : (((((/* implicit */_Bool) (short)-22336)) ? (((/* implicit */int) var_12)) : (var_18))))), (((((/* implicit */_Bool) (+(arr_9 [i_0] [i_1])))) ? ((-(((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_2] [i_2] [i_4])))) : (((/* implicit */int) arr_15 [i_4 - 1] [i_3 + 1] [i_2 + 1] [i_0] [i_0] [i_0]))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) max((arr_15 [i_4 - 2] [i_4 - 2] [i_4] [i_4] [i_4 - 1] [i_4]), (arr_15 [i_4 - 3] [i_4 - 4] [i_4] [i_4] [i_4 - 1] [i_4 - 1])))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3271930884U)) ? (8689665008453529274LL) : (2305843009213685760LL)));
                                arr_17 [i_0] [i_1] [i_1] [i_3 - 2] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(unsigned char)11] [(unsigned char)11] [0LL] [(unsigned char)11] [i_4 - 1] [2]))) / (((((/* implicit */_Bool) -8689665008453529292LL)) ? (var_19) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_3] [i_4 - 4]))))))));
                                arr_18 [i_0] [i_1] [i_0] [(short)0] [12U] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_4]))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(signed char)4])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] [i_0])) : (var_11)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1]))) : ((+(var_2))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_11)) : (4294967285U))), (((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned char) arr_14 [i_0] [i_1 - 2] [i_0] [i_1] [i_0] [i_0] [(signed char)11])))))))) ? (((arr_15 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1] [i_1 - 2]) ? (((/* implicit */unsigned long long int) var_3)) : (var_14))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned char) (~((~(((/* implicit */int) var_1))))))))));
                arr_20 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) var_0)) : (var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))) : (((((/* implicit */_Bool) var_18)) ? (12331894233493119532ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) : (max((var_4), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)0)))))));
    var_24 = ((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_15)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
}
