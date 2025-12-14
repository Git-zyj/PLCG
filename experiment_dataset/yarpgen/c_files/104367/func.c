/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104367
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
    var_15 &= ((/* implicit */int) max((var_14), (4200109608532880755ULL)));
    var_16 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) 36841762U)) / (var_3))) >= (((/* implicit */unsigned long long int) ((var_7) >> (((((/* implicit */int) var_8)) + (94)))))))) ? (max((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) : (var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned char)159)), (36841762U))) >= (var_2)))))));
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (var_12))))) != (var_4))))) >= (var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [(unsigned short)18] [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)-15644)))) - (((((/* implicit */_Bool) ((var_11) - (((/* implicit */long long int) ((/* implicit */int) (short)24995)))))) ? (((/* implicit */int) arr_1 [14LL])) : (((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2])), (arr_0 [i_2]))))))));
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 4251127439U)), (-8444452264607507651LL)));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) var_14);
                    arr_11 [i_0] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [6LL] [i_1] [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((((/* implicit */_Bool) (unsigned short)59713)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_0] [i_2]))))))), ((-(((((/* implicit */_Bool) arr_2 [i_0] [5U])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned short)0])) : (var_14)))))));
                }
            } 
        } 
    } 
}
