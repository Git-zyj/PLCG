/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158663
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
    var_11 = ((/* implicit */short) var_9);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) + ((-(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (signed char)67))))))));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) min((max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1])))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)231)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)36))))) ? (284732036U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (4010235255U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))));
        }
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            arr_17 [i_3] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3] [i_3] [i_0])) / (((/* implicit */int) arr_14 [i_3]))))) ? ((-(((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) var_6)))))));
            var_14 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)63239)), ((((!(((/* implicit */_Bool) 4010235259U)))) ? (((((/* implicit */_Bool) (unsigned short)28961)) ? (11ULL) : (((/* implicit */unsigned long long int) 5263097936256107315LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4010235283U))))))));
            arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 1254339674171509924LL)) && (((/* implicit */_Bool) 5263097936256107323LL)))));
        }
        arr_19 [i_0] = ((/* implicit */signed char) arr_4 [i_0] [18] [i_0]);
    }
    for (int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((arr_6 [(unsigned short)0] [i_4] [i_4]), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_16 [i_4 + 2] [i_4 + 3] [i_4 + 3])) && (var_2)))))));
        var_16 = ((/* implicit */short) max((max((var_0), (arr_9 [(unsigned char)12]))), ((+(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_4 [i_5] [i_5] [i_5])))));
        arr_24 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned char) arr_14 [i_5]));
        var_18 = (-(((/* implicit */int) (_Bool)1)));
        var_19 += ((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) << ((((((~(arr_1 [i_5] [i_5]))) + (8007710331638831676LL))) - (3LL)))));
    }
    var_20 += ((/* implicit */_Bool) ((((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)28582)) : (((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) 10179910949945579235ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))));
    var_21 = ((_Bool) (~(((/* implicit */int) (unsigned char)140))));
}
