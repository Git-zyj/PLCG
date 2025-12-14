/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187851
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((unsigned int) arr_2 [i_0])) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        var_18 = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */long long int) ((int) (unsigned char)239))), (var_10))));
        arr_5 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)232))))) >= ((~(((/* implicit */int) var_13)))))))) | (max((((((/* implicit */_Bool) (unsigned char)17)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_19 = var_10;
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (signed char)40))))))));
            arr_10 [i_1] [i_1] |= (-(((/* implicit */int) arr_1 [i_1])));
            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))));
            var_22 = ((/* implicit */_Bool) (-((-(var_16)))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_13 [i_1] |= ((/* implicit */short) (unsigned char)120);
            var_23 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)121))));
            arr_14 [i_1] = ((/* implicit */_Bool) ((var_3) & (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
        }
        var_24 = ((/* implicit */long long int) (unsigned char)6);
        var_25 &= (-(((/* implicit */int) (_Bool)1)));
        arr_15 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) (-(var_9))));
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */int) max((((/* implicit */short) (signed char)89)), (max((arr_1 [i_4]), (((/* implicit */short) (unsigned char)19))))));
        var_26 = ((int) ((signed char) ((((/* implicit */int) (unsigned char)237)) << (((((/* implicit */int) arr_1 [i_4])) + (25825))))));
        var_27 = ((/* implicit */signed char) (short)-19729);
        arr_21 [i_4] = ((/* implicit */_Bool) ((int) arr_8 [i_4]));
    }
    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_15)), (var_0)))))))));
}
