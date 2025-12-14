/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180769
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
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0] |= 8ULL;
        var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9223372036854775807LL) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (145)))))) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((int) var_3))));
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_12 = (-(min((arr_5 [i_1]), (((/* implicit */int) arr_6 [i_1])))));
        var_13 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((((arr_5 [i_1]) + (2147483647))) << (((13996572301845279738ULL) - (13996572301845279738ULL))))) >> (((arr_5 [i_1]) + (925868734)))))) : (((/* implicit */signed char) ((((((arr_5 [i_1]) + (2147483647))) << (((13996572301845279738ULL) - (13996572301845279738ULL))))) >> (((((arr_5 [i_1]) + (925868734))) + (127364590))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) var_10);
                    var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 5992009606547658922LL))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (short i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                {
                    arr_22 [10ULL] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_12 [i_2 + 1] [16ULL] [i_6]), (((/* implicit */int) var_5))))))))));
                    /* LoopSeq 1 */
                    for (short i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((11459988138619274484ULL), (((/* implicit */unsigned long long int) (signed char)-113))))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_5])), (9003739106563065597ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7]))) & (10880097814805018933ULL)))))) ? (7566646258904532685ULL) : (min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (var_6)))), ((~(2569397711299569095ULL))))))))));
                        arr_26 [i_2] [i_5] [i_2] [i_7 - 1] [i_5] &= ((/* implicit */signed char) ((int) arr_10 [i_6]));
                        arr_27 [i_7] [i_7] [i_5] [(short)17] [(short)7] = arr_15 [i_2] [(short)9] [i_6 + 2];
                    }
                    var_17 = ((/* implicit */signed char) ((int) (+(arr_12 [i_2 + 1] [i_2] [i_6 - 2]))));
                    arr_28 [i_2] [i_2] [10] [7] |= ((/* implicit */long long int) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_11 [i_2] [i_2] [i_2 + 1]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        var_18 = arr_24 [i_8];
        var_19 |= ((/* implicit */unsigned long long int) arr_20 [i_8] [i_8] [i_8]);
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    arr_37 [i_8] [i_10] [i_8] = ((/* implicit */int) arr_25 [i_9] [i_9 + 1] [i_8] [(short)18]);
                    arr_38 [8ULL] [i_8] [(unsigned short)3] [2] = ((/* implicit */int) ((unsigned long long int) 9443004967146486019ULL));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (-(((long long int) 801064805))));
    }
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) ((var_7) == (((/* implicit */int) var_9)))))))), (12898085600074407649ULL)));
    var_22 = ((/* implicit */unsigned short) ((5548658473635143966ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
