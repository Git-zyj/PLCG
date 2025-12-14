/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129811
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) min((arr_0 [i_0] [i_1]), (((/* implicit */int) (short)7380))))) | ((+(1887668522497458231LL))))) == (((/* implicit */long long int) (((_Bool)1) ? (max((arr_0 [i_0] [i_1]), (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(arr_7 [i_2] [i_0] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] = max((((_Bool) (+(arr_15 [i_1] [i_0])))), ((_Bool)1));
                                var_12 = min((((unsigned int) (+(arr_5 [i_3])))), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [6ULL] [i_3])));
                                var_13 = ((((arr_5 [i_2]) == (arr_5 [i_0]))) ? (((((arr_5 [i_0]) + (2147483647))) >> (((arr_5 [i_0]) + (1337422727))))) : (max((arr_5 [i_0]), (arr_5 [i_0]))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((min((((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_4])), (-2099363937))) + (2147483647))) << ((((+(arr_0 [i_2] [i_2]))) - (1999375796)))))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 1]))) : (((((/* implicit */int) arr_12 [i_0] [i_3 - 2] [i_1] [i_1] [i_1])) * (min((((/* implicit */int) (_Bool)1)), (arr_0 [i_3] [i_2]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) (+(max((max((((/* implicit */unsigned int) arr_1 [i_6] [i_1])), (arr_17 [i_0] [i_0] [1U] [i_0]))), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_15 = max((((((/* implicit */int) ((short) arr_17 [i_6] [i_5] [i_0] [i_0]))) - (((((/* implicit */int) (unsigned short)6)) + (((/* implicit */int) arr_20 [i_0] [(signed char)13] [i_0] [i_0])))))), (arr_8 [i_1] [i_2] [i_6]));
                                arr_24 [i_5] [i_5] [i_0] = (~(((((/* implicit */_Bool) ((long long int) (signed char)116))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)17)))));
                                var_16 += ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_5])) == (max((((unsigned long long int) arr_12 [5] [13] [i_2] [(unsigned short)10] [12])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_0])) ? (((/* implicit */int) var_5)) : (arr_8 [i_2] [i_5] [13]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            {
                arr_29 [i_8] = arr_25 [i_8] [i_7];
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned char i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : ((-(arr_25 [i_11] [i_10 - 3]))))) >> ((((+((-(((/* implicit */int) arr_30 [i_9] [i_9] [i_7])))))) + (18)))));
                                var_18 = arr_27 [i_8] [8] [i_8];
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_48 [i_7] [i_8] [i_8] [i_13] [i_14] = ((/* implicit */signed char) (+(((arr_39 [i_7] [i_8] [i_13] [i_14]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_14] [i_14]))))) : ((~(((/* implicit */int) arr_39 [(_Bool)1] [i_8] [i_12] [i_13]))))))));
                                var_19 = ((/* implicit */int) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_33 [i_8] [i_8] [i_8] [i_8])))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_26 [i_13]))) : ((~(var_1))))))));
                                arr_49 [i_8] [i_8] [i_12] [i_8] [i_7] = ((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */_Bool) (unsigned short)12370)) ? (((/* implicit */int) (unsigned short)12356)) : (arr_25 [i_8] [i_13]))))));
                                var_20 ^= ((/* implicit */int) 3207752031U);
                                var_21 *= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_36 [i_7] [i_7] [i_7] [16U] [(_Bool)1] [16U] [i_8]), (((/* implicit */int) var_2)))))))), ((~(((((/* implicit */_Bool) arr_41 [i_7] [14U] [i_7] [i_14])) ? (((/* implicit */int) arr_47 [i_7] [i_8] [i_12] [i_7] [i_14])) : (((/* implicit */int) arr_44 [12U] [i_13] [i_12] [i_8] [12U]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_56 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37190))))) && ((!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-31)), ((short)-1))))))));
                            arr_57 [i_7] [i_8] [i_8] [7U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_8])) ? (max((arr_33 [i_16] [i_8] [i_8] [i_7]), (arr_33 [i_7] [i_7] [i_8] [i_16]))) : (((max((arr_42 [i_7] [i_7] [i_7] [i_7] [i_8]), (((/* implicit */unsigned long long int) (unsigned short)12376)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_16] [i_7] [i_7])))))));
                            arr_58 [i_15] [i_15] [i_15] [(signed char)10] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_27 [i_7] [i_8] [i_8]), (arr_27 [i_7] [i_7] [i_8])))) ? (((var_8) - (max((((/* implicit */long long int) (signed char)-79)), (var_8))))) : (((/* implicit */long long int) ((int) var_11)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) arr_55 [i_7] [i_7] [i_7] [i_7]))))), ((~(((/* implicit */int) ((arr_39 [i_8] [i_8] [i_8] [i_7]) || (((/* implicit */_Bool) (unsigned short)24401)))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((arr_63 [i_8] [(_Bool)1] [i_8]) ? (((/* implicit */unsigned int) 1752875281)) : (arr_61 [i_8] [i_17] [12U])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_8] [i_8] [i_8] [i_8]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
