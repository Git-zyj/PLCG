/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163322
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
    var_17 -= ((/* implicit */int) var_14);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), ((+(min((((/* implicit */unsigned int) (unsigned char)178)), (var_14)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-693)), (-1848032839)))) + (var_1)));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_1))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((var_3), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((unsigned char) 1621886487))) : (((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (short)3193)) : (((/* implicit */int) (signed char)-58)))))))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((var_9) <= (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) : (10151001701130573559ULL))))))))));
        var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(794001919U)))) ? (var_14) : (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)8), (((/* implicit */unsigned short) var_4))))))))));
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) arr_10 [i_3] [i_3]);
        var_25 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)131))));
        var_26 += ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56486))) > (2920978089849945707LL))) ? (min((((/* implicit */int) (unsigned short)38671)), (var_5))) : (((/* implicit */int) arr_10 [i_3] [i_3])))) != (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), (max((arr_9 [i_3]), (((/* implicit */long long int) arr_19 [19U]))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (arr_20 [i_4] [i_6 + 1] [i_4] [i_4]))))));
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967288U)) == (18446744073709551615ULL)))))))));
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) 805306368))));
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_0))));
                                var_31 += ((/* implicit */_Bool) 10LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) var_1);
                                var_33 = ((/* implicit */short) (+(min((((/* implicit */int) min((var_12), (((/* implicit */unsigned char) var_11))))), (((((/* implicit */int) (unsigned char)192)) & (arr_15 [i_4] [i_4] [i_5] [i_4])))))));
                                arr_28 [i_3] [i_4] [i_5] [(unsigned char)15] [i_4] [i_8] [i_4] = ((/* implicit */signed char) var_14);
                                var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)144)) + (((/* implicit */int) ((signed char) var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)692))) : (3214135864U)))), (max((((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_3] [i_3])), (13205737082760508614ULL)))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))), (min((var_3), (((/* implicit */int) var_16)))))) : (arr_15 [i_3] [i_3] [i_3] [i_3])));
    }
    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (short)-15500)), (var_14))), (((1055109581U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -785492117)))))) | ((~(var_1))))))))));
}
