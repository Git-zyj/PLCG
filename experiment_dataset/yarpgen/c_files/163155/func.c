/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163155
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
    var_14 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) (short)21642)))) && (((/* implicit */_Bool) 6949700053349925446LL)))) || ((!(((((/* implicit */_Bool) 6949700053349925436LL)) && (((/* implicit */_Bool) (unsigned short)12068))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_10 [(short)1] [i_1] [(short)1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) min((var_8), (arr_2 [i_2])))) < (((/* implicit */int) (unsigned char)15)))) ? ((~(2113858301))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)60577)))) : (((/* implicit */int) max((arr_5 [i_2] [i_1] [(unsigned char)7] [i_2]), (((/* implicit */unsigned char) var_4)))))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_3 [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned int) (short)-21624))));
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (-(((/* implicit */int) ((short) max((arr_3 [i_3] [i_1] [i_1]), (arr_3 [i_0] [i_2] [(signed char)12]))))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] [i_3] = ((/* implicit */short) -3439310025676497489LL);
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_10);
}
