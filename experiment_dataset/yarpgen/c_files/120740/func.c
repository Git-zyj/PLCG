/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120740
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
    var_13 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) (~(((/* implicit */int) var_10))))));
    var_14 |= ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 3202220640U)) ? (-8418263941100280908LL) : (((/* implicit */long long int) ((/* implicit */int) (short)256)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((!(var_4))) ? (var_0) : (((/* implicit */unsigned long long int) (-(var_5)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_9 [i_0] |= ((/* implicit */unsigned short) ((unsigned char) var_6));
                        var_17 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_3)))));
                        arr_10 [i_3] [i_1 - 2] [i_0] &= ((/* implicit */_Bool) (-(4123887789U)));
                    }
                    arr_11 [i_2] |= ((/* implicit */unsigned long long int) ((short) var_8));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) ((long long int) var_1));
                                var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_5)))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 7952671976683780115LL))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_21 |= ((/* implicit */_Bool) var_0);
        var_22 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))));
    }
    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        var_23 |= ((/* implicit */unsigned char) ((long long int) ((unsigned int) var_0)));
        var_24 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_10))))))), ((+(var_7)))));
    }
    var_25 = ((/* implicit */long long int) ((signed char) var_4));
}
