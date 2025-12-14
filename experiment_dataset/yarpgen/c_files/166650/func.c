/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166650
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
    var_17 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (max((arr_0 [i_0]), (var_12))) : (((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))), ((-(var_3)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_1]))));
        var_21 = ((/* implicit */unsigned char) (+(var_16)));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_22 = ((/* implicit */long long int) var_12);
        arr_9 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) max(((-(((/* implicit */int) arr_8 [i_2])))), ((+(var_12)))))), (min((((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))))), (((/* implicit */long long int) arr_0 [i_2]))))));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) arr_0 [i_4]);
                    var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 503678663)) ? (316366008U) : (((/* implicit */unsigned int) 1508556635))))), ((~((~(var_8)))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
        arr_17 [i_2] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)20630)), (-4270906364584995175LL)));
    }
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [4U]), (var_1))))) : (arr_20 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_5] [i_5]), (arr_3 [i_5] [i_5]))))) : (arr_20 [i_5])));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_20 [i_5]))));
    }
    for (short i_6 = 1; i_6 < 18; i_6 += 4) 
    {
        var_26 = ((/* implicit */signed char) var_8);
        var_27 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_23 [i_6]), (arr_23 [i_6]))))));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (var_8) : (((/* implicit */long long int) min(((-(var_16))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_6]))))))))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_6]))))), (min((((/* implicit */unsigned int) arr_2 [i_6] [i_6])), (var_11)))))) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) var_5)))))))))))));
    }
}
