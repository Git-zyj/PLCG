/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168775
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
    var_14 = ((/* implicit */unsigned char) ((unsigned short) max((var_7), (((/* implicit */unsigned short) var_5)))));
    var_15 = ((/* implicit */unsigned int) var_5);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((signed char) var_11)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)79))))) || (((/* implicit */_Bool) var_9))))))))));
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)88))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_1);
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 24; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)8] [i_2])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)251))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [(signed char)10] [(signed char)10])))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] = ((/* implicit */long long int) arr_12 [i_1] [i_1]);
        arr_15 [21U] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1] [(unsigned char)20] [i_1] [i_1])) ^ (((/* implicit */int) ((unsigned char) (unsigned char)190)))));
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)220)), ((unsigned short)17591)))) ? ((-(arr_3 [i_5]))) : (((((/* implicit */_Bool) arr_11 [(unsigned char)7] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [(unsigned char)11] [i_5]))) : (arr_3 [i_5])))));
        var_21 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)61)) || (((/* implicit */_Bool) (unsigned char)185)))), (max((arr_6 [i_5]), (var_13)))));
    }
}
