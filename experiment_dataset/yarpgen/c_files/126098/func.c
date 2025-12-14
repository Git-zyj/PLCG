/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126098
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)18070)), ((unsigned short)65534)))) | (((/* implicit */int) ((_Bool) -1242429311386864626LL)))));
                var_17 = ((/* implicit */signed char) (unsigned short)1);
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4607182418800017408ULL)))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) arr_6 [i_0] [i_1 - 2]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    var_19 = var_10;
                    arr_16 [(_Bool)1] [i_3] [i_4] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65506)) : (((/* implicit */int) (unsigned short)65507))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */short) arr_1 [(signed char)16]);
        var_21 = ((/* implicit */unsigned int) ((var_12) / (arr_4 [i_5] [i_5] [i_5])));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_23 -= ((/* implicit */signed char) ((arr_9 [i_5 + 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (-2147483637) : (((/* implicit */int) (short)-32765))))) : (9223372036854775807LL)));
    }
    for (short i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */long long int) arr_20 [i_6]);
        arr_23 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32763))))) ? (((int) arr_15 [i_6 + 2])) : ((~(arr_15 [i_6 + 1])))));
        var_24 = ((/* implicit */unsigned char) var_0);
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1])))))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_21 [i_6] [i_6])) : (((/* implicit */int) max((((/* implicit */short) arr_21 [i_6 + 2] [i_6 - 1])), (arr_2 [i_6 - 1] [i_6])))))))));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            for (long long int i_9 = 3; i_9 < 11; i_9 += 3) 
            {
                for (unsigned short i_10 = 1; i_10 < 8; i_10 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-105));
                        arr_34 [i_7] [i_7] [i_9] [i_7] [(unsigned char)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) & (6096536160705271186LL))))));
                        var_28 = ((/* implicit */unsigned long long int) arr_17 [i_7 - 1] [i_7 + 2]);
                        arr_35 [i_7 - 1] [i_7] [i_9] = ((/* implicit */unsigned long long int) (-(-1674668201)));
                    }
                } 
            } 
        } 
        arr_36 [(short)11] = ((/* implicit */unsigned short) arr_13 [i_7] [i_7 + 2] [i_7] [i_7 - 1]);
    }
}
