/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186732
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)20)))), (max((((/* implicit */int) (unsigned char)29)), (1639839679)))));
                        arr_14 [i_1] [i_1] [i_2 - 4] [(signed char)7] = ((/* implicit */unsigned char) var_3);
                        arr_15 [i_3] [i_3] [i_1] [i_1] [i_3] [i_0] |= ((/* implicit */int) (~(-1LL)));
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                    }
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1639839670)) ? (1744160572U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2550806728U)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)-63))))) : (((unsigned long long int) (short)-2808)))));
    var_19 = (((+(max((var_4), (((/* implicit */unsigned long long int) (signed char)-122)))))) ^ (18208497162022963979ULL));
    var_20 = ((/* implicit */unsigned char) ((var_9) ? ((~((+((-9223372036854775807LL - 1LL)))))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_15)))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_7))));
}
