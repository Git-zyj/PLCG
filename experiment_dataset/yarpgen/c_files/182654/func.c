/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182654
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_0]))))))) : (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)84))))))))));
        var_12 = ((/* implicit */unsigned long long int) var_8);
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_13 |= ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((((/* implicit */int) var_6)) + (1313519626))) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned short)65531))) && (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))));
        var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2032357213)) ? (-2032357213) : (((/* implicit */int) var_10)))), (((((/* implicit */int) var_11)) & (((/* implicit */int) var_0))))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_9) <= (((/* implicit */int) arr_8 [i_2] [i_3] [i_4]))))), (((((/* implicit */_Bool) min(((unsigned short)6), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4])) % (((/* implicit */int) var_11))))) : (((unsigned long long int) (short)5103))))));
                    arr_14 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) (_Bool)0);
                    var_16 &= ((/* implicit */signed char) var_11);
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_10))) | (-612678014)));
                    var_18 = ((/* implicit */short) arr_3 [i_4] [i_4]);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
        var_20 = ((((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned char)95)))) ? (((((/* implicit */_Bool) max((5333531457772084290ULL), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_0 [(signed char)14])) : (arr_11 [i_2] [i_2] [i_2])))) : (3482907739693910242ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19)) || (((/* implicit */_Bool) arr_1 [i_2])))))));
    }
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            arr_21 [i_5] [i_5] [i_6] = ((int) min((((/* implicit */int) (signed char)-84)), (4194302)));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_6] [i_5]))))))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                var_22 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)10736)));
                arr_24 [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38640))))) ? (((/* implicit */int) (signed char)64)) : (min((((/* implicit */int) (unsigned short)65530)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) var_2))))))));
            }
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5])) ? (((unsigned long long int) (unsigned short)65528)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))) >= (((((/* implicit */unsigned long long int) ((arr_4 [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5])))))) - (max((5861324391165982353ULL), (((/* implicit */unsigned long long int) arr_12 [i_5]))))))));
    }
    var_25 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-7942)))) : (((/* implicit */int) ((unsigned short) 18320203972734035463ULL))))));
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        for (short i_9 = 2; i_9 < 23; i_9 += 2) 
        {
            {
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((short) (unsigned short)25261)))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_8])) || (((/* implicit */_Bool) (unsigned char)6))))) >> (((max((arr_27 [i_8]), (((/* implicit */int) arr_1 [i_8])))) + (23720)))))) ? (((/* implicit */int) ((unsigned short) max((var_5), (((/* implicit */unsigned int) (unsigned short)65507)))))) : (((((/* implicit */_Bool) arr_26 [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) arr_26 [i_9 - 2] [i_9 - 2])) : (((/* implicit */int) (unsigned short)8))))));
                arr_31 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_8])) : (min((arr_28 [i_9]), (((/* implicit */int) (short)265))))));
            }
        } 
    } 
}
