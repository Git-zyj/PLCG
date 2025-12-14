/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15008
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [6ULL] [i_1 - 1]))) : (((arr_2 [(_Bool)1] [(_Bool)1] [i_1 + 1]) * (arr_2 [(signed char)2] [i_0] [i_1 - 1])))))));
                var_14 = (~(((/* implicit */int) arr_5 [i_0 + 3] [i_0] [i_0 + 3])));
                arr_6 [(signed char)16] [(signed char)16] |= ((/* implicit */signed char) arr_5 [i_0] [(signed char)10] [i_1]);
                arr_7 [i_0] [i_0] = (-(arr_2 [i_0] [i_1] [i_0]));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((unsigned char) max(((unsigned char)11), (((/* implicit */unsigned char) arr_9 [(unsigned short)4])))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (unsigned short)41808)) : (((/* implicit */int) arr_9 [i_2]))))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_2])), ((unsigned short)23730)))))) : (((/* implicit */int) arr_9 [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_17 = arr_1 [i_5];
                    var_18 |= ((unsigned char) ((((/* implicit */_Bool) ((signed char) arr_13 [i_3] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5]))) : (arr_13 [i_4] [i_3])));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) arr_10 [i_3] [i_3]);
        arr_18 [i_3] = ((/* implicit */unsigned char) 425200063950969896LL);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) 17530536712256649544ULL))));
    }
    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_21 [i_6] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_19 [i_6] [(signed char)2])) ? (arr_20 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))));
        var_21 = ((/* implicit */unsigned long long int) var_6);
        arr_22 [i_6] = ((/* implicit */unsigned short) max((((unsigned long long int) 17530536712256649544ULL)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)23731)))))));
        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_6]))) | (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (arr_20 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))))))));
    }
}
