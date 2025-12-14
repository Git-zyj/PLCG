/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171791
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [(unsigned short)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(signed char)16]))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) (+(max((min((((/* implicit */long long int) (unsigned short)126)), (var_12))), (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
            arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (var_3))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) var_14)) : (var_7))) << (((var_2) - (2758110797U)))))) : (max((((/* implicit */long long int) arr_1 [i_0] [i_1 - 1])), (((long long int) arr_0 [i_0] [3]))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            arr_12 [i_0] [i_2] = var_1;
            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_4 [i_0] [i_2] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)12]))))), (((long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_10)) <= (var_0)));
            arr_15 [(signed char)2] = 2111969016;
            arr_16 [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) arr_8 [i_2 + 2]);
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_21 [i_0] [(signed char)17] = (~(((((/* implicit */_Bool) ((arr_9 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)83))) : (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) arr_9 [16] [i_3]))) : (var_14))));
            arr_22 [i_3] = min(((~(max((var_0), (((/* implicit */long long int) arr_2 [i_0])))))), (((/* implicit */long long int) (unsigned char)15)));
        }
    }
    for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        arr_25 [i_4] [i_4] = ((/* implicit */int) ((signed char) max((arr_23 [i_4 + 2]), (arr_23 [i_4]))));
        arr_26 [(_Bool)1] = ((/* implicit */unsigned int) (signed char)24);
        arr_27 [0U] [i_4] |= ((/* implicit */int) ((unsigned short) ((int) ((((/* implicit */_Bool) arr_24 [i_4])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
    var_15 = ((/* implicit */_Bool) var_10);
    var_16 |= ((/* implicit */int) var_2);
}
