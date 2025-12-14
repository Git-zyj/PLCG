/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150767
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
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [(unsigned char)7] [i_1] [(unsigned char)7] [i_3] [i_3] &= ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)15926), (((/* implicit */unsigned short) (unsigned char)48)))))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (signed char)121))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [(unsigned char)13] [8U])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) arr_10 [5U] [i_1] [(_Bool)1] [i_3] [i_3])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 4; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 3] [i_2] [(unsigned char)9])) ? (((/* implicit */int) arr_4 [i_4 + 2] [i_4 - 4] [(unsigned char)16] [i_1])) : (((/* implicit */int) var_4))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (signed char)-119))))))));
                        var_16 |= ((/* implicit */_Bool) ((signed char) arr_5 [i_2]));
                        arr_15 [i_1] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */_Bool) (+(8191U)));
                    }
                    for (unsigned int i_5 = 4; i_5 < 14; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)203)))))))));
                        var_18 *= arr_0 [(unsigned char)10];
                    }
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_13 [i_0] [(unsigned char)4] [i_1] [i_2]))) - ((-(((/* implicit */int) arr_5 [i_1]))))))) ? (((((/* implicit */int) (signed char)-97)) + (((/* implicit */int) (unsigned short)33031)))) : (((/* implicit */int) ((_Bool) (-(2955830543U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 4; i_7 < 12; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) arr_23 [i_6] [i_6] [i_8])) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (unsigned short)26570)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_2)))))))))));
                    arr_26 [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) var_7)), (arr_7 [12U] [12U] [i_7 - 3] [i_7 - 3])))));
                }
            } 
        } 
    } 
}
