/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138131
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
    var_11 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))))))));
    var_12 = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & ((~(1914941231U)))))));
    var_13 -= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) var_10)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (0U))))) % (arr_1 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + ((~(arr_1 [7U]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_2), ((unsigned char)202)))))))));
        arr_3 [i_0] = ((/* implicit */short) (+(max((min((((/* implicit */int) var_3)), (-1861072354))), (((/* implicit */int) ((unsigned short) (_Bool)0)))))));
        var_15 = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_0)) / (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))) ^ (4294967278U)));
        var_16 += ((/* implicit */int) var_2);
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_5 [i_1])))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4336)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_0)))))))))))));
        var_18 = ((/* implicit */_Bool) ((((max(((_Bool)1), (arr_0 [i_1] [i_1]))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_6)))) : (((/* implicit */int) (!((_Bool)0)))))) >> (((max((var_1), (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))) - (1312048647U)))));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) (unsigned char)255))), (arr_4 [i_2])))) : (arr_1 [i_2])));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) || (arr_0 [i_2] [i_2]))) ? ((+(((/* implicit */int) arr_0 [i_2] [i_2])))) : (((/* implicit */int) arr_0 [i_2] [(unsigned short)12])))))));
    }
}
