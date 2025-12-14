/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179230
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_18 |= ((/* implicit */long long int) (+(-1871685353)));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) (unsigned char)78)));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (short)-29206))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_8 [i_2] [(unsigned char)2])) ? (7467350249005799245LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))))) + ((+(arr_8 [i_2] [i_2])))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_20 = ((long long int) ((((/* implicit */_Bool) var_15)) ? (arr_12 [(unsigned char)4] [i_3 - 3]) : (((/* implicit */long long int) -1871685325))));
                        var_21 = ((/* implicit */short) (+(1243018237U)));
                        arr_18 [i_2] [i_4] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) max((var_15), (((/* implicit */short) arr_16 [(unsigned char)5] [(signed char)2]))))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-25)), ((unsigned short)12441)));
    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_11))))) ? (((unsigned long long int) (signed char)29)) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_9))));
}
