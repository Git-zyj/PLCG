/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114249
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
    var_14 = ((/* implicit */unsigned short) var_0);
    var_15 |= ((/* implicit */unsigned short) var_12);
    var_16 = ((/* implicit */unsigned long long int) max((min(((-(((/* implicit */int) var_0)))), (((((/* implicit */int) var_2)) + (((/* implicit */int) var_0)))))), (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 - 2] [i_0 + 3] = ((/* implicit */signed char) arr_2 [i_0 - 2]);
        var_17 -= ((/* implicit */unsigned int) (((~(max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 3])), (1ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (arr_2 [i_1 + 1])));
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
            var_20 -= ((/* implicit */int) (short)4232);
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */short) var_10);
        }
        var_21 = ((/* implicit */unsigned short) var_9);
    }
    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_12 [(signed char)8] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_5 [i_3])), (arr_11 [i_3])));
        var_22 = ((/* implicit */_Bool) max((((max((var_9), (((/* implicit */long long int) arr_6 [i_3])))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_3] [i_3 - 3])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3 - 3])) / (((/* implicit */int) (short)1130)))))));
        arr_13 [i_3] = ((((/* implicit */_Bool) (short)-1131)) ? (15090614765674085844ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4666))));
        arr_14 [i_3] = ((/* implicit */short) max((((((((/* implicit */int) var_7)) | (((/* implicit */int) var_3)))) ^ (((/* implicit */int) var_7)))), ((~((~(((/* implicit */int) (short)4666))))))));
        arr_15 [i_3] = ((/* implicit */short) var_5);
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_23 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))) * (arr_8 [i_4] [i_4]))) % (((/* implicit */unsigned long long int) arr_11 [9]))));
        arr_18 [i_4] = ((/* implicit */signed char) arr_11 [i_4]);
        arr_19 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)50356), (arr_10 [i_4] [i_4]))))));
        arr_20 [i_4] = ((/* implicit */signed char) min(((unsigned short)62704), (((/* implicit */unsigned short) (_Bool)0))));
    }
}
