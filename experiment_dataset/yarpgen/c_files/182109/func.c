/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182109
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */int) var_5))))) ? (min((67108863U), (4227858438U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)62706), (((/* implicit */unsigned short) (short)6609))))))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10))))))) : ((+(arr_2 [i_0])))));
        var_15 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 985411343))));
    }
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((13374432087201863302ULL) | (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)43))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (268435456LL)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2])) ? (min((var_10), (((/* implicit */unsigned int) 985411343)))) : (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) arr_5 [i_1] [i_1]))))))) : (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((min((max((var_2), (((/* implicit */int) var_0)))), (((/* implicit */int) ((short) var_7))))) * (((/* implicit */int) arr_9 [i_2]))));
                    var_18 -= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)29344)), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-19068)) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) arr_4 [i_1] [i_1]))))))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_19 = ((unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */int) (short)-19068)) : (((/* implicit */int) (unsigned char)36)))) : (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)1)) + (-43409337)))));
        arr_19 [i_4] = (+(((/* implicit */int) arr_14 [i_4] [i_4] [i_4])));
    }
    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_21 [i_5 - 2] [i_5 + 1])) : (((/* implicit */int) arr_21 [i_5 - 2] [i_5 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)48)))))))));
        arr_24 [i_5] [i_5] |= ((/* implicit */unsigned char) (short)(-32767 - 1));
    }
}
