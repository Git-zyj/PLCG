/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134318
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)173))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((var_15) ? (17179869183LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_8)))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-26949)))))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (signed char)112))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_13))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) % (var_3))) << (((var_1) + (7216681542686583453LL))))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))))));
                        arr_10 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (_Bool)1);
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4))))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) var_7)))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) ((_Bool) ((var_7) ? (((/* implicit */int) (short)32142)) : (-1069396220))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) * ((~(17592186044415LL)))));
                            arr_18 [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) var_10))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_15))))))));
                        }
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((-17592186044401LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))))))));
                        var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-32757)))) : (((/* implicit */int) (short)-32482))))));
                    }
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((17592186044415LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-17LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) var_11)) - (109)))))) : (4967079114487268029LL)));
                        }
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15242936658217913879ULL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)32482))))) : (((/* implicit */long long int) (~(4013051727U)))))))));
                    }
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4))))));
                        arr_27 [(unsigned char)11] [(unsigned char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))) : (8772359410930275226ULL)))) ? (1134257841) : (((/* implicit */int) (unsigned char)246))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32476)))))) ? (((/* implicit */int) var_7)) : (-1700575933)));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((signed char) 1700575933)))));
                    }
                }
            } 
        } 
    }
    var_37 = ((/* implicit */signed char) 1700575935);
}
