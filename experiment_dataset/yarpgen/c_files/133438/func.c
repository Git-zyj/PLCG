/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133438
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_16)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 -= ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (+(6849027309610924193LL)))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)38563)))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) -1667123836)) ? (var_2) : (var_2))))))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_23 = ((/* implicit */signed char) (+((+(arr_3 [i_1])))));
        arr_4 [i_1] = (+(min((arr_3 [i_1]), (((arr_3 [i_1]) << (((((/* implicit */int) (unsigned short)10245)) - (10245))))))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_24 += ((/* implicit */int) var_10);
        var_25 = ((/* implicit */signed char) max((((/* implicit */int) ((short) 1667123836))), ((-(((/* implicit */int) arr_2 [i_2]))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) 17160136368140023621ULL);
                        var_27 -= ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((signed char) arr_9 [i_5])))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) min((arr_8 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) var_17))))) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) : (min((arr_13 [i_2] [i_2] [i_2] [i_2]), (var_8)))))));
        arr_16 [i_2] [i_2] = ((/* implicit */int) var_13);
    }
}
