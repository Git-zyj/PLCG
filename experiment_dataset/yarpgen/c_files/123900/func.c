/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123900
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
    var_15 = ((/* implicit */_Bool) var_6);
    var_16 -= ((/* implicit */signed char) var_3);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-13314)) ^ (((/* implicit */int) (short)20))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) min((((((_Bool) (signed char)86)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)254)), ((unsigned short)37623))))));
        arr_3 [i_0] [(unsigned char)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_0)))))) : ((~(var_3)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) max((((/* implicit */short) var_13)), ((short)30949)))))));
                    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (unsigned char)12))))) ? (var_6) : ((+(((/* implicit */int) var_4))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-26)))) ? (((unsigned long long int) (unsigned short)45861)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned char) ((int) (unsigned char)1))))));
        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_12)) - (((/* implicit */int) var_9))))));
        var_23 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((_Bool) var_14)))))));
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20)) * (((/* implicit */int) (unsigned char)88))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)3341)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((_Bool) var_12)))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 15; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))))))))));
                                var_25 *= ((/* implicit */unsigned short) max((var_6), (((((int) var_11)) - (((/* implicit */int) var_2))))));
                                arr_28 [i_5 - 1] [i_4] [(signed char)10] [i_7 - 4] [i_8] [i_4] [i_8 - 1] = ((/* implicit */short) ((((int) var_8)) ^ ((-(((/* implicit */int) var_5))))));
                                var_26 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) var_8)), ((+(var_7))))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned short) var_14)), (((/* implicit */unsigned short) var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    var_28 ^= (+(((/* implicit */int) ((unsigned short) var_8))));
                    var_29 -= ((/* implicit */short) (+(((((/* implicit */int) (unsigned short)26236)) ^ (((/* implicit */int) (short)7))))));
                    var_30 += ((/* implicit */short) ((unsigned short) min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)7)))));
                }
            } 
        } 
        arr_29 [i_4] = var_0;
        var_31 = ((/* implicit */int) min((var_31), (((int) (-(((/* implicit */int) var_8)))))));
        var_32 = ((/* implicit */int) min((((((/* implicit */_Bool) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_5), ((unsigned char)137)))))))));
        var_33 = ((/* implicit */int) max((var_33), (min((((((/* implicit */int) (unsigned short)40456)) - (((/* implicit */int) (_Bool)1)))), (-1510037747)))));
    }
}
