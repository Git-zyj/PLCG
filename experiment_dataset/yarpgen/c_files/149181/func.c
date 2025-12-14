/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149181
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((var_2), (((/* implicit */unsigned char) ((((arr_0 [i_0]) - (((/* implicit */int) var_2)))) > (((((/* implicit */int) arr_1 [i_0] [i_0])) - (2147483647))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_6)) / (arr_0 [i_0]))), (((2147483647) / (((/* implicit */int) (unsigned char)204))))))) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) ((((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)55690)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) -24))))))))));
        arr_5 [i_0] = ((/* implicit */int) ((short) ((int) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)51))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((int) (+(var_8))))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((((((((/* implicit */_Bool) (signed char)32)) || (((/* implicit */_Bool) (unsigned char)209)))) ? (((/* implicit */int) max((var_6), ((unsigned char)31)))) : ((~(((/* implicit */int) (unsigned char)208)))))), (((/* implicit */int) (signed char)48)))))));
    }
    for (int i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_2])))) ? (((/* implicit */long long int) ((unsigned int) var_4))) : (max((2514047430569252916LL), (4885113559770768711LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) -463374861)), (2764706947281251735LL)))) || (((((/* implicit */_Bool) (signed char)23)) && (((/* implicit */_Bool) arr_8 [i_2] [1]))))))) : (max((var_0), (arr_8 [i_2 - 2] [i_2 + 3])))));
        var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_8))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)124)), (max((((-2514047430569252916LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1]))))), (((/* implicit */long long int) arr_7 [i_2 + 2] [i_2]))))));
    }
    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
    {
        arr_13 [2] = ((/* implicit */unsigned short) ((_Bool) (((+(((/* implicit */int) (unsigned short)3)))) > (arr_12 [i_3 + 1]))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) min((2514047430569252916LL), (((/* implicit */long long int) 2147483647))));
    }
    var_15 = ((unsigned long long int) ((unsigned short) (-(var_5))));
}
