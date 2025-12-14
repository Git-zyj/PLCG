/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171255
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
    var_17 = ((/* implicit */unsigned short) (!(var_4)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) var_7);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-15391)) ? (((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) max(((unsigned char)30), (((/* implicit */unsigned char) (signed char)-5))))) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((short) arr_1 [i_0])))));
        var_20 &= ((unsigned char) max((((((/* implicit */_Bool) (short)-15391)) ? (((/* implicit */int) (short)-15418)) : (((/* implicit */int) (signed char)2)))), (((/* implicit */int) (unsigned char)6))));
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (max((((/* implicit */long long int) var_16)), (var_10)))))), (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15418))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_15)), ((short)(-32767 - 1)))))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */short) var_15)), (var_12)))), (((((/* implicit */_Bool) (short)15391)) ? (((/* implicit */int) arr_14 [i_2 + 1] [i_5] [i_2 + 3] [i_2 + 1] [i_2 + 3])) : (((/* implicit */int) arr_11 [i_2 + 3] [i_5] [i_2 - 1]))))));
                                arr_15 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (4294967295U)))), (max((var_10), (((/* implicit */long long int) (short)32757)))))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)58)), (var_2))), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_2 + 1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3] [i_4])))))) : (((long long int) var_11)))) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                                var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (4583651139756247967ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1] [i_3] [i_3]))))))))));
                            }
                        } 
                    } 
                    var_25 &= ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)88)))), (-932021894)));
            var_27 = ((/* implicit */signed char) var_0);
            var_28 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) var_16)) ^ (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_4 [i_1] [i_6] [i_6])))))));
            /* LoopNest 2 */
            for (short i_7 = 3; i_7 < 15; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_29 = ((/* implicit */signed char) (unsigned char)3);
                        arr_24 [i_1] [i_8] [i_7 + 2] [i_7] [i_1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 3443980233U)) && (((/* implicit */_Bool) var_5)))));
                        var_30 += ((/* implicit */signed char) var_15);
                    }
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_20 [i_9] [i_9] [i_1])), (var_8))), (((/* implicit */unsigned long long int) ((signed char) ((unsigned char) (short)15402)))))))));
            var_32 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) (_Bool)1))), ((-(((/* implicit */int) arr_14 [i_1] [i_9] [i_9] [i_9] [i_9]))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((max((var_16), (((/* implicit */int) (signed char)-12)))) * ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_29 [i_1] [i_9]))))));
                        arr_33 [i_11] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (signed char)17))))), (((((/* implicit */unsigned long long int) max((var_10), (var_0)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62215))) ^ (var_11)))))));
                    }
                } 
            } 
            arr_34 [i_9] = ((/* implicit */unsigned int) min((max((min(((unsigned short)4744), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) arr_16 [i_1] [i_9])))), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)60)))), (((((/* implicit */_Bool) (short)1602)) && (((/* implicit */_Bool) (short)-15404)))))))));
            var_34 = ((/* implicit */unsigned char) (short)-1603);
        }
        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 4) 
        {
            arr_38 [i_1] [i_1] [i_12 - 1] = ((/* implicit */unsigned short) var_1);
            var_35 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_3)) || (arr_19 [i_1] [i_12 - 1] [i_1])))));
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_12 - 1] [i_1])), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_12 - 1] [i_12 + 1] [i_1] [i_1])) - (var_16))))))) ? (((/* implicit */unsigned int) (-(min((((/* implicit */int) var_3)), (arr_8 [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_12 [i_12 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)13970), (((/* implicit */short) (signed char)(-127 - 1))))))) : (max((1792351781U), (((/* implicit */unsigned int) arr_3 [i_12 + 1]))))))));
        }
    }
    for (unsigned char i_13 = 2; i_13 < 12; i_13 += 4) 
    {
        var_37 = ((/* implicit */int) var_3);
        var_38 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_7 [i_13 - 1] [i_13 - 2] [i_13 + 1])))), (((/* implicit */int) min((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) (_Bool)0)))))));
        arr_43 [i_13 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (unsigned short)60779))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_14))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (1274044512) : (((/* implicit */int) arr_27 [i_13 - 2] [i_13 - 2] [i_13 + 1] [i_13 + 2])))))))) && (((/* implicit */_Bool) max((max((((/* implicit */short) (unsigned char)48)), ((short)6074))), (((/* implicit */short) max((var_15), (((/* implicit */unsigned char) (_Bool)0))))))))));
    }
    for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        var_39 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) ((_Bool) var_8))) / (((((/* implicit */_Bool) arr_22 [i_14] [i_14])) ? (((/* implicit */int) (unsigned short)12936)) : (((/* implicit */int) (_Bool)1)))))));
        var_40 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(var_7)))) > ((-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_14] [i_14] [i_14])))))) : (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_15)))) : (max((9223372036854775807LL), (((/* implicit */long long int) (signed char)23))))))));
    }
    var_41 = ((/* implicit */_Bool) var_10);
}
