/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132542
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
    var_10 = var_9;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [0ULL] [i_0]))));
        var_12 = ((/* implicit */unsigned char) var_8);
        var_13 = ((/* implicit */short) (_Bool)1);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) max((var_7), (var_5))))))));
        var_14 -= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_3 [i_1])))), (max((min(((_Bool)1), ((_Bool)1))), ((((_Bool)1) && (((/* implicit */_Bool) (short)28884))))))));
        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (((~(((/* implicit */int) var_9)))) > (((/* implicit */int) arr_0 [i_1] [i_1]))))), (var_3)));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((signed char) var_1)))), ((+(((/* implicit */int) var_9))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])) ^ (((/* implicit */int) (short)-30228)))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_1] [i_1])))))));
        }
        for (signed char i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                arr_13 [i_4] = ((/* implicit */unsigned short) (signed char)-1);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_1)), (var_4))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1])), (arr_10 [i_1] [i_3] [9ULL])))))))) ? (arr_6 [i_3] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (min((((/* implicit */long long int) ((short) var_9))), (var_4))))))));
        }
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) min((var_8), (((/* implicit */short) (_Bool)1)))))))));
}
