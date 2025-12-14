/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143732
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
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_7))) ? (min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) var_5))))))) : (arr_1 [i_0])));
        var_10 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [(_Bool)1])))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_3)))))))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((8150862692261189010LL), (-2433352575112297288LL))), (((/* implicit */long long int) ((var_0) / (((/* implicit */int) var_1)))))))) ? (var_6) : (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */int) ((_Bool) arr_0 [6LL]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((-4980476980965985113LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54565))))) * (max((((/* implicit */long long int) (unsigned short)0)), (-1LL)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                arr_11 [i_0] [i_2] [i_1] [(unsigned char)10] = max((min((arr_8 [i_0 + 2] [i_0 - 1]), (((/* implicit */int) var_3)))), ((-(((/* implicit */int) var_5)))));
                var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)1])) ? (-660437585) : (((/* implicit */int) var_3))))) ? (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) var_3)))) ? (((/* implicit */unsigned long long int) (+(172882207)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_1))))) + (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (4808549965404777345ULL)))))));
                arr_13 [i_2] [i_2] [(short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((3233296365U), (((/* implicit */unsigned int) var_9))))))) ? ((-(min((arr_7 [i_0] [i_1]), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
            }
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) ((min((max((var_4), (((/* implicit */long long int) arr_2 [i_0 + 2])))), (max((arr_16 [i_0] [i_1] [i_3] [i_1] [i_4]), (((/* implicit */long long int) 4161536)))))) + (((/* implicit */long long int) ((0) / (((/* implicit */int) (unsigned char)87)))))));
                        arr_18 [i_1] [i_1] &= ((/* implicit */long long int) var_3);
                        arr_19 [i_0] [i_1] [i_4] [i_4 - 1] = ((/* implicit */unsigned char) 1198292617);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 &= ((/* implicit */int) ((((/* implicit */long long int) (+(1917402833U)))) / (((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_3 - 1])) ? (((/* implicit */long long int) arr_10 [i_0 - 1])) : (arr_7 [i_0 + 4] [i_3 - 1])))));
                            arr_23 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (+(var_7)))) : (((((/* implicit */_Bool) min((arr_6 [(_Bool)1]), (((/* implicit */unsigned short) var_3))))) ? (max((((/* implicit */long long int) var_0)), (arr_21 [i_4 - 1] [i_4 - 1] [i_3] [14U] [i_5]))) : (((/* implicit */long long int) ((arr_14 [i_0 + 1]) / (((/* implicit */int) (unsigned short)45644)))))))));
                            var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (var_4) : (arr_16 [7] [i_1] [(unsigned short)10] [i_4] [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45644)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_5]))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_6))) : (((/* implicit */unsigned long long int) max((arr_7 [i_3] [(unsigned short)2]), (((/* implicit */long long int) (unsigned char)87)))))))));
                        }
                    }
                } 
            } 
            arr_24 [i_0] [i_1] [12] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3449716250816193374ULL))))), (((unsigned char) arr_20 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1] [14])))), (((/* implicit */unsigned char) arr_22 [(unsigned short)5] [i_1] [i_0] [i_1] [i_0] [i_0]))));
            var_16 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]);
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    var_17 = ((/* implicit */signed char) ((unsigned int) min((max((((/* implicit */int) arr_6 [i_0])), (arr_10 [i_0]))), (var_0))));
                    arr_32 [i_7] [i_6] [i_0] [i_0] &= ((/* implicit */long long int) var_5);
                }
                arr_33 [i_0] [i_0] &= arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_6] [i_0] [i_0];
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (-437385224706033047LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47223))))))));
                var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4)))) ? (max((((/* implicit */int) var_9)), (arr_8 [5LL] [i_0]))) : ((~(((/* implicit */int) var_3)))))), (((/* implicit */int) var_2))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 4; i_8 < 11; i_8 += 3) 
            {
                var_20 = (~(((/* implicit */int) arr_20 [i_0 + 3] [i_0 - 1] [11LL] [i_0] [i_0 + 2] [i_8 - 2] [i_0 + 3])));
                var_21 = ((/* implicit */unsigned int) var_6);
                arr_36 [i_0] [i_1] [i_8 + 1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1]))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (int i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)255);
                            var_22 = ((((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (((/* implicit */long long int) ((/* implicit */int) var_8))));
                        }
                    } 
                } 
                var_23 = var_5;
            }
            for (int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                arr_45 [(unsigned char)10] [i_0] [(signed char)5] [i_0] = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) arr_39 [14] [i_0] [(unsigned char)9] [i_1] [i_1])) ? (((/* implicit */long long int) arr_38 [i_11] [i_11] [(unsigned char)2] [i_0] [i_0])) : (-7186057352163795454LL)))) + (max((((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_39 [12] [i_1] [12] [i_1] [i_1])) : (((/* implicit */int) arr_44 [i_11] [i_1] [i_1] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-55)), ((unsigned short)17259))))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    for (int i_13 = 1; i_13 < 14; i_13 += 1) 
                    {
                        {
                            var_24 = (-(((/* implicit */int) arr_6 [i_0 - 1])));
                            var_25 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-26661)), (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 1] [(unsigned char)12] [i_0] [i_12] [i_13 - 1] [i_12] [i_12]))) + (-8255726327505037311LL)))))) ? (max((((/* implicit */long long int) (signed char)116)), (562915593682944LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)136)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), ((+(-437385224706033043LL)))));
            }
        }
    }
    for (int i_14 = 1; i_14 < 12; i_14 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (unsigned short)5550))))));
        arr_53 [i_14] [i_14] = ((/* implicit */short) (-((-(((long long int) var_7))))));
    }
    var_28 &= ((/* implicit */unsigned short) 172882234);
}
