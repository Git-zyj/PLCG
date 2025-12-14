/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102830
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
    var_14 = ((/* implicit */unsigned char) min((var_9), (var_9)));
    var_15 = ((/* implicit */long long int) min((max(((-(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_2)) ? (-217992076) : (((/* implicit */int) (signed char)36)))))), (((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_1 + 1] [i_0]), (arr_7 [i_1] [i_1 + 1] [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_1 - 2] [i_0])) ? (arr_7 [i_2] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50680))))) : (arr_7 [i_1 - 2] [i_1 + 1] [i_1])));
                    arr_8 [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) != (arr_6 [i_1 - 3] [i_1] [i_1] [i_1 - 2]))))) : (min((arr_6 [i_1 - 2] [i_1] [i_1] [i_1 - 3]), (arr_6 [i_1 - 1] [(signed char)7] [i_1] [i_1 - 3])))));
                    var_17 = ((/* implicit */short) (_Bool)0);
                    var_18 *= ((/* implicit */unsigned char) min(((+(arr_6 [i_0] [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) -1351540232))));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_3] [i_0] = ((/* implicit */unsigned char) arr_9 [i_0]);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(min((((/* implicit */int) min(((unsigned char)210), (var_13)))), (max((((/* implicit */int) (unsigned char)84)), (-655360607))))))))));
                    var_20 = ((/* implicit */unsigned short) arr_6 [i_1] [i_1 - 3] [i_1] [i_1 - 1]);
                }
                arr_12 [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (arr_6 [(signed char)10] [i_1 - 3] [i_1] [i_1]))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((var_6), (max((arr_7 [i_1 - 1] [i_1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)54068))))))))))));
                var_22 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) 3724699830493204763LL)))), (((var_1) > (min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (var_1)))))));
                var_23 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}
