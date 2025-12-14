/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104730
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5746)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1))))) ^ (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))))) != (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)9] [i_2] [i_2] [i_2 - 3])) ? (((/* implicit */int) arr_11 [3ULL] [i_0] [i_2 + 1] [i_2 - 1] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_10 [9ULL] [i_2] [i_2] [i_2 - 3]))))) ? (((((/* implicit */_Bool) arr_5 [1LL] [i_2 + 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 18014398501093376LL)) ? (2364402995351684269LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 + 1] [i_3] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)87))))))) <= (((((/* implicit */_Bool) arr_3 [4ULL] [i_1] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (-7442976886683304814LL)))))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) ((arr_7 [i_4] [i_2] [i_2] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))))) ? (((((/* implicit */_Bool) var_1)) ? (3204416881694618855ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_3])), (arr_4 [i_1] [i_2 - 1] [i_4 - 2]))))))) : (((/* implicit */unsigned long long int) max((arr_8 [1LL] [(signed char)1] [1LL] [i_2 - 1] [i_2 + 1] [i_2]), (((/* implicit */long long int) var_0)))))));
                                arr_12 [i_2] [i_1] = ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) (short)-24787))))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_0] [i_0] [i_0] [i_3] [i_0] [i_2])))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) (+((-(((unsigned long long int) var_7))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_8);
}
