/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114094
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
    var_20 = ((/* implicit */long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 2] = ((/* implicit */signed char) arr_4 [i_1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_4] [i_3] [0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [i_4])))) ? (arr_5 [i_0] [i_3]) : (((/* implicit */unsigned long long int) -7301669743392048122LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)199))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_0])) ? (2991448766U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])))))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), ((+(((unsigned long long int) 69227806))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_6]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 8ULL)) ? (18ULL) : (293084127915456966ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)19729), (((/* implicit */unsigned short) (unsigned char)103))))))))) : (((/* implicit */int) (signed char)0))));
                                var_23 ^= ((/* implicit */long long int) (unsigned char)84);
                                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10893340562486903927ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0 - 1]))))) - (((unsigned int) var_18))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)118))))) : (arr_9 [i_0] [i_0 + 1] [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
                var_25 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 + 1]))));
            }
        } 
    } 
}
