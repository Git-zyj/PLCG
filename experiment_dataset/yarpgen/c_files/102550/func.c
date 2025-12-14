/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102550
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(10531394141544499457ULL)))) && (((_Bool) arr_1 [(signed char)6] [(signed char)6])))))));
        var_20 = ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned short)29740)))) ? (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) 1971137206))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_1 [(unsigned short)10] [i_1]))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_12 [i_1 + 1] [i_1 + 1] [i_4] = ((/* implicit */unsigned int) arr_2 [i_4]);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 13220592145208311873ULL)) ? (-2147483645) : (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (short)32767))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) min(((-(30ULL))), (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
    }
    for (long long int i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((int) arr_10 [i_5 + 1] [i_6 + 1] [i_8] [i_8 + 1]));
                        var_25 |= ((/* implicit */short) ((arr_10 [i_8 - 1] [i_7] [i_6] [i_5 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(short)0])))));
                        var_26 = ((/* implicit */unsigned char) arr_10 [i_5 + 1] [i_6 + 2] [i_7] [i_6 + 2]);
                    }
                } 
            } 
            arr_26 [i_6] = ((/* implicit */unsigned char) (signed char)-59);
            arr_27 [i_6] = ((/* implicit */signed char) 279275953455104ULL);
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29740))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-59)))) : (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_5]) : (((/* implicit */long long int) 93627269U))))));
        }
        var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_5 - 1]))));
        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4201340028U) + (((/* implicit */unsigned int) 1133650116))))) ? (((/* implicit */int) (short)21646)) : (((/* implicit */int) (signed char)-89))));
        arr_28 [i_5] = ((11680573411008697206ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-(308818687))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
}
