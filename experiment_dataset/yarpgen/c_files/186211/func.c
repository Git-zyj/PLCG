/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186211
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
    var_16 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (var_13)))) ? ((((_Bool)1) ? (511201439024428318ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_4))))));
    var_17 = ((((/* implicit */int) ((var_15) && (((/* implicit */_Bool) var_4))))) != (((/* implicit */int) var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [(unsigned short)8] = max((((/* implicit */unsigned short) var_5)), (((unsigned short) ((var_11) && (((/* implicit */_Bool) var_10))))));
                                arr_17 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_11 [5] [i_2] [i_3] [5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((((~(arr_1 [i_0] [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            }
                            arr_18 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_3))) | (((unsigned long long int) (signed char)-44))))) ? (((/* implicit */int) arr_6 [i_3] [i_0])) : (1241988017)));
                            arr_19 [i_0] [i_2] [i_2] [(short)6] = 262144;
                            /* LoopSeq 1 */
                            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                arr_23 [i_1] [i_1] [i_1] [(unsigned short)3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-32)))) < (var_6)));
                                var_18 = ((/* implicit */unsigned int) (_Bool)1);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_0])) << (((((/* implicit */_Bool) arr_6 [i_5] [i_3])) ? (((/* implicit */int) (short)0)) : (-13)))))) ? (min((((((/* implicit */_Bool) (unsigned short)255)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))))), (((/* implicit */unsigned long long int) (-(-20)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                                arr_24 [i_5] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) 2080374784);
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6659034248635529243ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [(short)2] [i_1] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_20 [i_0] [(_Bool)1] [i_0] [i_0] [11LL] [i_1]))))) && ((!(((/* implicit */_Bool) max((7), (((/* implicit */int) (short)-1162)))))))));
                arr_25 [i_0] = ((/* implicit */signed char) var_10);
            }
        } 
    } 
}
