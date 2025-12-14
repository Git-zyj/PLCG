/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158224
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [10LL] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 3294728882U))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_2]))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_2])) == ((~(arr_1 [4] [(short)8]))))))));
                    arr_10 [12ULL] [12ULL] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_2]))) : (arr_6 [i_0] [i_0] [(unsigned char)3] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58165)) || (((/* implicit */_Bool) arr_8 [i_0]))))) : (((/* implicit */int) (signed char)2))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [4] [i_0])) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_2 [4] [12ULL]))))))) : (((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [3ULL])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(short)1])) : (((/* implicit */int) (unsigned short)42854)))) >> (((/* implicit */int) (!(var_1))))))));
                    arr_11 [i_0] [i_0] [(unsigned char)3] [i_2] = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((int) 9223372036854775807LL)) : (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) arr_3 [i_0] [i_2])))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_2]))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((unsigned long long int) var_8))))) ? ((-(((((/* implicit */_Bool) 5128144494462590904ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [0LL] [i_0]))))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
        arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) 6871101040741790035LL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [6LL])))))));
    }
    var_14 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) - (var_13)));
}
