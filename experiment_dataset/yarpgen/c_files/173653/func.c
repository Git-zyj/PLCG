/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173653
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
    var_17 = ((/* implicit */short) ((long long int) ((unsigned short) var_0)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) -1008376793000192549LL)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_19 = min((((long long int) (short)11091)), (((((/* implicit */_Bool) max((3684886886700333731LL), (((/* implicit */long long int) (unsigned short)42072))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_6)), (var_12)))) : (arr_2 [i_0] [i_0]))));
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_20 += ((((var_15) << (((((/* implicit */int) arr_7 [i_1 + 1])) - (45))))) >= (((((/* implicit */int) (short)-29486)) * (((/* implicit */int) arr_7 [i_1 - 1])))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_1] [i_1 - 1]));
        var_21 = ((/* implicit */long long int) var_12);
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_3] [i_3] [(unsigned char)0] = ((/* implicit */unsigned char) 9223372036854775807LL);
                            var_22 = ((/* implicit */_Bool) arr_17 [i_5] [i_2]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) (unsigned short)30101)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13))))));
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 1209232816266191868LL))));
                                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) min((3684886886700333731LL), (arr_5 [i_2] [i_2]))))));
                                arr_28 [i_2] [i_2] [(_Bool)1] [i_7] [i_7] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */int) arr_9 [i_8])), (((int) 18446744073709551610ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_9 = 3; i_9 < 14; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */int) (!(arr_29 [i_9 + 3] [i_9 + 3] [i_9 + 1])));
                        var_27 = ((/* implicit */short) var_12);
                        var_28 = ((((long long int) var_6)) > ((-(9223372036854775807LL))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((-6225840916276433450LL) / ((-9223372036854775807LL - 1LL))))) ? (17134772399462671829ULL) : (((/* implicit */unsigned long long int) (+(var_15))))));
                    }
                    var_30 = ((/* implicit */_Bool) min((var_30), ((((_Bool)1) || (((/* implicit */_Bool) arr_24 [i_9 + 2] [(_Bool)1] [i_9 + 2] [i_9 + 3]))))));
                    var_31 = ((/* implicit */signed char) var_9);
                    var_32 = ((6225840916276433437LL) / (((/* implicit */long long int) ((((/* implicit */int) arr_12 [(unsigned short)2] [i_3] [(unsigned short)2])) + (((/* implicit */int) (_Bool)1))))));
                }
                for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    arr_37 [i_2] [i_3] [i_2] [i_2] = ((min((((/* implicit */long long int) (signed char)47)), (3684886886700333754LL))) <= (((/* implicit */long long int) ((var_14) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_13 [i_2]))))));
                    var_33 -= ((/* implicit */long long int) ((((_Bool) (unsigned short)23458)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_15 [i_11] [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (arr_11 [i_2] [16LL])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : ((~(var_11)))))));
                }
            }
        } 
    } 
}
