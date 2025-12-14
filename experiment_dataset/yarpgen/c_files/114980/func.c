/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114980
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */short) min((((arr_3 [i_1 + 1] [i_1 - 1]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))), (max((((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 - 1])), (3066129409U)))));
                arr_6 [(_Bool)1] [(_Bool)1] [(signed char)13] = ((/* implicit */int) (unsigned char)31);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_12 [10] [i_0] = ((/* implicit */unsigned int) (short)12902);
                            arr_13 [i_3] = ((/* implicit */unsigned short) ((max((max((767006550U), (((/* implicit */unsigned int) arr_7 [(short)8] [i_2] [(signed char)5])))), (((/* implicit */unsigned int) ((var_8) != (((/* implicit */int) arr_2 [i_1]))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = var_9;
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            {
                arr_20 [i_4] [i_5] = ((/* implicit */unsigned short) max(((((+(((/* implicit */int) (unsigned char)31)))) << (((((unsigned int) var_18)) - (3644163585U))))), (((((/* implicit */_Bool) ((int) (unsigned short)5918))) ? (((/* implicit */int) (signed char)-50)) : (1959310310)))));
                arr_21 [i_4] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_17 [i_4] [(_Bool)1] [i_4])) ? (((/* implicit */long long int) arr_9 [i_4] [i_4] [(signed char)6] [i_4])) : (-8833443938503561655LL))) >> (((min((((/* implicit */unsigned int) (unsigned short)20939)), (365884276U))) - (20908U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 1) 
                {
                    for (unsigned int i_7 = 3; i_7 < 10; i_7 += 1) 
                    {
                        {
                            arr_26 [i_4] [i_5] [i_5] [i_5] [i_5] [i_7 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)17938)) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))) : (((/* implicit */int) ((arr_8 [i_4] [i_5] [i_6 + 1] [i_7]) <= (arr_8 [12U] [i_6 - 1] [i_5] [i_4]))))));
                            arr_27 [i_4] [i_6] [i_4] [i_7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)9041)))) ? (min((var_9), (arr_16 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) max((arr_11 [2ULL] [i_4]), (arr_3 [i_7 - 1] [i_7 - 1])))), ((unsigned short)41274)))))));
                            arr_28 [i_6] [i_5] [i_5] [i_5] = ((unsigned char) (+(((/* implicit */int) var_10))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    arr_37 [(unsigned short)14] = ((/* implicit */long long int) var_4);
                    arr_38 [(unsigned short)3] [(_Bool)1] = ((/* implicit */_Bool) (-((~(max((((/* implicit */unsigned int) arr_30 [i_8] [i_10])), (var_9)))))));
                    arr_39 [i_8] [(unsigned char)4] [i_8] = ((/* implicit */_Bool) arr_32 [i_8] [i_9] [(unsigned char)4]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_10)))))) ? (var_14) : (((unsigned int) var_15))));
}
