/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125478
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
    var_11 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((arr_9 [(unsigned short)10] [i_1] [i_2] [i_3]) == (315489460U)))))))));
                                var_13 = ((/* implicit */unsigned int) ((arr_5 [i_0]) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((((/* implicit */int) arr_11 [i_4])) & (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (var_5))))))));
                                var_14 = ((/* implicit */long long int) arr_8 [i_0] [i_3] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) var_1))))) || (arr_1 [i_0] [i_0])))) * ((((-(264479016))) * (((/* implicit */int) arr_6 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32767)))) >= (((/* implicit */int) var_1)))))) * (min((var_8), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) (unsigned char)255)))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 23; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) var_6);
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) var_8))), (min((arr_19 [i_5]), (((/* implicit */long long int) (short)(-32767 - 1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_18 [i_6]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)32764))) / (arr_14 [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_21 [i_5])), (arr_14 [i_5] [i_5])))) * (((arr_13 [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                                arr_27 [i_5] [i_5] [i_9] [i_5] [i_5 - 1] |= (unsigned char)96;
                            }
                        } 
                    } 
                } 
                arr_28 [i_6 - 1] [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (arr_24 [i_5] [i_6] [i_5 + 1] [i_6] [i_6] [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5 + 2]))))), (((/* implicit */unsigned int) ((unsigned short) arr_20 [i_5] [i_5] [i_5 + 1])))));
            }
        } 
    } 
}
