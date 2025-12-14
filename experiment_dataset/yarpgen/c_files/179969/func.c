/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179969
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((unsigned char) max((var_6), (((/* implicit */unsigned short) arr_0 [i_0]))))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) / (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) var_10);
        var_17 = ((/* implicit */signed char) ((unsigned short) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)97)) ? ((+(((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_0 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_4 [(signed char)1] [(signed char)1])))), (((int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned char)67)))))));
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2]))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (arr_13 [i_6] [i_6] [i_6]))) / (var_4))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)75));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_13 [i_4] [i_6] [i_7])))) ? (((/* implicit */int) ((arr_13 [i_4] [i_6] [i_7]) != (arr_13 [i_4] [i_6] [i_7])))) : (((/* implicit */int) (!((_Bool)0))))));
                        }
                    }
                } 
            } 
        } 
        var_24 = (((-((~(var_3))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_25 = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) (unsigned char)183)))))), (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) && (var_9))))));
}
