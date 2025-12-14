/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154514
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 += ((/* implicit */int) var_9);
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) (unsigned char)255));
    }
    for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1 - 3] = ((/* implicit */unsigned long long int) var_5);
        var_12 += (!(var_5));
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) var_0));
        arr_9 [i_1] = min((((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7)))), (((/* implicit */int) (unsigned char)0)));
    }
    for (int i_2 = 3; i_2 < 23; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */int) var_5)) - (((var_8) * (((/* implicit */int) var_4)))))) : (min((max((((/* implicit */int) var_2)), (arr_11 [i_2] [i_2]))), (((/* implicit */int) max((var_3), (arr_10 [i_2]))))))));
        var_14 += ((/* implicit */unsigned int) ((unsigned long long int) min((arr_10 [i_2]), (min((((/* implicit */unsigned char) (_Bool)1)), (var_3))))));
        var_15 += ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) arr_11 [i_2 - 3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) : (17539242254483134025ULL)))))));
        var_16 = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) (unsigned char)44)) ^ (((/* implicit */int) var_5)))))), (((/* implicit */int) var_3))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            arr_18 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_10) && (var_10))))));
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */int) var_9);
        }
        arr_20 [i_3] = ((/* implicit */_Bool) (((((-(var_8))) < (((var_5) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (unsigned char)18)) / (-906469624))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_3))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)215)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_17 [i_3])), (arr_10 [i_3]))))))));
        var_17 += ((/* implicit */int) arr_12 [i_3]);
        arr_21 [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)1))));
        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (642539188))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_13 [i_3])))))))) ? (((((/* implicit */_Bool) ((int) 9113215568308891837LL))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
    }
    var_19 |= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (16383));
    var_20 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
}
