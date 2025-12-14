/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124476
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)240))))));
                arr_8 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)40573)) : (((/* implicit */int) (unsigned char)179))))) | (((((/* implicit */_Bool) (short)10274)) ? (4618283106002714695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (unsigned char)173))), (arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1])))) : (max((((/* implicit */int) (short)10283)), ((+(((/* implicit */int) (signed char)127))))))));
            }
        } 
    } 
    var_19 |= ((((/* implicit */_Bool) var_12)) ? ((+(max((((/* implicit */int) var_17)), (var_2))))) : (((/* implicit */int) ((unsigned char) min((var_2), (((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */unsigned long long int) ((signed char) max((max((((/* implicit */unsigned long long int) (unsigned short)32704)), (var_7))), (((/* implicit */unsigned long long int) var_3)))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_14 [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32704))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
            arr_15 [2ULL] [2ULL] [2ULL] = ((/* implicit */unsigned int) var_11);
            arr_16 [i_3] [i_3] = (~(((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_3 [i_3]))));
        }
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
        {
            arr_21 [i_2 + 1] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_4]))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    {
                        arr_27 [i_2] = (-(arr_0 [i_5]));
                        arr_28 [i_4] [i_4] [i_4] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_15))))));
                        arr_29 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_12)))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
        {
            arr_32 [i_2] [(unsigned short)11] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_7]))))), (((((/* implicit */_Bool) (+(-1332259717)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [13]))) : (((var_0) & (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2 + 1] [i_2 + 1])))))));
            arr_33 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 0U)) & (18446744073709551615ULL)));
            arr_34 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) (short)-8659)))))));
            arr_35 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((unsigned long long int) max((((/* implicit */unsigned int) arr_24 [i_2] [3ULL])), (1415260306U))))));
            arr_36 [i_2] = max((4294967295U), (17U));
        }
        arr_37 [i_2] &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_20 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) (short)-28317)) : (((/* implicit */int) (unsigned char)34)))) : (((((/* implicit */int) arr_20 [i_2 + 1] [i_2 + 1] [i_2 - 1])) / (((/* implicit */int) (short)19417))))));
        arr_38 [i_2] = ((/* implicit */signed char) (((~(var_7))) > (var_7)));
        arr_39 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 17210869843871849987ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)97)))));
        arr_40 [i_2 + 1] = ((/* implicit */unsigned char) (signed char)97);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_44 [i_8] = max((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_8] [i_8]))))));
        arr_45 [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) ((7664373136330052553LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)113))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (short i_11 = 3; i_11 < 10; i_11 += 2) 
                {
                    {
                        arr_52 [i_11 + 1] [i_9] [i_9] [i_8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-97)))) | (((((/* implicit */int) (unsigned char)130)) & (((/* implicit */int) (signed char)-119)))))))));
                        arr_53 [1] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_26 [i_8] [i_9] [i_8] [i_11 - 2] [i_11 - 2])))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
}
