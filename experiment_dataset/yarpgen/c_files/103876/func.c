/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103876
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
    var_14 *= ((/* implicit */unsigned char) var_13);
    var_15 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)0))))))));
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)22454)), (2674824192U)))) >= (((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), ((~(min((2674824192U), (((/* implicit */unsigned int) (short)22435))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) var_1);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [(short)9] [2ULL])))) ? (((/* implicit */int) min(((short)-22452), ((short)22435)))) : ((~(((/* implicit */int) var_8))))))) & (((((/* implicit */_Bool) (short)-32749)) ? (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) var_2))))) : (((long long int) 1620143103U))))));
                                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 + 2] [i_4]))))), (2653717163U)));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned int) arr_13 [i_0] [(short)6] [i_0] [i_1] [i_1] [i_1] [i_1])), (7U))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_12);
}
