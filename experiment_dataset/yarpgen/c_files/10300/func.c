/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10300
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) || (((((/* implicit */_Bool) ((var_5) / (var_5)))) && (((((/* implicit */int) var_18)) <= (((/* implicit */int) var_19))))))));
                    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) ((short) (-(6303296164475273385ULL))));
                    arr_11 [15LL] [15LL] [i_3 + 1] = ((/* implicit */int) (+((~(var_3)))));
                    var_22 |= ((/* implicit */short) (~((+(var_0)))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (var_10)))) ? (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (var_0))))));
                }
                arr_12 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_12))))))) ? ((~(((/* implicit */int) ((unsigned char) var_10))))) : (((int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (26954)))))));
                var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_18))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-25453))))) ? ((-(var_1))) : (((/* implicit */long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */short) (+(0ULL)));
                            arr_23 [i_8] [i_4] [i_4] [i_4] = ((/* implicit */short) (-(var_17)));
                        }
                        for (int i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) ((short) (+(((var_10) & (((/* implicit */int) var_11)))))));
                            var_27 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) ((var_14) < (((/* implicit */unsigned long long int) -329726699))))) << ((((~(414341748))) + (414341773))))));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 3; i_10 < 21; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (2147483647))) << (((((var_7) + (3337606768252388865LL))) - (27LL)))))) ? (((/* implicit */long long int) (~(var_8)))) : (var_5)));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7)))))));
                            var_30 = ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((+(((/* implicit */int) var_12)))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_5))));
                        }
                        var_32 = ((/* implicit */short) (+(((/* implicit */int) var_16))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_0) < (((/* implicit */int) var_11)))))));
                        arr_32 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) var_15)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) var_1))))));
                        arr_37 [i_5] [(short)20] [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) | (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        arr_40 [i_4] = ((/* implicit */short) ((var_6) / (((/* implicit */long long int) (~(var_10))))));
                        var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
                    }
                    arr_41 [i_6] [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */unsigned long long int) var_3)) * (var_17))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-20013))))))));
}
