/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177558
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */unsigned short) var_4);
                var_21 = ((/* implicit */short) 8927324970080402726LL);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_22 = ((_Bool) ((((/* implicit */_Bool) (unsigned short)55350)) ? (((/* implicit */int) (unsigned short)10185)) : (((/* implicit */int) (unsigned short)10205))));
                    arr_8 [i_0] [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                    var_23 += ((/* implicit */long long int) (unsigned short)55349);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((int) var_16));
                                arr_16 [i_1] [i_1 + 2] [i_1] [i_1 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */_Bool) (unsigned short)55350)) && ((_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)0)))) : ((((_Bool)0) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_10)) - (38859))))))) << (((/* implicit */int) ((unsigned short) ((unsigned char) (_Bool)0))))));
                                var_26 = ((/* implicit */short) var_9);
                                var_27 = ((long long int) var_11);
                                arr_28 [i_0] [i_1] [i_0] [i_1] [i_0] &= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (unsigned short i_10 = 2; i_10 < 15; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_30 ^= ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))) << (((/* implicit */int) (_Bool)1)))));
                                var_31 &= ((/* implicit */_Bool) (unsigned short)65523);
                                arr_43 [i_10] [i_12] [i_11] [i_10] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (((unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
