/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178072
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1 - 1] [i_2] [(_Bool)1] [(signed char)21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43110)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [3U] [i_1 + 1]))) : (var_17)));
                    arr_10 [i_2] [i_2] [i_2] [8ULL] = ((/* implicit */signed char) var_1);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_15))))))));
                        var_22 = var_16;
                        var_23 = ((/* implicit */unsigned long long int) (+(var_17)));
                        arr_13 [(short)7] [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)-106);
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) arr_11 [i_0 + 4] [16ULL] [i_0 - 1]))) == (((((/* implicit */_Bool) arr_8 [i_0 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [11LL]))) : (arr_4 [i_3] [i_3] [i_3])))));
                    }
                    arr_14 [i_0 + 3] [i_1 - 1] [i_2] [i_2] = (-((((_Bool)0) ? (((/* implicit */long long int) var_10)) : (arr_4 [i_1] [i_1 + 1] [i_1 + 1]))));
                }
            } 
        } 
        var_25 -= ((/* implicit */long long int) var_1);
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned int i_6 = 1; i_6 < 23; i_6 += 2) 
                {
                    {
                        arr_24 [i_5 + 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)1] [i_4 - 3] [i_4])) || (var_2)));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_5))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 4; i_7 < 15; i_7 += 2) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_18 [i_7 - 4] [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)63)), (arr_19 [i_7 - 2] [i_7 - 1] [i_7]))))) : (min((var_9), (((/* implicit */unsigned long long int) var_1))))));
        arr_29 [i_7] = ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7])))))));
    }
    var_28 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (min((var_5), (((/* implicit */unsigned long long int) var_18)))))) == (((/* implicit */unsigned long long int) var_17))));
}
