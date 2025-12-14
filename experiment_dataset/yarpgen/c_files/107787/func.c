/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107787
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_18) : (4294967282U))), (4294967283U)))) ^ (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (4294967257U)))) * (var_11)))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 14876635322731213824ULL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3570108750978337792ULL)) ? (2191533795U) : (((/* implicit */unsigned int) max((arr_0 [6ULL] [i_1]), (((/* implicit */int) (unsigned short)65534)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_18)) / (arr_2 [i_0])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_6))))))) : (min((((int) arr_2 [(unsigned short)19])), (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_8))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) 4294967284U)) ? (3570108750978337801ULL) : (var_11))))), (((/* implicit */unsigned long long int) ((arr_4 [i_1]) ? (arr_10 [i_0] [i_1] [15LL] [i_3]) : (var_13))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                var_22 = min((((/* implicit */unsigned long long int) ((arr_4 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [(_Bool)1] [19])))))) : (arr_2 [i_3])))), (max((((((/* implicit */_Bool) arr_5 [(short)11])) ? (var_3) : (3570108750978337785ULL))), (((/* implicit */unsigned long long int) 14U)))));
                                arr_17 [i_4] [i_3] [i_2] [i_1] [12] [i_0] [12] = ((/* implicit */long long int) (!(((arr_12 [i_0] [i_0] [i_0] [(unsigned short)13]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9428)))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */short) min((max((((/* implicit */long long int) ((((/* implicit */int) var_8)) - (var_12)))), (min((arr_10 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) 1687865783)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_2])))))));
                                var_24 *= ((/* implicit */short) arr_14 [i_0] [i_1] [i_2] [i_0]);
                                arr_21 [i_5] [(_Bool)1] [(_Bool)1] [i_1] [i_5] = ((/* implicit */int) (-(max((14876635322731213824ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967264U)))))))));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_3] [i_3] [0LL] [i_1] [0LL]))) <= (min((((/* implicit */unsigned long long int) 3105192418937063487LL)), (arr_9 [i_0] [14]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((4294967281U) != (min((arr_18 [i_0] [14U] [i_0] [i_2] [i_2] [i_3] [i_3]), (((/* implicit */unsigned int) var_2)))))))) : (arr_2 [i_0]))))));
                            }
                            arr_22 [6LL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_19))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 3570108750978337781ULL)) ? (max((((/* implicit */long long int) max((var_18), (((/* implicit */unsigned int) var_19))))), (min((((/* implicit */long long int) 14U)), (var_13))))) : (((/* implicit */long long int) var_17))));
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (((_Bool)1) || (((/* implicit */_Bool) var_1)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))))))))));
    var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_17)) * (max((((/* implicit */unsigned long long int) ((short) var_5))), (var_3)))));
}
