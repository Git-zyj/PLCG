/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189517
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_6 [(unsigned char)1] [2U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_0] [i_2 - 1] [i_0] [i_0])))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    arr_7 [i_2] [i_2 + 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_2 [i_1] [i_2 - 1])), (var_4)))))) ? (((unsigned long long int) -2089230240)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2089230233)) ? (-2089230240) : (((/* implicit */int) (unsigned short)27911)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                var_13 = ((/* implicit */short) max((((/* implicit */unsigned short) ((arr_12 [i_3] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_4])))))), (min(((unsigned short)5922), (((/* implicit */unsigned short) arr_9 [i_3] [i_4]))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_14 = ((int) (!((!(((/* implicit */_Bool) var_2))))));
                            arr_18 [i_3] [18LL] [18LL] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1096661651530050253LL)) ? (((/* implicit */int) (short)19123)) : (((/* implicit */int) (signed char)76)))))));
                            arr_19 [i_3] [i_4] [i_5] [i_6] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((var_0), (-2089230225))) : (((int) var_7)))), ((~(((/* implicit */int) arr_9 [i_4] [i_5])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((2089230240) / (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((unsigned short) var_8)))))) : (max((((((/* implicit */int) (short)-19137)) & (((/* implicit */int) (signed char)27)))), (((/* implicit */int) max(((short)12879), (((/* implicit */short) (signed char)127)))))))));
}
