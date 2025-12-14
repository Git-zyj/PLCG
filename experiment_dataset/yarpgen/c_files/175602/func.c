/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175602
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (1650011254U) : (var_0))) : (((/* implicit */unsigned int) (+(var_3))))))) ^ (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))), (min((32767ULL), (((/* implicit */unsigned long long int) 2803452434U))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((unsigned int) arr_1 [3]);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned short) ((short) arr_0 [2]))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_8 [3ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_2]))));
            arr_9 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((long long int) ((unsigned int) var_4)));
            var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) var_12))) + (arr_3 [i_2])));
            arr_10 [3U] = ((arr_7 [i_1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_2])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned short) (+((+(((/* implicit */int) var_13))))))))));
            arr_14 [i_3] [i_1] = ((/* implicit */unsigned long long int) var_4);
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_18 [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_15 [i_4])), (arr_3 [1]))), (((/* implicit */unsigned long long int) arr_4 [i_4] [i_1]))))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) ((unsigned char) var_9))), ((-(arr_3 [i_1])))))));
            arr_19 [i_1] [7ULL] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4] [i_1])) * (((/* implicit */int) arr_4 [i_4] [i_1]))))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_23 [i_5] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */int) arr_20 [i_1] [i_4])))))))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned int) var_19)))));
            }
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_32 [i_1] [i_4] [i_4] [i_4] &= ((_Bool) ((((arr_0 [i_7]) == (((/* implicit */int) arr_12 [i_6] [i_4] [i_6])))) ? (max((1491514862U), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                        var_25 = ((/* implicit */_Bool) var_2);
                        arr_33 [i_1] [i_1] [i_4] [i_6] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned int) -610588806)), (2803452434U)));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */int) (+(((var_2) | (((/* implicit */unsigned long long int) (((_Bool)1) ? (3624315491838062561LL) : (((/* implicit */long long int) 17U)))))))));
    }
}
