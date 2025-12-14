/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149382
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
    var_21 = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (short)32767))))));
    var_22 = ((/* implicit */signed char) var_15);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) var_13);
                        var_24 = ((/* implicit */int) var_17);
                        var_25 += ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_11))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) (~((-((-(((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)192))));
            arr_15 [i_0] [i_4] = ((/* implicit */unsigned long long int) var_12);
            var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((+(var_16)))))));
        }
        var_29 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_19)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        arr_16 [i_0] = ((/* implicit */int) 3291709489U);
        var_30 = ((/* implicit */unsigned int) (-((+((-(var_18)))))));
    }
    for (signed char i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        var_31 ^= ((/* implicit */unsigned int) var_2);
        var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)58))));
        var_33 = ((/* implicit */int) var_4);
    }
}
