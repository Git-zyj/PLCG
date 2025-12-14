/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123930
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [8LL] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */int) ((unsigned char) var_0))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)24412)) : (((/* implicit */int) (short)32767)))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (min((min((arr_0 [i_0]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) % (((/* implicit */int) (short)-20038))))))) : (((/* implicit */long long int) -2147483645))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-29072)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                                var_18 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_3] [i_1] [i_2] [i_3] [i_4] [i_1]))));
                                var_19 = ((/* implicit */_Bool) 5244171051684319755LL);
                                var_20 = arr_10 [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0]));
                    arr_14 [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_0);
                }
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [6ULL] [i_6] = ((/* implicit */short) ((((((((/* implicit */_Bool) -965795040)) ? (-1981249186) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned char)4]))) : (((long long int) arr_6 [i_0] [i_1] [i_0] [i_0])))) - (28198LL)))));
                            arr_22 [i_0] [i_1] [i_5] [i_0] = ((((/* implicit */int) (short)14440)) != (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_0])));
                            var_21 ^= ((/* implicit */unsigned char) ((unsigned short) max((var_11), (((unsigned long long int) arr_15 [i_0] [i_1] [i_5])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_3)) : ((-(965795037)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_3))))))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))) * (((/* implicit */long long int) ((/* implicit */int) var_2))))));
    var_23 -= ((/* implicit */unsigned short) (unsigned char)255);
}
