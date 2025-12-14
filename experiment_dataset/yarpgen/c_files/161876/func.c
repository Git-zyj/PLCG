/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161876
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = (((-(12251880003740748196ULL))) ^ (((/* implicit */unsigned long long int) var_4)));
        var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
        var_14 = ((/* implicit */unsigned long long int) var_10);
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 810789631U)) : (var_12)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) max((1488333353U), (((/* implicit */unsigned int) (unsigned short)35878)))))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 13083011784356353326ULL))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 4; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_12 [i_2] [i_3] = var_2;
            arr_13 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2777691949U)) > (arr_9 [i_2 + 3] [i_2 + 3] [i_2])));
            /* LoopNest 2 */
            for (unsigned int i_4 = 4; i_4 < 17; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((unsigned int) ((arr_9 [i_5] [i_4] [i_2]) - (arr_10 [i_5]))));
                        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_7 [i_2])) * (((/* implicit */int) (_Bool)0)))));
                        var_19 = ((/* implicit */unsigned char) var_3);
                        var_20 = ((/* implicit */unsigned long long int) (-(3678397444U)));
                        var_21 = ((/* implicit */unsigned long long int) arr_7 [i_2 - 2]);
                    }
                } 
            } 
        }
        arr_20 [i_2] [i_2] = arr_8 [i_2];
        arr_21 [i_2] = ((/* implicit */unsigned char) arr_9 [i_2] [i_2] [i_2]);
    }
    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_7);
        var_23 = (i_6 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((11ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 616569864U))))))))) || (((/* implicit */_Bool) min((min((var_12), (arr_23 [i_6]))), (((var_2) << (((arr_22 [i_6]) - (11036456149562188359ULL))))))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((11ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 616569864U))))))))) || (((/* implicit */_Bool) min((min((var_12), (arr_23 [i_6]))), (((var_2) << (((((arr_22 [i_6]) - (11036456149562188359ULL))) - (6014105622475295814ULL)))))))))));
        arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6]))) : (var_9))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)23))))))));
    }
    var_24 *= var_6;
}
