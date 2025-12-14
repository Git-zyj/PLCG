/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178360
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) var_17);
                    var_21 = ((/* implicit */signed char) 2557407104U);
                    var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) min(((unsigned char)61), (((/* implicit */unsigned char) arr_3 [i_0]))))) ? (arr_6 [i_0] [i_1 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (~(arr_12 [i_0] [i_2] [i_2 + 1] [i_3] [i_2])));
                                var_24 = min(((-(var_12))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), (arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] [i_3] [i_2])))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_4 [i_0] [i_1 - 1]))) ? (((((/* implicit */_Bool) (short)8184)) ? (((/* implicit */int) arr_4 [i_3] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1])))) : (((arr_4 [i_0] [i_1 - 2]) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (((/* implicit */int) (short)-13083))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) var_16))), ((-(var_6)))));
    var_27 += ((/* implicit */short) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        for (signed char i_6 = 4; i_6 < 18; i_6 += 4) 
        {
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_18 [i_5 + 1] [i_6 - 1] [i_6 - 2]) && (((/* implicit */_Bool) 131071ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) var_19))))) ? ((~(1905997551480791693ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (signed char)-16)))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) max(((~(arr_22 [i_8]))), ((~(arr_17 [i_5 - 1] [i_5 - 1] [i_8])))));
                            arr_27 [i_5 - 1] [i_5 - 1] = ((/* implicit */signed char) max((((/* implicit */short) ((unsigned char) arr_14 [i_6 - 3]))), (max((((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_5 + 2] [i_7] [i_8])) || (((/* implicit */_Bool) var_2))))), (min((arr_23 [i_5 + 1] [i_5 + 1] [i_8]), (((/* implicit */short) var_10))))))));
                            var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_5 - 1] [i_5] [i_5 - 1] [i_6 - 3])) ? (((/* implicit */int) arr_14 [i_5 + 1])) : (((/* implicit */int) arr_14 [i_5 + 2]))))), (((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (var_12) : (((/* implicit */unsigned long long int) arr_26 [i_5 + 1] [i_5] [i_5 + 1] [i_6 - 2]))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) min(((~(var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) var_14))))) ? (((unsigned int) var_11)) : (var_18)))))))));
            }
        } 
    } 
}
