/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125632
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (unsigned char)229)))) : (((/* implicit */int) ((unsigned char) var_1))))) : ((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))));
        var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (+(((var_4) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)2329), (var_6)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            var_14 = ((/* implicit */short) var_2);
            var_15 = ((/* implicit */short) (+((~(((/* implicit */int) var_8))))));
        }
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (short i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17293822569102704640ULL)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)42326)) : (((/* implicit */int) (unsigned char)80)))) : ((~(((/* implicit */int) var_0)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
                            var_19 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) (short)3215);
                            var_21 = ((/* implicit */unsigned char) var_3);
                        }
                    }
                } 
            } 
        } 
        var_22 &= ((/* implicit */_Bool) ((unsigned short) min((((((/* implicit */_Bool) (short)3215)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_6)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_10)))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42310)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_24 *= ((/* implicit */short) 277076930199552ULL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)63))));
                            var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
                            var_27 = var_2;
                        }
                        for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
                            arr_38 [i_8 - 3] [11U] [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_29 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            var_30 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
                        }
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)60))));
                    var_33 = ((/* implicit */short) ((var_8) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_5))));
                }
            } 
        } 
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 277076930199560ULL)) ? (((/* implicit */int) (unsigned short)11164)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14333))) : (6674170323077503088LL))))));
    }
    var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_0))))));
}
