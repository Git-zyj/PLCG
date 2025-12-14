/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104089
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0])) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [16U]))) : (3150365637U)))))) ? (max((((((/* implicit */int) arr_1 [i_0])) / (var_5))), (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((unsigned int) (-(arr_5 [i_1]))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_2))))))))));
        arr_8 [(signed char)5] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned int) var_5))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [(_Bool)1] |= ((/* implicit */long long int) (short)(-32767 - 1));
        /* LoopNest 3 */
        for (unsigned char i_3 = 4; i_3 < 8; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_14 = ((/* implicit */short) (((!(arr_12 [i_2]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (0ULL)))) : (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_10 [9] [i_3])) : (((/* implicit */int) var_7))))));
                        arr_19 [i_2] [(unsigned short)9] [i_4] [i_5] [i_3] [i_2] = ((/* implicit */unsigned short) arr_15 [i_5] [i_4]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            arr_24 [i_2] [i_2] = ((long long int) arr_16 [i_6] [i_6] [i_6 + 1]);
            arr_25 [i_2] [i_6] = ((/* implicit */short) ((long long int) arr_18 [i_6 + 1] [i_2] [i_2] [i_6 - 1]));
        }
        for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
            arr_29 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) var_11));
        }
    }
    var_16 = ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_8)))) << (((((/* implicit */int) ((unsigned short) var_1))) - (65441)))))) >= (max((((((/* implicit */_Bool) 3625817564U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((short) (short)-3556))))));
}
