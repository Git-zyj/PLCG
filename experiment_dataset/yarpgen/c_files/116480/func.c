/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116480
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
    var_16 += max((-1), (((/* implicit */int) (_Bool)1)));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (short)32767)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_6)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0 + 3])), (arr_2 [i_0]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : ((~(((((/* implicit */_Bool) arr_2 [7LL])) ? (((/* implicit */int) (_Bool)1)) : (var_8)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_11 [i_0 - 2] [0] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 2] = ((/* implicit */signed char) arr_2 [i_0]);
                        arr_12 [i_0] [(signed char)10] [i_1] [i_0] = ((/* implicit */unsigned short) ((var_1) != (((((/* implicit */_Bool) ((-1570758278251775979LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2])))))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_4))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0 + 2] = ((/* implicit */unsigned char) ((((min((arr_7 [i_0] [(signed char)7] [i_0]), (((/* implicit */unsigned int) var_14)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_7)))))))) ^ (((/* implicit */unsigned int) ((int) (short)25915)))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_19 [i_0] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((long long int) arr_1 [i_0 + 3])))))));
                    arr_20 [i_0] [i_4] [i_0] [i_5 + 1] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (+(var_13)))), (min((((/* implicit */long long int) var_12)), (arr_6 [i_0] [i_0 + 1] [i_5] [i_0 + 2]))))), (((/* implicit */long long int) max((((arr_9 [5U] [5U] [5U] [i_5 - 3]) != (((/* implicit */int) (short)25915)))), (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_12)))))))));
                    var_19 *= ((/* implicit */short) min((min((arr_6 [i_0 + 1] [(unsigned char)9] [i_0 + 1] [i_5]), (((/* implicit */long long int) arr_2 [i_4 + 1])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 + 3])))))));
                    arr_21 [i_0] [i_0] = ((/* implicit */signed char) arr_15 [i_0] [i_4]);
                }
            } 
        } 
        arr_22 [i_0 - 1] [i_0] = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0]);
    }
    var_20 = ((/* implicit */unsigned int) var_3);
}
