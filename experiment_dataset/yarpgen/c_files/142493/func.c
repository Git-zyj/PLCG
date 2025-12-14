/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142493
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_14 += ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_12)) & (((/* implicit */int) (short)128)))) : (arr_0 [i_0]));
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_15 = ((unsigned long long int) var_6);
                var_16 = ((/* implicit */long long int) var_11);
            }
        }
    }
    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        var_17 = ((/* implicit */long long int) var_1);
        arr_13 [i_3] [i_3 - 2] = ((((/* implicit */_Bool) arr_9 [(signed char)7] [(signed char)7] [i_3] [i_3 + 1])) ? (((long long int) var_11)) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) (short)113)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 - 2]))))));
    }
    /* LoopSeq 3 */
    for (int i_4 = 1; i_4 < 7; i_4 += 4) 
    {
        arr_16 [(signed char)2] &= ((/* implicit */signed char) ((unsigned int) var_11));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_19 [i_4 - 1] [i_4 - 1] = 281457796841472LL;
            arr_20 [i_4] [i_5] [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) ? (arr_15 [i_4] [i_4]) : (((/* implicit */unsigned long long int) (~(var_4))))));
        }
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned long long int) (+(var_5)))))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (6576282110429348752ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (var_7)))))));
        arr_24 [i_6] = ((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_6] [i_6])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) (_Bool)1))))));
        arr_25 [5] = ((/* implicit */unsigned int) (unsigned short)65535);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) 1521789847)) | (281457796841455LL))))));
        arr_29 [(unsigned short)8] |= ((((_Bool) (short)29288)) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_0))))) : (((/* implicit */long long int) ((int) 1073741823U))));
    }
    var_20 = ((/* implicit */_Bool) var_9);
    var_21 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -281457796841490LL)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (_Bool)1))))))) ? ((~(((/* implicit */int) ((signed char) 847279387))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))));
}
