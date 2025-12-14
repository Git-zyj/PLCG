/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170858
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 = arr_1 [i_0];
                var_12 = max((((((/* implicit */_Bool) 491520)) ? (arr_3 [10LL] [i_1]) : (((/* implicit */unsigned long long int) -731162768)))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)217)))), ((-(((/* implicit */int) (unsigned short)19893))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [12LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) (signed char)-86)), ((unsigned short)19893))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2048))) != (14911225323658512024ULL)))))))) : (6790874316903790393LL)));
                            var_13 = ((/* implicit */int) max(((signed char)102), (((signed char) 14911225323658512048ULL))));
                            var_14 += ((/* implicit */signed char) arr_0 [(signed char)16]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3640676996107725162LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (_Bool)1))))) + ((+(min((((/* implicit */unsigned int) (unsigned short)45628)), (2610081853U)))))));
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)63488), ((unsigned short)19908))))));
    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)45642)) ? (((/* implicit */int) (unsigned short)19901)) : (((/* implicit */int) (signed char)-97))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            {
                var_18 ^= ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */int) (signed char)60)), ((-(((/* implicit */int) (unsigned short)13461)))))));
                arr_13 [i_5] &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-88))));
                arr_14 [i_4] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_4] [i_4] [9ULL])) ? (var_1) : (((/* implicit */unsigned long long int) min((((int) 2953449404478940757LL)), ((-(((/* implicit */int) var_9)))))))));
            }
        } 
    } 
}
