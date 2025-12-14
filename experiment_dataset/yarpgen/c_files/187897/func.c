/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187897
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) max((var_8), (((/* implicit */short) (unsigned char)255)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)17)) << (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 3121862982U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (534212013U)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (short)-19142))));
        arr_2 [i_0] = var_10;
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_9 [(unsigned char)20] [i_1] = ((/* implicit */unsigned long long int) ((17064425083103077796ULL) <= (((/* implicit */unsigned long long int) 9223372036854775789LL))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                for (unsigned int i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19139)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_6 [i_1])) && ((_Bool)1))))))) : (arr_13 [1U] [i_2] [1U] [i_3 + 3] [i_4] [i_2])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = arr_5 [i_1];
                        var_15 = ((/* implicit */int) ((unsigned short) min((((/* implicit */signed char) ((1382318990606473806ULL) > (((/* implicit */unsigned long long int) 1700032221U))))), (((signed char) var_8)))));
                        arr_16 [i_1] [(unsigned short)3] [i_3] [i_4 - 3] [i_1] [i_3 - 2] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((var_6) == (((/* implicit */unsigned int) 1352150863))))), (max((17064425083103077813ULL), (18446744073709551610ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)34)))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_3 [i_1])))), (((18446744073709551591ULL) >= (((/* implicit */unsigned long long int) -6839879224581407436LL))))));
            var_17 = ((/* implicit */unsigned int) (signed char)-123);
            arr_17 [(unsigned short)19] [(unsigned short)19] [i_1] = ((/* implicit */unsigned char) ((((-8286993955130660895LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)653))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_18 += ((/* implicit */unsigned long long int) var_2);
            arr_21 [i_5] [i_1] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((min((var_0), (arr_11 [i_1] [i_5]))), ((unsigned short)19511)))), (max((((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) : (arr_18 [i_5]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)64883)))))))));
            var_19 = ((/* implicit */short) (-(9223372036854775807LL)));
        }
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_20 = ((/* implicit */long long int) 4294967295U);
        var_21 = ((/* implicit */signed char) ((unsigned int) arr_7 [i_6] [i_6]));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    arr_30 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((17064425083103077804ULL), (((/* implicit */unsigned long long int) (signed char)-124)))))));
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_7 [i_6] [i_7]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)208)), ((short)15104)))))));
    }
}
