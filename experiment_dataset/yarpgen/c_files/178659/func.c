/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178659
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_9)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((4476803809266096768LL) < (((/* implicit */long long int) ((/* implicit */int) var_18)))))))))), (max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (var_14))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_20 = ((/* implicit */int) (short)(-32767 - 1));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_0 [i_1]))))), (((arr_0 [i_2]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))));
                arr_8 [i_0] [i_1] [i_2] = (!(((/* implicit */_Bool) (-(min((-4027783472411631104LL), (((/* implicit */long long int) var_14))))))));
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [(short)1] [i_2]);
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                arr_12 [i_3] [i_1] [i_3] = (((_Bool)1) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_11 [12] [12] [i_3])))));
                var_21 = ((/* implicit */unsigned long long int) ((long long int) ((var_0) ? (arr_3 [i_0]) : (arr_3 [i_0]))));
                var_22 = ((/* implicit */unsigned short) (((-(arr_11 [i_0] [(_Bool)0] [(_Bool)0]))) < (((/* implicit */long long int) var_8))));
                arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) var_18);
            }
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                arr_16 [i_0] [i_1] = ((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4]);
                arr_17 [12U] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_4] [i_1]))), (((/* implicit */long long int) ((arr_10 [i_0] [(_Bool)1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            }
            arr_18 [i_0] [i_0] [i_1] = ((/* implicit */short) min(((((_Bool)1) ? (arr_10 [i_0] [i_0] [(_Bool)1]) : (arr_10 [i_0] [0U] [11U]))), (arr_10 [i_0] [i_1] [i_0])));
            arr_19 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_11 [i_1] [i_1] [i_0]) <= (arr_1 [i_0] [i_1]))))));
            arr_20 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((unsigned short)28), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) var_15)))))) : (arr_15 [i_0] [i_0] [i_0] [13U])));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_23 = var_18;
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-2)) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */long long int) arr_3 [i_0])) : (arr_14 [i_5] [i_5] [i_5] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) || (arr_4 [i_5] [i_5] [i_5])))))));
        }
        for (short i_6 = 4; i_6 < 14; i_6 += 1) 
        {
            arr_26 [i_0] [i_6 - 4] = ((/* implicit */unsigned int) ((short) min((arr_21 [i_0] [i_6 + 1] [i_6 + 1]), (var_18))));
            arr_27 [i_0] = ((/* implicit */_Bool) ((long long int) var_10));
        }
    }
    var_25 = ((/* implicit */long long int) var_3);
}
