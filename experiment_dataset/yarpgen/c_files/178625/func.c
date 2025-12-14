/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178625
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
    var_18 = ((/* implicit */_Bool) (((((~(var_11))) < (((/* implicit */int) ((var_4) <= (var_4)))))) ? (max((((/* implicit */int) var_10)), (((var_3) ? (var_12) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) (short)-7403))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (2042974365)))))) >= (((((/* implicit */_Bool) 2588961836U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (159299183U))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (min((((/* implicit */long long int) (-(((int) 4135668113U))))), ((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) (+(arr_1 [i_0] [i_0])))) : (arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) & (((long long int) arr_1 [i_0] [i_0])))) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_1]))));
        arr_8 [(unsigned short)0] |= ((int) ((arr_1 [i_1] [i_1]) < (arr_1 [i_1] [12ULL])));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_11 [(unsigned char)0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)32)), (arr_9 [i_2])))) && ((!(((/* implicit */_Bool) arr_9 [i_2])))))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_9 [i_2]), (((/* implicit */unsigned short) var_17))))) + (((/* implicit */int) var_10)))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            var_21 = ((/* implicit */long long int) min((2588961836U), (((/* implicit */unsigned int) (_Bool)1))));
            arr_14 [i_3] [i_2] [i_3] = ((/* implicit */long long int) arr_9 [i_3]);
            var_22 = (((+((~(((/* implicit */int) arr_9 [i_2])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_2] [i_2] [i_3]), (arr_12 [i_3] [i_3] [i_3]))))))));
        }
        arr_15 [(signed char)7] [(signed char)7] = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 0U))))) % (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_2])))))));
    }
}
