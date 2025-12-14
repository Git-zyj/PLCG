/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111960
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
    var_12 -= (~(((/* implicit */int) var_10)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) var_0);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_14 = max((((/* implicit */int) var_7)), (min((((/* implicit */int) (!(var_5)))), (((var_5) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (short)-28607)))))));
            var_15 = ((/* implicit */int) ((max((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (8112338094975038348ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-28607)) : (((/* implicit */int) (short)28606))))))) - (((/* implicit */unsigned long long int) arr_6 [i_0] [9LL] [i_0]))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_11 [i_2])))) < (((var_11) ? (arr_11 [i_2]) : (4078279291U))))))));
        var_16 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) - (131071)))) ? ((~(((/* implicit */int) (unsigned short)42125)))) : (((var_11) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_3])))));
        var_17 = ((((/* implicit */_Bool) arr_14 [i_3])) ? (((arr_10 [i_3] [i_3]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3])))))));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30652)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) max((var_8), (var_8))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22212)) | (((/* implicit */int) (unsigned char)158))));
        var_19 = ((/* implicit */int) ((((/* implicit */int) var_1)) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-1))))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)11))))) > (((((/* implicit */_Bool) (~(arr_11 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22212))))) : (1319561407)))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1)))) ? ((-(arr_13 [i_5]))) : (((/* implicit */unsigned int) arr_21 [i_5] [i_5]))))) ? (((((/* implicit */unsigned long long int) (-(var_6)))) / (((((/* implicit */_Bool) arr_17 [i_5])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    }
}
