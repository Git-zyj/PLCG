/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109825
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
    var_12 = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))) ? (var_2) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-29473)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_0] [i_1 + 1] [i_1]);
                var_14 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (_Bool)1)), (((-28LL) ^ (8796093022207LL))))), (-3417853457749276365LL)));
                arr_7 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)27526)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_2)))))) ? (((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_1 + 1])) + (609))) - (62))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_1])))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)27526)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_2)))))) ? (((((var_2) + (9223372036854775807LL))) << (((((((((((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_1 + 1])) + (609))) - (62))) + (30940))) - (13))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_1]))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_8)))) ? ((~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 1])))) : (((/* implicit */int) max((arr_5 [i_0] [i_1] [i_1 + 1]), (arr_5 [i_0] [i_1] [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (unsigned char i_3 = 4; i_3 < 9; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2]))))))))));
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) min((arr_0 [i_5] [i_5]), (((/* implicit */unsigned int) arr_4 [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6]))))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) 3840675093U)), (arr_20 [i_4] [i_4])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_3 - 1] [i_3 - 4] [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_2] [i_6])) : (((/* implicit */int) arr_18 [i_5]))))) : (((long long int) var_11))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_1)), (0ULL)))))) ? (((((/* implicit */_Bool) ((unsigned char) (signed char)84))) ? (((/* implicit */int) (unsigned short)35519)) : (((/* implicit */int) ((((/* implicit */int) (short)-7460)) > (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) (unsigned short)29268))));
                var_20 = ((/* implicit */long long int) ((signed char) arr_2 [i_2] [i_2] [i_2]));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_21 [i_2] [i_2] [i_2])), (arr_3 [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (var_10))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_2] [i_2]))))))))) : (var_2)));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_3);
}
