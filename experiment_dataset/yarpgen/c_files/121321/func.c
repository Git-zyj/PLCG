/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121321
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) (unsigned char)37);
                    arr_11 [i_1] = ((/* implicit */_Bool) max((arr_9 [i_0] [i_1]), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((113591615800566388ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32608))))))) | (arr_5 [i_0])))));
                    arr_12 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min(((short)32608), (((/* implicit */short) (signed char)-61))))), (var_3)))), (((((/* implicit */_Bool) arr_1 [i_2 + 3])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 7; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                {
                    arr_21 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((-2471962716583541111LL) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) var_7)))) : (((((/* implicit */long long int) ((/* implicit */int) max(((short)15221), ((short)32607))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_4] [i_3]))) + (arr_17 [i_3] [i_4] [i_4])))))));
                    arr_22 [i_3] [i_3] [i_4] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) 2027990621)) ? (((/* implicit */int) (short)23565)) : (798609140)));
                    arr_23 [8ULL] = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_5]))))) ? (arr_19 [(short)6] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_15 [8])))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 + 3])) ? (((arr_17 [i_3] [i_4] [i_3]) >> (((-75103954989590323LL) + (75103954989590338LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            {
                arr_29 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_28 [i_7] [(signed char)19]);
                arr_30 [i_6] [i_6] [i_7] = var_17;
                arr_31 [i_6] [i_6] [i_6] = ((unsigned short) ((unsigned char) ((6280322929463151106ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56694))))));
                arr_32 [i_6] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_28 [i_6] [i_7])) & (arr_26 [i_7]))));
                arr_33 [i_6] [(short)7] |= ((/* implicit */unsigned short) arr_28 [i_6] [i_7]);
            }
        } 
    } 
}
