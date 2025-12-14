/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163415
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)22546)) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))));
        arr_3 [i_0] [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_8 [i_1] [6] = ((/* implicit */long long int) var_13);
        arr_9 [i_1] = ((/* implicit */unsigned int) ((signed char) var_12));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) (short)14489);
        arr_14 [(short)5] = ((/* implicit */signed char) var_1);
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_17 [(unsigned char)8] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)16] [i_3])) ? (((/* implicit */unsigned int) (~((((_Bool)0) ? (((/* implicit */int) (short)29046)) : (((/* implicit */int) arr_10 [i_3] [i_2]))))))) : ((((_Bool)1) ? (arr_11 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
            arr_18 [(unsigned char)11] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */short) (unsigned char)226))))) ? (((/* implicit */int) max((arr_12 [i_3]), (((/* implicit */unsigned short) (signed char)-1))))) : (((/* implicit */int) (_Bool)0)))) >> (((((((/* implicit */_Bool) arr_16 [(signed char)17] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18476)) ? (((/* implicit */int) (short)-14489)) : (((/* implicit */int) arr_6 [i_2]))))) : (((long long int) -1962960615)))) + (14511LL)))));
            arr_19 [i_2] [i_2] [i_2] = ((((((/* implicit */_Bool) arr_7 [i_2])) ? (2644842712U) : (arr_7 [(_Bool)1]))) ^ (max((((/* implicit */unsigned int) arr_5 [i_2])), (2644842689U))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 1650124607U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28715)) ? (2644842689U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_11 [i_2])) : (9223372036854775807LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)226)), (4106690285U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (short)26342)))))));
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(min((9223372036854775807LL), (min((((/* implicit */long long int) 1328097074U)), (3530745419492805894LL))))))))));
            var_17 += min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)2584)), (15339230711871747400ULL)))) ? (arr_7 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))))), (min((((/* implicit */unsigned int) ((signed char) 15012341395822495669ULL))), (((((/* implicit */_Bool) (short)-29341)) ? (((/* implicit */unsigned int) var_14)) : (var_6))))));
            var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3566819075U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)29341)))), (((/* implicit */int) max(((unsigned short)44454), (((/* implicit */unsigned short) (short)23250)))))))) ? (((((/* implicit */_Bool) (unsigned short)59877)) ? (1962960614) : (((/* implicit */int) (signed char)1)))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [7ULL])) : (((/* implicit */int) (short)14489))))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
        {
            var_19 += ((/* implicit */unsigned short) max((min((1593704630U), (3049949124U))), (566384160U)));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6471))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [15U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)32739))))), (2783588611U)))))));
            arr_24 [i_2] [(_Bool)1] = ((/* implicit */int) 4294967280U);
        }
    }
}
