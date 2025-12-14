/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177113
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65535))));
        var_12 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned long long int) ((short) (short)-10256))), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_4)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (-(((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_11))))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
        var_15 = max((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (8763038269498788289ULL) : (arr_4 [i_1] [i_1]))), (((((/* implicit */_Bool) (signed char)114)) ? (arr_4 [15LL] [i_1]) : (arr_4 [i_1] [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)2047)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((arr_8 [i_2]) >= (((((/* implicit */_Bool) arr_4 [4] [4])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (short)2047)) ^ (459459196))))));
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                arr_22 [12ULL] = ((/* implicit */_Bool) (-(1234861664)));
                var_17 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)102)), (-1LL)));
            }
            var_18 = ((/* implicit */short) var_1);
        }
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
        {
            var_19 -= ((/* implicit */_Bool) (-(((int) arr_12 [i_3] [i_6]))));
            arr_25 [i_3] [13ULL] [i_3] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (_Bool)1))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            arr_30 [i_3] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((-(arr_28 [i_3] [(_Bool)1] [i_3])))))) * (9223372036854775807ULL)));
            arr_31 [i_3] = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned short)65521))))), (max((((/* implicit */unsigned long long int) arr_9 [i_3])), (var_2))))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))));
        }
    }
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_8))));
}
