/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128728
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
    var_12 += ((/* implicit */short) ((min((1073709056), (((/* implicit */int) (unsigned short)32767)))) == (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */long long int) (~(var_7)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_14 += var_1;
        var_15 |= ((unsigned short) (unsigned short)65535);
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) arr_5 [i_1]);
        var_16 = ((/* implicit */int) 1097118482295410027ULL);
        var_17 = ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) != (((/* implicit */int) (signed char)13)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)149))))) & (((((/* implicit */_Bool) (unsigned short)31172)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)29)))))))) | (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) (~(430458007U)))) : (18446744073709551600ULL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_19 += ((/* implicit */unsigned short) var_5);
            var_20 += ((/* implicit */unsigned int) (unsigned short)65530);
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10126)) ? (2194250577811259580LL) : (((/* implicit */long long int) 1452896701U))))) ? (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_8)))))))) ? (min(((-(((/* implicit */int) arr_5 [i_2])))), (((arr_4 [i_2]) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) arr_5 [i_5])))))) : (((/* implicit */int) var_1))));
                        arr_15 [i_4] [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3] [i_4])) & (((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (((unsigned long long int) arr_4 [i_2])) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((1449128007467215135ULL) <= (((/* implicit */unsigned long long int) 1113413856))))), (min((((/* implicit */int) arr_5 [i_2])), (1374588166)))))));
                        var_22 = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */unsigned char) var_5);
}
