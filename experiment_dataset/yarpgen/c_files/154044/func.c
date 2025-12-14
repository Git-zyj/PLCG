/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154044
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), ((short)-20384)))) ? (((/* implicit */int) min(((short)-4096), (((/* implicit */short) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4107))) : ((~(((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((((/* implicit */_Bool) min(((short)-4123), ((short)-1262)))) ? (((((/* implicit */_Bool) 1267946264U)) ? (((/* implicit */int) min(((short)-1239), (((/* implicit */short) (signed char)48))))) : (((/* implicit */int) ((unsigned char) 841945421))))) : (var_4));
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-7))));
                            }
                        } 
                    } 
                } 
                var_14 -= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_21 [i_5] [17] [i_6] [i_6] [i_5] = ((/* implicit */int) ((min((arr_1 [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) (signed char)-1))))))) + (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) | (1155872690U))), (((/* implicit */unsigned int) var_4)))))));
                                var_15 -= ((/* implicit */signed char) max((4294967279U), (((/* implicit */unsigned int) (unsigned char)7))));
                                arr_22 [i_6] [i_5] [(signed char)21] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) min((((unsigned int) arr_19 [i_0] [i_1] [i_5] [14U] [i_7])), (arr_19 [i_0] [i_6] [i_0] [i_6] [i_7])));
                                var_16 = ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) max((var_2), (var_3)))), (min((((/* implicit */long long int) var_2)), (arr_3 [(unsigned char)18]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
