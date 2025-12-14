/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113630
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
    var_13 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = var_4;
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)65))));
        arr_5 [14ULL] = ((/* implicit */signed char) (+(arr_2 [i_0 + 4] [i_0 + 1])));
        arr_6 [(unsigned char)8] [i_0 + 4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (signed char)-126))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)254)) % (var_12)));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_1 [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */signed char) var_10);
        arr_14 [i_2] = ((unsigned long long int) (unsigned short)10169);
        arr_15 [i_2] = ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (unsigned short)58841)) ? (4407031988755316605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_7))));
}
