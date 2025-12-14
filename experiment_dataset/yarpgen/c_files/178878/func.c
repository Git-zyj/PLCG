/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178878
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
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_9)), ((-(var_5)))));
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_16))));
    var_21 = ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (var_2)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((unsigned short)7680), (((/* implicit */unsigned short) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551603ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) var_3)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [(unsigned char)3] [i_2] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? ((-(((/* implicit */int) (unsigned short)43786)))) : (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) << (((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [(short)11])) - (4399)))))));
                            arr_12 [i_0] [(unsigned short)3] [i_0] [(unsigned short)10] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned short)41689)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)43781)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_1 [i_2] [i_2]))))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_7 [i_0] [i_1] [i_2] [i_3])))) | (((/* implicit */int) (short)-11248))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = max((((/* implicit */unsigned long long int) ((unsigned int) (~(var_15))))), ((~(arr_10 [i_0] [i_1] [i_2] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) (-(((/* implicit */int) ((var_14) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))))));
}
