/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142502
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
    var_16 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) (unsigned char)32))))));
                var_18 = ((/* implicit */int) max((var_18), (max(((~(634002020))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_16 [(short)11] [(unsigned short)6] [(short)11] [i_5] [12LL] [i_5] [i_6] = ((/* implicit */signed char) max((min((arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_5]), (((/* implicit */unsigned int) 634002020)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1])))))));
                                arr_17 [i_2] [i_2] [1] [1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) max((-634002021), (634002020)))) ? (min((max((((/* implicit */long long int) var_12)), (2482547502474876820LL))), (((/* implicit */long long int) var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24001)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (-6401127986686274350LL)))) ? (-7990540349624070531LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -634002021)) ? (3578148938U) : (((/* implicit */unsigned int) -634002021)))))))));
                                var_19 = ((/* implicit */unsigned short) (((!(var_13))) ? ((~(arr_15 [i_3 + 3] [i_2 - 1] [i_4]))) : (((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_2 + 2] [i_2 + 2])) ? (var_9) : (((/* implicit */int) var_13))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4142)) ? (min((7990540349624070510LL), (((/* implicit */long long int) -168332393)))) : (((/* implicit */long long int) 716818358U))));
                                arr_18 [i_2] [i_2] [(short)2] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) max(((short)2021), ((short)-2034)))), (min((((/* implicit */int) var_1)), (arr_15 [i_2 - 1] [i_6 + 3] [i_3 + 2])))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [(signed char)5] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 1328259137)) ? (((/* implicit */int) (unsigned short)40123)) : (((/* implicit */int) arr_5 [i_2] [i_2])))), ((~(((/* implicit */int) (unsigned char)0)))))))));
                    var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [10U] [i_3 - 2])), (-1362478361)))) : ((~(arr_10 [i_3])))))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10)))));
                    var_22 = ((/* implicit */signed char) max((min((arr_13 [i_2] [i_3 - 3] [i_4] [(short)18]), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) min((330767916), (((/* implicit */int) (short)31041)))))));
                    var_23 = ((/* implicit */int) max((6878281345524697535LL), (((/* implicit */long long int) -634002014))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), ((((!(((/* implicit */_Bool) var_10)))) ? (min((((/* implicit */unsigned long long int) var_5)), (140737488355327ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (237219975))))))));
    var_25 = ((/* implicit */unsigned short) var_1);
}
