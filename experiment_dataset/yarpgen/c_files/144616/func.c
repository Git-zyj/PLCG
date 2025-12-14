/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144616
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)62)) ? (var_4) : (var_13)))) ? (((int) (((_Bool)1) && (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) >> (((var_6) - (337502489U)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) (+(((var_9) + (arr_1 [(short)6])))));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_9))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned char) (signed char)-1);
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((max(((unsigned short)60441), (var_8))), (((/* implicit */unsigned short) (_Bool)1))))), (((unsigned long long int) (+(((/* implicit */int) (signed char)-62)))))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)84);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)2040)), (arr_4 [i_2]))) >> (((((/* implicit */int) max((arr_3 [12ULL]), (((/* implicit */unsigned char) (signed char)63))))) - (247)))))) ? ((+(arr_0 [(unsigned short)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [(unsigned char)4]) & (arr_4 [i_2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2])) > (var_15)))))))))));
        arr_8 [i_2] = ((/* implicit */signed char) ((9007199254739968LL) - (((/* implicit */long long int) ((arr_5 [i_2] [i_2]) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_11 [i_2] [(unsigned short)5] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-82)) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)4)))))));
            arr_12 [i_2] [i_2] = ((/* implicit */signed char) (~(((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))));
        }
    }
}
