/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185012
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
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)0)) - (((/* implicit */int) var_5)))) - (((/* implicit */int) var_2))))) + ((-(((14ULL) + (((/* implicit */unsigned long long int) -1LL))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_8 [i_1] [i_1] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) || (((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_1 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-21880)))))))), (((16131410861627696996ULL) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))) * (var_6)))))));
                                var_14 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min(((short)-1), (var_2)))))) ? (((/* implicit */int) ((unsigned char) ((2U) + (((/* implicit */unsigned int) -774131690)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4] [i_0])))))));
                                var_15 -= ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))) == (var_4)))))) >= ((~(((int) 336594896))))));
                                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (short)-3119))))) + (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (arr_8 [i_1] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */short) (-(arr_2 [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-12434)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) | (1U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))))));
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) 68451041280ULL))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)21314))))))) >> ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-89)))))))));
}
