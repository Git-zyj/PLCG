/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152986
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) > (((((/* implicit */_Bool) (-(var_14)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_3))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (402888759U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [2] [i_1] [i_3]))))))) ? (((/* implicit */unsigned int) -2125434531)) : (((unsigned int) min((497708203U), (((/* implicit */unsigned int) (short)-5498))))))))));
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) (+(497708203U)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 728934983U)) ? (var_13) : (((/* implicit */unsigned int) arr_11 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (3892078536U)))) : (((arr_10 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_17 = ((/* implicit */unsigned char) var_7);
                        var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)4469)) : (((/* implicit */int) (_Bool)1))))) : (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))))))), (((((((/* implicit */_Bool) (short)4469)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) & (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (short)4471)) : (2125434530))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    {
                        arr_20 [i_5] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) arr_5 [i_0] [i_4])) >= (((/* implicit */int) (signed char)-1)))), (var_8))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2289506466U)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8))))))));
                        var_19 = ((/* implicit */unsigned char) (-(max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))) : (497708203U))), (((/* implicit */unsigned int) ((_Bool) 0U)))))));
                        arr_21 [i_5] [i_4] [i_5] [i_5] = (+(((((/* implicit */_Bool) -2125434531)) ? (((/* implicit */int) (unsigned char)7)) : (-2125434530))));
                        arr_22 [i_0] [i_0] [i_0] [0U] [i_0] [i_5] = (short)-5484;
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) (signed char)127);
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            arr_25 [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) 0U);
            arr_26 [i_0] = ((/* implicit */unsigned int) var_5);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_6))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_12))));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            arr_31 [i_0] [6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 497708203U))))) << (((((/* implicit */int) arr_14 [i_0] [i_9] [i_9])) - (50205)))));
        }
    }
    for (short i_10 = 3; i_10 < 14; i_10 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) max((arr_34 [i_10]), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1468965735U)) ? (((/* implicit */long long int) -360959683)) : (-3364054447027716711LL)))))))) <= (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_14))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 625299681)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))))));
        var_26 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */short) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_33 [i_10]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            {
                arr_41 [8U] [i_11] &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)50206)) & (((/* implicit */int) var_5))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_36 [(unsigned short)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12]))) : (0U))) << ((((~(((/* implicit */int) (short)-7175)))) - (7171)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) 0U)))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_28 = var_8;
                            arr_48 [i_11] [i_13] [(_Bool)1] [i_12] [i_11] [i_11] &= ((/* implicit */unsigned char) var_4);
                            var_29 &= ((/* implicit */unsigned char) arr_38 [i_11] [i_11] [i_11]);
                        }
                    } 
                } 
            }
        } 
    } 
}
