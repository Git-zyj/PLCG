/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189426
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */long long int) (-(-1)))) - (max((((/* implicit */long long int) var_2)), (var_16))))) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_15))) | (((((/* implicit */_Bool) var_8)) ? (4294967295U) : (((/* implicit */unsigned int) var_18)))))))));
    var_20 |= ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >= (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))))));
    var_21 += ((/* implicit */int) (+(var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_22 &= ((/* implicit */_Bool) var_4);
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(var_7)));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) min((var_8), (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (var_14)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) var_4))))) ? (var_8) : ((+(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) (+(5)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [8LL] = ((((/* implicit */_Bool) (-(-7)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))));
                        arr_16 [i_1] [(short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((var_16) - (((/* implicit */long long int) 4294967290U)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_17)))))));
                        var_24 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (-(var_18)))), (var_7))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1)))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_5] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) var_4))))) ? (((var_11) ? (var_9) : (((/* implicit */long long int) 22U)))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_11))))))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9))) >> (((((/* implicit */int) var_13)) + (28718)))))));
                        arr_21 [i_2 + 1] [i_5] [i_2 + 1] [i_5] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 4089142853U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967293U))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */int) (_Bool)0)), ((+(var_8))))) : ((-((+(var_8)))))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        var_26 &= ((/* implicit */_Bool) var_6);
                        var_27 = ((/* implicit */_Bool) var_13);
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (var_3) : (4294967280U)))));
                            var_29 -= ((/* implicit */int) var_13);
                        }
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */int) (+((+(var_15)))));
                            arr_29 [i_0] [i_1] [i_2] [i_2] [13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(0U))) : (((var_15) - (var_14)))))) ? (var_6) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                        }
                        for (int i_9 = 1; i_9 < 12; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)30089))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((short) var_5))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)-125))))))) : (var_15)));
                            arr_32 [i_6] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */long long int) var_18)) : (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)16)) : (var_8)))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_15)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)30094)))))));
                            var_32 &= ((/* implicit */signed char) var_7);
                        }
                    }
                    var_33 = ((/* implicit */unsigned long long int) ((((var_16) / (((/* implicit */long long int) var_14)))) / (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 13; i_11 += 4) 
                        {
                            {
                                arr_38 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 3] [(signed char)10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)18)) ^ (((/* implicit */int) (unsigned char)59))))))))));
                                arr_39 [i_0] [i_0] [i_0] [i_0] [i_11 + 1] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
                                var_34 += ((/* implicit */signed char) max((((/* implicit */int) (short)7080)), ((~(((/* implicit */int) (unsigned char)62))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 += ((/* implicit */signed char) var_7);
}
