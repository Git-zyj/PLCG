/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188571
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
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) var_9)) > (var_1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))) >> (((((unsigned long long int) var_14)) - (183ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] = ((/* implicit */long long int) (short)25483);
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)10])))))));
                            var_20 = ((/* implicit */unsigned char) ((((arr_9 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-16)))))) ? (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_0])) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) <= (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) (short)32767)));
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) (~(1048575)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            {
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) (signed char)-1)))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24971)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)7201)) : (247873602)))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4]))) : (var_9))))))))));
                arr_23 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46927)) * (((/* implicit */int) (unsigned char)128))));
                var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_4])), (min((var_6), (6149142331895746649LL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-860))))) : (17LL)))));
                arr_24 [i_5] [i_5] [i_4] = (-((~(var_8))));
            }
        } 
    } 
}
