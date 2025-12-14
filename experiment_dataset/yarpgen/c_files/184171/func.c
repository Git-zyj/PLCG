/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184171
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_17 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((((/* implicit */int) (short)6187)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min((arr_10 [i_4] [i_2] [i_2]), (((/* implicit */unsigned short) arr_12 [i_4] [i_0] [i_1] [i_1] [i_0] [i_0]))))))) == (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)166)) && (((/* implicit */_Bool) 9823317056597436428ULL)))) && (((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_8 [i_0] [(unsigned char)22] [i_4])))))))));
                                var_13 = ((/* implicit */unsigned short) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) (unsigned short)64451)) - (64451))))))), (((/* implicit */int) var_9))));
                                arr_18 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6188))) & (((((/* implicit */_Bool) ((long long int) var_0))) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17927))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_2))))))));
                                var_14 *= 8623427017112115187ULL;
                                arr_19 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) ((min((arr_9 [i_3] [i_0] [i_3 - 1] [i_3 + 1]), (arr_9 [i_3] [i_0] [i_3 - 1] [i_3 + 1]))) <= ((-(arr_9 [i_3] [i_0] [i_3 - 1] [i_3 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_24 [i_6] [15LL] [i_0] [i_6] [(signed char)13] = ((/* implicit */unsigned int) var_11);
                                var_15 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (min((var_1), (((/* implicit */long long int) var_10))))))), (arr_22 [i_0] [i_1] [i_2 + 2] [i_6] [i_0])));
                            }
                        } 
                    } 
                    arr_25 [10ULL] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1]))) / (arr_21 [i_2 + 1] [i_0] [i_0] [i_1] [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) var_5))))))) <= (((/* implicit */int) (short)-6187))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_12)) == (min((((/* implicit */unsigned long long int) ((var_2) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (var_7)))))));
}
