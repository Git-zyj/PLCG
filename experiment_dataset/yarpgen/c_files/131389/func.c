/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131389
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
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19118))) : (var_1)))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */_Bool) var_12);
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1212402847744483489LL)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)55792))))))) : ((-((~(var_17)))))));
                        var_18 = (~(((((/* implicit */_Bool) (-(var_14)))) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                        var_19 = ((/* implicit */short) max((var_11), (var_11)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_20 = max((((/* implicit */int) (_Bool)0)), (max(((~(((/* implicit */int) (unsigned short)15)))), ((~(((/* implicit */int) (short)-19136)))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)19117))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))) : (max(((+(8393788651266150284LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (+(6238894771242168448LL)))), (max((((/* implicit */unsigned long long int) var_1)), (8451175936153562129ULL)))))));
                                var_22 = (+((-((-(-3484946276260885678LL))))));
                            }
                        } 
                    } 
                    arr_24 [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) -4743407396278202751LL);
                }
            } 
        } 
        var_23 += ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) (+(var_7)))), (min((((/* implicit */long long int) var_3)), (var_14)))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 4; i_11 < 10; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */short) max((var_24), (var_15)));
                        arr_36 [i_8] = ((/* implicit */signed char) (unsigned char)0);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_25 += ((/* implicit */unsigned char) var_14);
                        arr_40 [i_8] [i_9] [i_10] [i_8] [i_8] [i_12] = ((/* implicit */int) var_8);
                        var_26 ^= ((/* implicit */unsigned short) 0U);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9750)) ? ((-(((/* implicit */int) (unsigned char)248)))) : ((~(var_7)))));
                                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (-((+(((/* implicit */int) var_0)))))))));
                                var_29 = ((/* implicit */unsigned short) max((var_29), ((unsigned short)65534)));
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_5))));
                                arr_47 [i_13] [i_9] [i_13] [(unsigned char)7] [i_9] [i_9] = ((/* implicit */unsigned char) (-((-(var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_48 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)54))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                {
                    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -10)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1016))) : (5863321489860229167LL))) : (((/* implicit */long long int) var_17)))))));
                }
            } 
        } 
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)3))))) ? ((-(var_2))) : (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))));
    }
    var_34 = ((/* implicit */unsigned short) (+(4743407396278202750LL)));
}
