/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111089
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) 35993612646875136ULL);
                                var_14 *= ((/* implicit */unsigned int) arr_1 [i_3]);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (short)7936)) ? (18410750461062676490ULL) : (2305843009213677568ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)7924)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_16 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18410750461062676491ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15872))))), (((unsigned int) arr_14 [i_1] [i_1] [i_2] [(short)0]))));
                                var_17 += ((/* implicit */short) arr_8 [i_1] [i_1] [i_1] [i_1]);
                                var_18 = (!(((/* implicit */_Bool) ((((35993612646875100ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_5 - 1])) ? (arr_0 [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32256))))) : (((/* implicit */long long int) ((unsigned int) arr_0 [i_6 + 2] [i_0])))))));
                                arr_17 [i_6 + 2] [i_5] [i_2] [i_5] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18410750461062676500ULL)) ? (((/* implicit */int) arr_5 [i_5] [i_2] [i_1] [i_0])) : (((/* implicit */int) (short)4096)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            {
                var_19 = ((/* implicit */short) (~(min((arr_9 [i_7] [i_7] [i_8] [i_8] [i_8]), (arr_9 [i_7] [i_7] [i_8] [i_8] [i_7])))));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7] [i_8] [7U] [i_10] [i_11])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7936))) : (arr_27 [i_9 - 3] [i_10 - 1] [i_10] [i_10 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                var_21 = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned int) ((short) arr_7 [i_11] [i_10] [i_9] [i_7]))), (((((/* implicit */_Bool) arr_16 [i_7] [i_9 - 3] [i_8] [i_10 + 1] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4103))) : (arr_16 [i_7] [i_7] [6U] [i_7] [i_7]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 2) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) (unsigned short)768);
                            var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12 - 1] [i_14] [i_14]))))) : (arr_37 [i_12] [i_12] [i_12] [i_12 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 21; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        {
                            arr_45 [i_16] [i_16 - 1] [i_13] [i_16] |= ((/* implicit */short) 35993612646875135ULL);
                            arr_46 [i_12] [i_13] [i_16 - 1] [i_16] &= ((/* implicit */short) 35993612646875136ULL);
                            arr_47 [i_12] [i_13] [i_12] [i_17] [i_12] [i_12 + 1] = ((/* implicit */_Bool) ((unsigned int) (((!(((/* implicit */_Bool) 1048576U)))) ? (35993612646875125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)4080)), (arr_34 [i_12] [i_13]))))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned short) min((268435424), (arr_31 [i_12 + 1] [i_16 + 1])))))));
                            var_25 = ((/* implicit */unsigned short) arr_36 [i_17] [i_12] [(_Bool)1]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 4; i_20 < 21; i_20 += 3) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned int) arr_51 [i_12] [i_12] [i_12 - 1] [i_12] [i_12]);
                                arr_56 [i_12 + 1] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_18] [i_18]))));
                                arr_57 [i_12] [i_12] [i_12 - 1] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_12 + 1] [i_12]));
                                var_27 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
