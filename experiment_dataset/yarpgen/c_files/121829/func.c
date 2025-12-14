/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121829
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
    var_12 = ((/* implicit */_Bool) var_1);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 139431946)) && (((/* implicit */_Bool) -344946761))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)16383)));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned long long int) min((-953995452), (((/* implicit */int) (_Bool)1))));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) 344946761))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_10 [i_2] = ((/* implicit */long long int) (!(((var_5) > (((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))));
            arr_11 [4LL] [i_2] [i_2] &= ((/* implicit */signed char) arr_9 [i_2]);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_16 ^= (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)0)));
            var_17 -= ((/* implicit */unsigned long long int) (unsigned short)40372);
            arr_15 [(unsigned char)7] = var_2;
            arr_16 [0ULL] [i_3] = ((/* implicit */unsigned char) arr_4 [6LL]);
        }
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(min((922532465U), (((/* implicit */unsigned int) arr_4 [i_4]))))))) % (var_2)));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_12 [4ULL])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))) * (arr_0 [i_4]))))) < (((((/* implicit */_Bool) (unsigned char)225)) ? ((+(arr_13 [i_4] [(short)10]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_4])))))))));
        arr_21 [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (signed char)0))));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) (unsigned char)146)) : (var_5)))) ? (arr_13 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)225)))))), (((/* implicit */unsigned long long int) min((922532470U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16383)))))))));
        var_18 *= ((/* implicit */short) 1328660619U);
    }
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            arr_30 [i_6] [i_6] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_6] [i_7] [i_7])) * (((/* implicit */int) arr_29 [i_6] [i_6] [i_6]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (-1717586851) : (((/* implicit */int) arr_25 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) (unsigned char)112)) ? (var_4) : (12176407621321940464ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-3)))))))));
            arr_31 [i_6] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [17U] [i_6] [i_6])) / (((/* implicit */int) arr_25 [18ULL] [i_7]))))) ? (((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_7] [i_7]))) : (-1989548994863168574LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((signed char) arr_27 [i_6]))) ? (((((/* implicit */_Bool) arr_29 [i_6] [(unsigned short)15] [i_6])) ? (var_4) : (((/* implicit */unsigned long long int) arr_26 [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18785)))))));
        }
        arr_32 [i_6] |= ((/* implicit */unsigned int) (((((+(((/* implicit */int) arr_29 [i_6] [(short)6] [(short)6])))) <= (((/* implicit */int) arr_29 [i_6] [i_6] [i_6])))) ? (min(((-(((/* implicit */int) arr_25 [i_6] [i_6])))), (((/* implicit */int) arr_25 [3] [i_6])))) : (((int) ((unsigned long long int) 4294967295U)))));
    }
}
