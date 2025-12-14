/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143179
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] &= (-(((/* implicit */int) (short)-20476)));
                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4082227195U) : (((2979970862U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) 256288520);
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) 2023625264)))) && (((/* implicit */_Bool) (~(4045752401991547500ULL))))))), (max((((/* implicit */long long int) min((1421246757), (((/* implicit */int) arr_6 [i_2]))))), (min((arr_0 [i_2]), (((/* implicit */long long int) arr_6 [i_2])))))))))));
        arr_7 [i_2] |= min((min((((/* implicit */long long int) ((unsigned short) 4095U))), (max((((/* implicit */long long int) -2023625264)), (-4847639905547029005LL))))), (((/* implicit */long long int) arr_2 [i_2] [19LL] [i_2])));
        var_15 = ((/* implicit */unsigned char) (~((((-(arr_3 [20ULL]))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) ((unsigned short) (unsigned short)30068));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(signed char)11] [i_3])) && (((/* implicit */_Bool) arr_2 [(short)2] [i_3] [(short)2])))))));
        var_17 -= ((/* implicit */signed char) arr_9 [i_3]);
        arr_12 [13] = ((/* implicit */unsigned char) arr_8 [i_3]);
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */int) var_3);
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_16 [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_9))) / (arr_14 [i_4])));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 3] [i_4 + 1]))) / (((((/* implicit */_Bool) var_2)) ? (arr_13 [i_4]) : (((/* implicit */long long int) -2023625264)))))))));
        arr_17 [i_4] = ((/* implicit */unsigned short) arr_13 [i_4 - 1]);
    }
    var_20 = ((/* implicit */long long int) max(((+(((((/* implicit */int) (unsigned short)35468)) + (((/* implicit */int) (signed char)-74)))))), (var_2)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_2)))) ? (((var_8) / (((/* implicit */long long int) min((var_2), (((/* implicit */int) (unsigned char)25))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44408))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_8)))))));
}
