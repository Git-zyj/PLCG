/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127418
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((895377473616103373LL) / (((/* implicit */long long int) -1577837799)))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) (unsigned char)50)), (var_7))) : (min((var_5), (((/* implicit */unsigned long long int) -1788289692))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)159)), (var_5)))) && (((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned short) (+(min((max((294580478514581128ULL), (((/* implicit */unsigned long long int) 3755431755734054556LL)))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]))))));
                    var_13 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 + 1])) : (var_6))) >> (((9426935849531990262ULL) - (9426935849531990211ULL)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                arr_18 [i_3] [i_4] [i_4] |= ((/* implicit */unsigned long long int) var_9);
                arr_19 [(unsigned char)16] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19321))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (0ULL) : (((/* implicit */unsigned long long int) 1073610752))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))));
            }
            arr_20 [i_3 - 2] [i_4] |= ((/* implicit */unsigned long long int) (short)8575);
        }
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_14 &= ((/* implicit */unsigned char) arr_10 [i_3]);
            arr_24 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)141)) ? (7281781088302823083ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
            arr_25 [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_3]), (((/* implicit */long long int) (unsigned short)46411)))))))), (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) / (14004485154154056336ULL))))));
        }
        arr_26 [i_3] [(unsigned char)0] |= ((/* implicit */unsigned char) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_5 [i_3] [i_3 + 2] [2ULL]))))) != (((/* implicit */int) (unsigned char)246))));
    }
    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 1) 
    {
        arr_30 [i_7] = ((/* implicit */unsigned char) (+((~(1095364780940576071LL)))));
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_7 + 1] [i_7 + 1]), (arr_0 [i_7 + 1] [i_7 + 1])))) ? (((arr_0 [i_7 + 1] [i_7]) / (arr_0 [i_7 + 1] [i_7]))) : (arr_0 [i_7 + 1] [5ULL])));
        arr_32 [i_7] [i_7] = ((/* implicit */unsigned char) ((var_4) - (((var_6) << ((((+(((/* implicit */int) (unsigned short)5844)))) - (5810)))))));
    }
    var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
}
