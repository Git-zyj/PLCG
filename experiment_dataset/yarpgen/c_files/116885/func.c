/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116885
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [10U]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_5)))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (short)-31082)) != (((/* implicit */int) var_9))))));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (var_0)))))))) * ((~(var_5)))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(2767416022U)))) ? (((((/* implicit */_Bool) (signed char)87)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (signed char)16)))))))), (((/* implicit */unsigned int) ((var_5) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) (signed char)-114))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (((~(min((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_3]))))) + (((/* implicit */long long int) max((((/* implicit */int) (short)-25886)), (((((/* implicit */int) var_4)) % (((/* implicit */int) var_4)))))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(max(((-(0U))), (((/* implicit */unsigned int) var_4)))))))));
                arr_13 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(var_1)))), ((((!(((/* implicit */_Bool) arr_9 [i_2] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_2 [i_2 - 1] [i_3]))))) : (0LL)))));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    arr_17 [i_2 - 1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) arr_1 [i_2 + 1]);
                    var_15 |= ((/* implicit */short) var_3);
                    var_16 = ((/* implicit */unsigned long long int) ((var_10) ^ (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */signed char) var_4)), (arr_11 [i_3] [i_4])))), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_8)) : (arr_3 [i_2 + 1] [i_3] [i_3]))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)1] [i_3] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (arr_3 [i_2] [i_2 + 1] [i_2 + 1])))) ? (arr_3 [i_2] [i_2] [i_2 - 1]) : ((~(((/* implicit */int) var_9))))));
                }
            }
        } 
    } 
}
