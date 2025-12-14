/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145305
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -900023786758662793LL)) && ((_Bool)1))) ? (var_11) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (var_11))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (arr_1 [i_0])))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)26612)) == (((/* implicit */int) (unsigned char)6)))))));
        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-31123))));
        var_19 = ((/* implicit */unsigned short) (+(5953975218247827616ULL)));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((var_8) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 482004132)) && (var_8)))), (var_11)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1])) - (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) min(((unsigned short)26620), ((unsigned short)14117)))) : ((-(((/* implicit */int) var_10)))))) : (var_11)));
        var_22 = ((/* implicit */unsigned int) var_5);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned int i_4 = 4; i_4 < 12; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_4 - 3] [i_4 - 4])) ? (arr_6 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 + 1] [i_4 - 3])))));
                        var_24 = ((/* implicit */unsigned int) arr_12 [i_2] [i_3] [i_4 - 3]);
                    }
                } 
            } 
        } 
        arr_17 [i_2] &= ((/* implicit */short) var_7);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) arr_4 [i_6] [i_6])) - (var_12)))));
        arr_21 [i_6] [i_6] = ((unsigned char) ((signed char) arr_18 [i_6]));
    }
}
