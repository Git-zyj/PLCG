/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127911
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
    var_13 += ((/* implicit */unsigned char) var_11);
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -819676748235808959LL)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] = min(((short)-23124), ((short)-16));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23939)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */short) var_3)), (var_2)))) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_0])))) : (((/* implicit */int) min(((signed char)16), (((/* implicit */signed char) arr_8 [i_3 - 1] [i_0 - 2])))))));
                                arr_15 [(unsigned short)5] [i_1] [i_2] [i_2] [i_2] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((1055531162664960ULL), (((/* implicit */unsigned long long int) var_4))))) ? (min((((((/* implicit */_Bool) var_8)) ? (arr_5 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) (_Bool)0))))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 - 2])) ? (arr_0 [i_0 - 3] [i_0 - 3]) : (((/* implicit */long long int) 1711336895))))));
                            }
                        } 
                    } 
                } 
                var_16 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (arr_1 [i_0 - 1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967269U)) ? (((/* implicit */int) var_9)) : (4))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_26 [i_5] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */long long int) min(((short)-13145), ((short)4080)));
                            var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((536870904LL), (-1231428225963181867LL)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_17 [i_5])))))) ? (min((((/* implicit */unsigned int) arr_3 [(unsigned short)4] [(unsigned short)4] [i_5 + 1])), (min((((/* implicit */unsigned int) var_5)), (arr_16 [i_8]))))) : (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1U))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (_Bool)1))))))))));
                            arr_27 [i_5 + 1] [i_6] [i_5 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4148450577704541881ULL)) ? (-19LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 3704769325U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32677))) : (11513249781488749212ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-20744)))))));
                        }
                    } 
                } 
                arr_28 [i_6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)-98)), (7319625412818831052LL)));
            }
        } 
    } 
    var_19 ^= ((/* implicit */int) var_2);
}
