/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120632
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
    var_20 += ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((var_13) ? (8623077372005158198ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))) : ((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18)))))));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) var_5)) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (9823666701704393417ULL))) : (((/* implicit */unsigned long long int) var_10))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) var_1)), (9823666701704393438ULL))) == (((/* implicit */unsigned long long int) var_17)))) ? (((var_5) / (((/* implicit */int) ((short) var_15))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((var_5) - (((/* implicit */int) var_12))))) <= (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)41339)) <= (((/* implicit */int) (_Bool)0))))), (((var_0) ? (((/* implicit */int) ((signed char) (unsigned char)3))) : (((((/* implicit */int) (unsigned char)39)) - (((/* implicit */int) var_18))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_2] [i_1 + 2])), (((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43)))))))) ? (((/* implicit */unsigned long long int) max((((arr_5 [i_2] [i_2]) | (((/* implicit */unsigned int) arr_4 [i_2] [i_1])))), (((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_0 - 2] [i_2]))))) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)52))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30573))) : (arr_2 [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_5 [i_3] [i_1 + 2]), (arr_5 [i_3] [i_2]))))));
                                var_27 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_3 [i_1] [i_3 + 1] [i_2])) / (((/* implicit */int) (unsigned short)7820)))) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_4]))))) ^ (((((/* implicit */_Bool) arr_10 [i_1 - 3] [i_3 + 1] [i_1 - 3] [i_1] [i_0 - 3])) ? (arr_2 [i_1 - 2] [i_1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16388))))));
                                arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    var_28 = ((_Bool) arr_10 [i_2] [i_2] [i_1 - 3] [i_0 + 1] [i_0 + 1]);
                }
            } 
        } 
    } 
}
