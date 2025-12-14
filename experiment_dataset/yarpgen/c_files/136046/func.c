/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136046
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) ((short) arr_0 [2]))))));
        arr_4 [i_0] [0ULL] = ((/* implicit */unsigned short) ((unsigned char) ((signed char) arr_1 [i_0 + 1])));
        arr_5 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-188)) ? (((/* implicit */unsigned int) -1886011920)) : (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-20)) + (((/* implicit */int) (unsigned short)21839)))))));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            arr_10 [i_1] [15] [i_1 - 1] = ((/* implicit */int) arr_8 [1ULL] [i_1] [i_2]);
            arr_11 [i_1] [13U] [i_1] = ((/* implicit */_Bool) ((short) arr_6 [i_2 - 2]));
            arr_12 [i_1 + 1] [(signed char)10] [i_1 - 1] = ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_1] [i_2 - 2])) : (((/* implicit */int) arr_9 [i_2] [i_2 + 4])));
        }
        /* vectorizable */
        for (unsigned char i_3 = 3; i_3 < 14; i_3 += 2) 
        {
            arr_17 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20844)) || (((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_1 - 2])))))));
            arr_18 [i_3] [5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_3 - 1]))));
        }
        var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_13 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_1] [(unsigned char)6])))))))) ? (((/* implicit */int) max(((((_Bool)1) && (((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])))), ((!(((/* implicit */_Bool) arr_6 [(unsigned short)5]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 9223372036854775807LL))) || (((/* implicit */_Bool) (signed char)-123)))))));
    }
    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) 0ULL));
    var_13 -= ((/* implicit */unsigned char) (((+(((var_6) >> (((((/* implicit */int) var_0)) - (159))))))) <= (((3861905384717182904ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9221)))))));
    var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))) ? (min((378375117U), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 995462437)))))) : (var_8)));
}
