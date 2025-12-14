/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116558
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_6)));
        arr_3 [i_0] = arr_1 [i_0];
        var_11 = ((/* implicit */unsigned char) ((unsigned short) var_9));
        arr_4 [(signed char)13] [(signed char)13] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)26)))) >> (((((/* implicit */int) arr_1 [i_0])) - (111)))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((unsigned int) (_Bool)1))));
            var_12 |= ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) (_Bool)1))));
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_1 [i_2]))));
            arr_13 [i_0] [i_2] [i_2] |= ((/* implicit */unsigned short) ((arr_0 [i_2] [i_0]) + (((/* implicit */int) var_4))));
            var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_0))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_19 [i_0] [i_0] &= ((/* implicit */unsigned char) arr_17 [i_0]);
            }
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned long long int) var_3)))));
                var_16 ^= ((/* implicit */short) (~(3069754594U)));
            }
            var_17 &= (+((+(((/* implicit */int) var_9)))));
            arr_22 [i_0] |= ((/* implicit */int) ((short) var_7));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53544)) ? (((/* implicit */int) ((unsigned short) var_2))) : ((~(var_6)))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_9 [21] [i_6])))) ? (max((((/* implicit */int) var_8)), (arr_0 [i_6] [i_6]))) : (((/* implicit */int) ((unsigned char) var_1))))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-1060724919)))) && (((/* implicit */_Bool) var_4))))))))));
    }
    var_19 += ((/* implicit */signed char) (unsigned short)32514);
    var_20 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)53544)) : (((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))))), ((~(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (signed char)50)))))))));
}
