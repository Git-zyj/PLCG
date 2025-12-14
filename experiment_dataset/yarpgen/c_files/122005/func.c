/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122005
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_17 = 18446744073709551595ULL;
            var_18 ^= ((/* implicit */unsigned long long int) arr_3 [0LL] [i_1]);
            arr_6 [i_1] = (short)-26513;
        }
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_9 [i_3] [i_1] = ((/* implicit */signed char) ((long long int) (-(((((/* implicit */int) arr_0 [i_3])) - (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (short)-26488)), (2074965041U))), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65526)) - (((/* implicit */int) var_12)))) - (((/* implicit */int) ((unsigned short) (unsigned short)4))))))));
            var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [i_3] [i_1])) ? (13356447899240744131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_1]))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26270))) : (2220002255U))), (((/* implicit */unsigned int) arr_0 [i_1])))))));
            var_21 = ((/* implicit */int) ((short) 8239793763899506132LL));
        }
        arr_10 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483647)), (14ULL)))) ? (((((/* implicit */int) (short)-26488)) % (arr_3 [i_1] [i_1]))) : (((((arr_8 [i_1] [i_1]) / (arr_8 [i_1] [i_1]))) * (arr_8 [i_1] [i_1])))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) ? (min((((/* implicit */int) ((_Bool) arr_5 [i_1] [i_1]))), (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (_Bool)1)) : (-1))))) : (min((((/* implicit */int) var_10)), (arr_8 [i_1] [i_1])))));
        var_23 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) (short)0))));
    }
    var_24 = ((/* implicit */unsigned char) ((signed char) (short)-26492));
    var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_4)))) ? (((((/* implicit */_Bool) -2273979524695252603LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))))), (var_0)));
}
