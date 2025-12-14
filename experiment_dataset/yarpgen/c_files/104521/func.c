/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104521
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
    var_14 = ((/* implicit */_Bool) (unsigned short)1929);
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(var_11)))), (min((var_12), (((/* implicit */unsigned int) (signed char)-107))))));
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned short)1929), (arr_0 [i_0])))), (min(((~(var_11))), (((/* implicit */int) max((arr_2 [i_0] [i_0]), ((unsigned short)63623))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) var_0)), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_1] [i_0])))), (((/* implicit */int) var_13))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_10))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(-266810528)))), (9497544979569907205ULL)));
            var_18 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63607)))))));
        }
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), ((unsigned short)0)))))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (var_0)))))))));
        var_21 = ((/* implicit */short) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)3105))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_8))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) 1048575ULL))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_24 -= ((/* implicit */unsigned short) var_9);
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) arr_20 [i_4]);
        arr_22 [i_4] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)59824)), (932375185U)))), (min((496LL), (((/* implicit */long long int) arr_17 [i_4])))));
    }
    var_25 -= var_8;
}
