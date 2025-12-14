/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135208
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */signed char) min(((-(1112878167))), (-1687457533)));
                                var_15 = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) - (((long long int) min((((/* implicit */short) (unsigned char)89)), ((short)-909))))));
                                var_16 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2 - 2] = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_1] [i_2 - 1] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) 1333058614)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)25)))) == (((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */short) var_6))))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2 + 1] [i_5] [i_5] [i_2 + 1])) ? (arr_7 [i_0] [i_0] [21ULL] [i_5] [i_6]) : (var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), ((signed char)-4)))) ? (((/* implicit */int) max((var_13), ((unsigned char)2)))) : (((/* implicit */int) ((unsigned char) (short)19299)))))) : (max((max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_2])), (arr_18 [i_0] [i_1] [i_5] [i_5] [i_2]))), (((/* implicit */unsigned long long int) (short)10362))))));
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+((~(((/* implicit */int) var_10))))))), (min((((long long int) (unsigned short)14330)), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_5] [i_1])), (var_10))))))));
                                var_18 = ((/* implicit */signed char) (+(max((((unsigned long long int) arr_10 [i_0] [i_6] [i_2] [i_0] [i_0])), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_1] [i_2] [11ULL] [i_6] [i_6]), ((signed char)4))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12]) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)51206)))))))), (((long long int) var_6))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
}
