/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129311
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
    var_18 = ((/* implicit */short) 21951812U);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) arr_5 [i_0] [i_0] [i_0]));
            /* LoopNest 3 */
            for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (signed char i_4 = 4; i_4 < 16; i_4 += 1) 
                    {
                        {
                            arr_14 [i_3] = min((((/* implicit */unsigned short) ((signed char) (short)6700))), (min(((unsigned short)47280), (((/* implicit */unsigned short) (short)6700)))));
                            arr_15 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -1236762436510635053LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (1236762436510635083LL))))) || (((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 + 2] [i_2] [i_3]))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */long long int) min((var_19), ((~(1236762436510635048LL)))));
            var_20 -= ((/* implicit */signed char) var_10);
            arr_16 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1236762436510635053LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) (signed char)-25)), (arr_10 [i_0] [(short)14] [i_0] [(short)15] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) ((-6842390172320453316LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] [i_8 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_8 - 1])) ? (((/* implicit */long long int) arr_23 [i_0] [i_6] [i_8 + 1])) : (arr_18 [i_8 - 1])));
                            arr_28 [i_6] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)29560))));
                            var_21 += ((/* implicit */signed char) (~(arr_13 [i_0] [i_5] [i_6] [i_5] [i_8])));
                            var_22 += ((/* implicit */unsigned short) (~(arr_13 [i_0] [i_5] [i_0] [i_8 - 1] [i_8])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 2; i_11 < 15; i_11 += 2) 
                        {
                            arr_39 [i_11 + 2] [i_11] [3ULL] [i_9] [i_5] [3ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-47))))) ? (((/* implicit */unsigned long long int) -49072809876225230LL)) : ((~(17520838762066764539ULL)))));
                            var_23 ^= ((/* implicit */short) ((((((/* implicit */_Bool) -8863769540370364762LL)) ? (((/* implicit */int) (short)29935)) : (((/* implicit */int) (signed char)-10)))) << (((((/* implicit */int) var_7)) - (116)))));
                        }
                        arr_40 [i_0] [i_0] [i_5] [i_9] [i_10] [i_10] = ((/* implicit */short) 1236762436510635078LL);
                        var_24 = ((/* implicit */signed char) ((long long int) (short)25314));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) arr_24 [i_5] [i_9]))));
                    }
                } 
            } 
        }
        arr_41 [i_0] = ((/* implicit */short) (signed char)-20);
    }
}
