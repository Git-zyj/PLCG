/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146178
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
    var_16 = ((/* implicit */signed char) ((unsigned int) (unsigned short)49152));
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), (var_2)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((max((((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) min((var_14), (((/* implicit */int) var_3))))))) >> (((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16355)))))) : (arr_0 [i_0] [i_0])))));
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)49208)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49174)))))));
        var_20 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1799497215U)) ? (((/* implicit */int) (short)-9840)) : (((/* implicit */int) (unsigned short)49152))))), (((((/* implicit */_Bool) (~(2495470078U)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32763)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_21 = arr_2 [i_2];
            var_22 = ((/* implicit */unsigned long long int) -2759803067851251356LL);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)9827)) && (((/* implicit */_Bool) var_7))))) : (((int) 1799497214U))));
            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1 + 1]))));
            var_25 = ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) ? (arr_4 [i_1 - 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 - 1]));
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)49194)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) arr_10 [i_1 + 1]))));
            arr_16 [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) arr_1 [i_4]))))));
        }
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_27 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32764))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_5))));
                arr_23 [i_1] [i_1 + 1] = ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (arr_18 [i_5 + 4]));
                var_30 += ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) + (2147483647))) << (((arr_0 [i_1 + 1] [i_5]) - (3232872131U)))));
            }
            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])) & (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
        }
        arr_24 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1])) * (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1]))));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) - (9223372036854775807LL)));
    }
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_0))));
}
