/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115780
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
    var_14 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (~(arr_3 [i_0]))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-455))))), (min((17ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1 - 2]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (6719137281504444188LL)));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))) : (((arr_7 [11LL] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_3 [i_4 - 1])) : (4ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 4; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((var_9) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_1 - 2] [i_1]))))) ? ((((_Bool)1) ? (arr_5 [i_7] [i_1 - 2] [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)37347))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_2))))))));
                                var_19 = ((/* implicit */unsigned short) min((18352727162645610379ULL), (((/* implicit */unsigned long long int) ((short) min((9223372036854775807LL), (((/* implicit */long long int) var_2))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((long long int) (~(arr_5 [i_1] [i_0] [i_0]))));
            }
        } 
    } 
}
