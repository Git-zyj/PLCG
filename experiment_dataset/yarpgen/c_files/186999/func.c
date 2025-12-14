/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186999
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
    var_18 = var_5;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(min((arr_1 [i_0] [i_0]), (arr_1 [(unsigned char)8] [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_19 ^= ((/* implicit */int) max((max((min((((/* implicit */unsigned long long int) var_2)), (9122296635665968496ULL))), (min((((/* implicit */unsigned long long int) var_8)), (arr_5 [i_1]))))), (max((var_3), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_1 [i_1 + 3] [i_0])))));
            var_20 = ((/* implicit */short) var_8);
            var_21 = ((/* implicit */unsigned short) max(((-(min((arr_0 [i_0] [i_0]), (9324447438043583120ULL))))), (16577814887899165116ULL)));
            var_22 = ((/* implicit */unsigned int) var_3);
        }
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0]);
            var_24 = ((/* implicit */int) var_16);
            arr_11 [i_0] [i_2 - 1] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
            var_25 = ((/* implicit */unsigned char) var_1);
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) arr_9 [i_0] [i_2])) - (2690)))))) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2])) : ((+(((/* implicit */int) (_Bool)1))))))) ? (var_4) : ((~(9122296635665968477ULL)))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] &= ((/* implicit */unsigned int) 9324447438043583119ULL);
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9122296635665968494ULL)) ? (2571294964816949866ULL) : (9324447438043583117ULL)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        arr_18 [i_4] [(unsigned short)5] = ((/* implicit */unsigned short) var_13);
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) var_14);
        var_28 = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) 530025135)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : ((-(9324447438043583112ULL))))), ((-(9324447438043583132ULL)))));
    }
    var_29 = ((/* implicit */int) var_4);
}
