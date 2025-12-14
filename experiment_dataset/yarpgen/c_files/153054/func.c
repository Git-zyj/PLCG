/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153054
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
    var_11 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [13LL] = ((/* implicit */signed char) (~(17197536377121639806ULL)));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_3] = ((/* implicit */signed char) (~(arr_12 [i_1])));
                            arr_14 [16] [i_1] [i_2 + 1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16925872941459820096ULL)) || (((/* implicit */_Bool) -6841317441830961718LL)))))) | (((min((4514494442153204559ULL), (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))));
                        }
                    } 
                } 
                var_12 += ((/* implicit */unsigned int) var_3);
                arr_15 [i_0] = arr_8 [i_0] [i_1] [(unsigned short)11] [i_1];
                arr_16 [i_0] = ((max(((+(((/* implicit */int) var_6)))), (arr_4 [i_0] [14U] [i_0]))) <= (((/* implicit */int) var_6)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        arr_19 [i_4] [i_4] = 17197536377121639806ULL;
        arr_20 [i_4 + 1] [i_4] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_3 [i_4 + 1] [i_4] [i_4])) : (var_0))), (min((17197536377121639783ULL), (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 + 2] [i_4] [i_4] [i_4])))))))))) : (arr_3 [i_4] [i_4] [i_4]));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) <= (((/* implicit */int) arr_8 [i_4 + 1] [i_4] [i_4] [i_4])))))));
    }
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((var_8), (((/* implicit */long long int) var_10)))))));
}
