/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168419
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
    var_10 = ((/* implicit */int) ((min((max((18446744073709551603ULL), (281406257233920ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_2))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned long long int) var_4)))))));
    var_11 &= ((_Bool) 4294967277U);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) (-((+(min((arr_2 [i_0]), (arr_2 [i_0])))))));
        var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((unsigned short) arr_0 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1 + 3])) < (((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 3]))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1 + 2] [i_1 + 2]);
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) + (arr_5 [i_0] [i_0] [i_3])));
                    var_17 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)219))))));
                    var_18 *= ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_2]);
                }
                var_19 = ((/* implicit */unsigned long long int) var_3);
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned int) arr_4 [i_1 + 3] [(unsigned char)10] [i_1])))));
            }
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((arr_7 [i_0] [i_1 + 1] [i_5]) ? (((((/* implicit */int) arr_6 [(unsigned char)14] [(unsigned char)14] [i_4])) << (((2147483392U) - (2147483383U))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 2])))))));
                        var_22 = (!(((/* implicit */_Bool) arr_2 [(_Bool)1])));
                        /* LoopSeq 1 */
                        for (int i_6 = 3; i_6 < 17; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (7ULL)))) ? (2777240430U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1]))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [(short)14] [i_1 - 1] [i_4] [i_4] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1 + 2] [i_6] [i_6] [i_1 + 2]))) : (var_3))))));
                            var_27 = ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1 - 1] [i_5] [(unsigned short)7])) ? (arr_9 [12] [i_0] [i_1 - 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        }
                        var_28 += ((/* implicit */_Bool) (unsigned short)17);
                    }
                } 
            } 
        }
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        var_29 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_7] [i_7])) ? (arr_16 [i_7] [i_7]) : (((/* implicit */unsigned int) 523264)))));
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_17 [i_7]))) >> (((((((/* implicit */_Bool) arr_16 [i_7] [i_7])) ? (((/* implicit */int) arr_17 [12])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967266U))))))) - (13307)))));
        var_31 = (~(var_7));
        var_32 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_18 [i_7] [(unsigned short)2]), ((_Bool)1))))));
        var_33 = (!(((/* implicit */_Bool) max((arr_16 [i_7] [i_7]), (((/* implicit */unsigned int) (unsigned char)96))))));
    }
    var_34 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) (unsigned short)9779)) : (1098748381)))));
}
