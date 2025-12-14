/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167819
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_0;
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_1]))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_9)))))))));
        var_19 = ((/* implicit */int) (signed char)-29);
        arr_9 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)29))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-23884))));
                arr_17 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) (signed char)-29);
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((((((((/* implicit */int) (signed char)-29)) > (((/* implicit */int) var_9)))) ? (((/* implicit */int) var_3)) : (var_11))) - (1891022364)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4])) + (((/* implicit */int) (unsigned short)44558)))))))))))));
        /* LoopSeq 2 */
        for (signed char i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            arr_22 [10ULL] [i_5] [i_5] = ((/* implicit */unsigned char) ((max((((int) arr_21 [i_5] [i_5])), (var_11))) / (((/* implicit */int) var_5))));
            var_23 = ((/* implicit */unsigned long long int) ((short) arr_18 [i_5]));
            arr_23 [i_5] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (signed char)29)))) | (((/* implicit */int) var_3)))) * (((/* implicit */int) ((((/* implicit */_Bool) ((arr_18 [10]) / (((/* implicit */int) arr_20 [i_4] [i_4] [3]))))) && (((/* implicit */_Bool) arr_20 [i_4] [i_5 + 3] [i_5])))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((unsigned char) arr_19 [i_4]))));
                arr_28 [4U] [i_7] = ((/* implicit */unsigned short) var_15);
            }
            arr_29 [i_4] [(unsigned short)14] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */int) (short)-32754)) : (((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) var_4)))));
        }
        arr_30 [i_4] [(signed char)0] |= ((/* implicit */_Bool) ((unsigned char) min(((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1)))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (short)-5158))))))));
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_25 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) - (((arr_33 [i_8]) / (((/* implicit */int) max((arr_31 [i_8] [i_8]), (((/* implicit */signed char) (_Bool)1)))))))));
        arr_34 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [3ULL])) ? (((((/* implicit */_Bool) arr_31 [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_31 [i_8] [i_8])) : (((/* implicit */int) (signed char)122)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_8])))))))) / (arr_32 [i_8])));
        var_26 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
        var_27 -= ((/* implicit */signed char) ((unsigned int) (+(4294967277U))));
        arr_35 [i_8] = ((/* implicit */unsigned short) var_16);
    }
}
