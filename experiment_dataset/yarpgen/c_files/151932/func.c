/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151932
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 563407982)))))) ^ (((2298422699U) ^ (((/* implicit */unsigned int) arr_9 [i_2 - 1]))))));
                                arr_12 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((1996544582U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-24427)))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)2472))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)24439))) ^ (2298422690U))))) : (((unsigned int) (signed char)-21))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        arr_15 [i_5] = ((/* implicit */short) ((max((((/* implicit */unsigned int) (_Bool)1)), (1996544582U))) ^ (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_14 [i_5]))));
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-24427))) ^ (-8963249259873700015LL)));
                    arr_23 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (-8978153580848118353LL)))) : (((arr_21 [i_6] [i_7] [i_8] [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))))))));
                }
            } 
        } 
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))) : ((((_Bool)1) ? (arr_16 [i_6]) : (arr_16 [i_6])))));
    }
    var_23 ^= ((/* implicit */unsigned short) max((min((-3602683160348312318LL), (((/* implicit */long long int) (unsigned char)161)))), (((7201916232623101369LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94)))))));
}
