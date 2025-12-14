/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180127
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_9))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_14))))))) ? (var_7) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (var_7) : (var_4))))))));
        arr_2 [i_0] [i_0] = var_8;
        var_19 = ((/* implicit */long long int) var_7);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_11);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 8; i_4 += 1) 
    {
        arr_15 [i_4 - 1] [i_4 - 1] &= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
        var_22 = ((/* implicit */unsigned char) ((var_13) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))));
        arr_16 [i_4 - 1] [i_4 + 2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? ((~(var_12))) : (var_12)));
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? ((+(((/* implicit */int) var_2)))) : ((+(var_4)))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_4)))) ? (((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_15))))));
                            arr_28 [i_5] [i_5] [i_6] [i_7] [i_5] [i_5] [i_9] = ((/* implicit */short) (-(((/* implicit */int) var_14))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))))) ? (((var_6) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
                            var_31 = ((/* implicit */unsigned short) var_0);
                            var_32 = ((/* implicit */short) var_2);
                        }
                        var_33 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_14))))));
                    }
                } 
            } 
        }
        arr_31 [i_5] = ((/* implicit */unsigned int) ((var_11) ? ((~(((/* implicit */int) var_9)))) : (((var_3) ? (((/* implicit */int) var_11)) : (var_4)))));
    }
    for (unsigned int i_11 = 2; i_11 < 15; i_11 += 3) 
    {
        arr_36 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) : (((var_3) ? (var_7) : (((/* implicit */int) var_2))))));
        var_34 = ((/* implicit */signed char) var_6);
        arr_37 [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
    }
}
