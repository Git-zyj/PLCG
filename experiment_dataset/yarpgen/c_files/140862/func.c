/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140862
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
    var_10 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((_Bool) var_0))), (((((/* implicit */_Bool) (short)12482)) ? (4310218912483187239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))) > (((((/* implicit */_Bool) (unsigned short)12786)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-7331), ((short)12116)))))))));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((_Bool) var_5)))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) arr_1 [i_0 + 2]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_6 [(unsigned char)0] [i_1] |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((int) var_6))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7352)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7331))) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)7331))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7331))) : (arr_1 [i_0])))))));
            var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned int) arr_5 [i_0])), (var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((max(((signed char)107), (arr_3 [i_1] [12U] [i_0]))), (var_3))))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)2] [i_1])) ? (min((((/* implicit */unsigned int) var_5)), (2995762565U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)65535);
        }
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (656853222U) : (var_9)))))) ? (max((((/* implicit */unsigned int) (-(-1)))), (2995762583U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)7330)) < ((+(((/* implicit */int) arr_4 [i_0])))))))))))));
    }
    for (signed char i_2 = 3; i_2 < 24; i_2 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) (+(((unsigned long long int) arr_9 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2])) ? (arr_8 [i_2 - 2] [i_2 - 2]) : (arr_8 [i_2 - 3] [(short)19]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2] [(unsigned char)12])) % (((/* implicit */int) (!(arr_9 [20U] [i_2 - 1]))))))));
        arr_10 [i_2] = ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (31U)))))) : (arr_8 [i_2 - 3] [i_2 - 2]));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (_Bool)1))));
        arr_11 [i_2] [7ULL] = ((/* implicit */_Bool) var_7);
    }
}
