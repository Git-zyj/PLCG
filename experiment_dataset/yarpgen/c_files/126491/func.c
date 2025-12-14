/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126491
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
    var_16 = (((~(7626439441613139051ULL))) == (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((7135741037291621273ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [15ULL] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((_Bool) (unsigned short)54356))), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) (signed char)-95))));
        arr_3 [i_0] = ((/* implicit */short) 983707021);
        arr_4 [i_0] [2] = ((/* implicit */short) arr_0 [(short)2] [(short)2]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) ((arr_1 [i_1] [i_1]) + (arr_1 [i_1] [i_1]))));
        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)54356))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) (unsigned short)61804)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -669907236)))) : (2063638757706875022ULL)))));
    }
    var_17 = min((max((max((((/* implicit */long long int) var_15)), (var_8))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_10)), (var_15)))))), (((/* implicit */long long int) var_2)));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_14 [i_2] = ((/* implicit */unsigned int) var_8);
        arr_15 [i_2] = ((/* implicit */unsigned int) ((signed char) arr_11 [i_2]));
        arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_11 [i_2])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_13 [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((unsigned int) var_5))))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (var_4) : (((/* implicit */long long int) arr_13 [i_2] [i_2]))))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_20 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(var_8))), (((long long int) arr_7 [14U]))))) ? (16383105316002676594ULL) : (((unsigned long long int) ((16383105316002676594ULL) - (((/* implicit */unsigned long long int) var_11)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            arr_25 [i_4] &= ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_11)) : (var_12))), (((/* implicit */long long int) min((((/* implicit */unsigned int) -978392958)), (arr_13 [i_4] [i_4])))))) << (((var_11) - (529018688U)))));
            arr_26 [i_4] [(unsigned char)16] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned short)54356))))))) ^ ((-(((((/* implicit */_Bool) arr_12 [i_3])) ? (-875712273232475194LL) : (((/* implicit */long long int) arr_21 [i_4]))))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
        {
            arr_29 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_8);
            arr_30 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)47725)) ^ (((/* implicit */int) (short)12136))));
        }
    }
    var_18 = ((/* implicit */short) var_3);
}
