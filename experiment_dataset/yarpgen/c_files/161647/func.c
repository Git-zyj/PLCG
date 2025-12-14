/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161647
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_0] [i_1] [13ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_5 [i_1]))))));
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_3 + 3] [i_4 + 2])) && (((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_3 + 2] [i_4 - 1]))))), (arr_7 [i_1] [i_3] [i_3 - 2] [i_4 + 1])));
                                var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_6 [i_0] [i_3 + 1]))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */_Bool) (+((+(((/* implicit */int) min(((unsigned char)121), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_2] [i_2]);
                    arr_14 [i_1] [i_2] = ((/* implicit */_Bool) (-(min(((-(var_16))), (((/* implicit */long long int) var_15))))));
                    var_21 = ((/* implicit */long long int) (~(17371027722559411379ULL)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1878785280)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((-(17371027722559411379ULL))))) <= (((((/* implicit */_Bool) ((var_8) ? (var_17) : ((-9223372036854775807LL - 1LL))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-27238), (((/* implicit */short) (_Bool)0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            {
                var_23 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_15 [i_5]) : (arr_15 [i_6 + 2])))));
                arr_21 [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(-1340069088)));
                arr_22 [(signed char)16] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(arr_15 [7LL]))), ((~(((/* implicit */int) (short)-26304))))))) ? (((((/* implicit */_Bool) -9162835409866650259LL)) ? (3585725171348166837LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_5])) == (((/* implicit */int) (short)26294))))) : (min((((/* implicit */int) arr_16 [i_5])), (var_15))))))));
            }
        } 
    } 
}
