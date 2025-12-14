/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16932
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 652852308)))))));
        var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_0 [7LL]))));
        arr_3 [3] = (!(arr_0 [i_0 - 1]));
        arr_4 [0] = ((/* implicit */int) (((+(var_4))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [0] [i_1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned short)726))))) ? ((-(((/* implicit */int) arr_2 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255)))))))));
            arr_12 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (1116711953U));
            var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_1]))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = (!(arr_8 [i_1 - 1] [i_1]));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) (+(arr_19 [i_1 - 1] [i_3] [i_5])));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(var_4))))));
                            var_19 = ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (47119116U));
                            var_20 = ((/* implicit */unsigned char) (unsigned short)44573);
                        }
                    } 
                } 
            } 
            var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3178255342U)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((arr_22 [i_1] [(unsigned short)10] [i_1] [i_3] [i_1 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31498))))));
        }
        for (int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            arr_27 [(unsigned char)11] [i_7] [i_1] = ((/* implicit */unsigned short) -1192294952);
            var_22 *= (unsigned short)2048;
        }
    }
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_4)))) ? (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) (_Bool)0)) : (var_3)))) : (((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (-2541391268952086422LL))))));
}
