/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142098
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
    var_15 = ((/* implicit */unsigned char) ((max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)27499))))))) << (((var_12) - (7407761268059389998LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) max((((/* implicit */long long int) max(((+(((/* implicit */int) (short)27524)))), (((/* implicit */int) (short)-27495))))), (var_12)));
                var_17 = ((/* implicit */unsigned short) arr_2 [i_0]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])) << (((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (1367716375U)))));
                    var_19 = ((/* implicit */unsigned short) var_9);
                    var_20 |= ((/* implicit */unsigned int) arr_2 [i_1]);
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_1] [i_1] [i_3 - 2])))) : (8796093022207LL)));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_22 = ((1987437185841489897LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3 - 1] [i_1] [i_4]))));
                        arr_12 [(unsigned short)10] [(short)18] [(unsigned short)10] [i_3] [i_0] [(short)18] = ((/* implicit */unsigned long long int) var_10);
                        arr_13 [i_1] [i_3 - 1] [i_0] = ((_Bool) arr_2 [i_0]);
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_2 [i_1]))));
                        arr_14 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_3 - 1]) | (((/* implicit */int) arr_4 [i_3 - 1] [i_0] [i_4]))));
                    }
                    var_24 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-27499)))) >> (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (153)))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-27499)))) >> (((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (153))) - (80))))));
                    arr_15 [7ULL] [i_1] [i_3 - 2] [i_0] = ((/* implicit */long long int) var_8);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (long long int i_6 = 3; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */long long int) arr_9 [i_5] [i_5] [i_1] [i_5]);
                                arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_6))))));
                                var_26 = ((/* implicit */_Bool) (+((~(1570912029844744395ULL)))));
                                var_27 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (586074001))) == (((/* implicit */int) ((_Bool) (unsigned short)7149)))));
                                var_28 = ((/* implicit */short) max((var_28), ((short)-27499)));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                {
                    var_29 -= ((/* implicit */signed char) var_11);
                    var_30 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4))))))) * (((((/* implicit */_Bool) ((-1167089460) / (((/* implicit */int) (unsigned short)58377))))) ? (arr_17 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)58362)))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) var_1);
                    var_32 ^= ((/* implicit */short) ((_Bool) ((long long int) var_6)));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 24; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                var_33 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-122))));
                                var_34 = ((/* implicit */unsigned short) ((short) arr_23 [i_1] [i_8] [i_9] [i_10]));
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((4136697416U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22154))))))));
                                var_36 -= ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                }
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((arr_24 [i_1] [i_0] [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_5), (((/* implicit */unsigned int) -1167089448))))))))))));
            }
        } 
    } 
}
