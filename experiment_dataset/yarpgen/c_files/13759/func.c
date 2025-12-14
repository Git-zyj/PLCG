/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13759
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_4))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned int) ((arr_1 [i_0]) < (max((((/* implicit */unsigned int) (short)32761)), (arr_1 [i_0])))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))) : (var_0)))))));
            var_17 = ((/* implicit */unsigned char) arr_1 [i_0]);
            arr_7 [i_1] = ((/* implicit */unsigned int) ((short) max((arr_4 [i_1 + 2] [i_1 + 2]), (arr_4 [i_1 - 1] [i_1 - 1]))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_6 [i_2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) & (var_8))))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((1389694696663873230ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (_Bool)1))))))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(3094613209U))))));
                            arr_16 [i_3] [i_4] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */signed char) -588558634);
                            arr_17 [i_5] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) 810072304);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_4 [i_6 + 3] [i_6 + 1]))));
            arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6] [i_6 + 3])) ? (((/* implicit */unsigned int) -1249906919)) : (2116630628U)));
            var_22 = ((/* implicit */unsigned char) arr_1 [i_6]);
            var_23 = ((/* implicit */signed char) var_1);
            arr_23 [i_6] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0]);
        }
        for (unsigned int i_7 = 4; i_7 < 16; i_7 += 4) 
        {
            var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (min((var_6), (((/* implicit */unsigned long long int) arr_20 [i_7] [i_7]))))));
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-10451))));
        }
    }
    for (signed char i_8 = 3; i_8 < 13; i_8 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) arr_0 [i_8]))));
        arr_28 [i_8] = ((/* implicit */unsigned short) arr_19 [(signed char)8] [(signed char)8]);
        arr_29 [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)4408))));
    }
    /* vectorizable */
    for (signed char i_9 = 3; i_9 < 13; i_9 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)15872)) & (((/* implicit */int) (signed char)0))));
        var_28 |= ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9 + 2]))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */int) (unsigned short)40094)) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9])) != (((/* implicit */int) arr_18 [i_9] [i_9] [i_9])))))));
    }
}
