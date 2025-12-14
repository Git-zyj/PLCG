/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123170
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (signed char)9)), (min((((/* implicit */int) (short)32500)), (var_9)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -2147483641)) + (-8704057410786915631LL)))) || (((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2]))))))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) || (((/* implicit */_Bool) (unsigned char)65)))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208))) : (var_3)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((_Bool) ((-1447968098) / (2147483640))))), (((arr_8 [i_0]) / (((/* implicit */long long int) 3403080358U))))));
                    var_17 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [3U] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_3] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((18446744073709551614ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_4))));
                                arr_19 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) min((arr_11 [i_0] [i_0]), (var_7))));
                                var_19 = max((((long long int) arr_11 [i_0] [i_0 - 1])), (((/* implicit */long long int) ((2147483626) | (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) ((_Bool) ((unsigned long long int) -2147483641)))))))));
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) % (((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32487))) : (6026897205708392233LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)175)) - (175)))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_7]))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) 2147483640))))))) : (((/* implicit */int) arr_22 [i_7]))));
        arr_24 [i_7] [11] = ((/* implicit */unsigned int) max(((+(374145956))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7]))) != (3403080363U))))));
        arr_25 [i_7] = ((/* implicit */unsigned short) (unsigned char)191);
        var_23 -= ((((/* implicit */long long int) ((arr_6 [(short)10] [(unsigned char)8] [(unsigned char)8]) / (arr_6 [(short)9] [i_7] [i_7])))) * (min((0LL), (((/* implicit */long long int) arr_6 [2] [2] [2])))));
    }
    for (short i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
    {
        var_24 = (unsigned char)187;
        arr_29 [i_8] = ((/* implicit */unsigned short) (+(((min((-6026897205708392233LL), (((/* implicit */long long int) arr_6 [i_8] [i_8] [i_8])))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))))));
        /* LoopNest 2 */
        for (short i_9 = 4; i_9 < 12; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_25 = ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_9] [i_10])) ? (min((6LL), (((/* implicit */long long int) ((unsigned short) 6026897205708392233LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [(_Bool)1] [i_9 + 2] [i_8]), (((/* implicit */unsigned char) (signed char)-48)))))));
                    var_26 = ((/* implicit */int) min((var_26), (min((((/* implicit */int) arr_20 [i_8])), (min((((/* implicit */int) arr_33 [i_9 - 3] [i_8] [i_10])), (((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */int) (short)-30340)) : (((/* implicit */int) (short)-32501))))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */int) ((signed char) 1307967586))) == (((/* implicit */int) (short)30339)))))));
    }
    var_28 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11311)) ? (((/* implicit */int) var_1)) : (2143289344)))) || (((/* implicit */_Bool) var_10))))), (max((((var_12) / (6026897205708392224LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
    var_29 = ((/* implicit */unsigned long long int) var_13);
}
