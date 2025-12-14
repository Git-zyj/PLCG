/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104127
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((arr_1 [i_0]), (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) min((arr_6 [i_3]), (((/* implicit */unsigned long long int) (signed char)0))))))));
                            var_16 &= ((/* implicit */signed char) arr_1 [i_0]);
                            arr_8 [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [(signed char)6] [i_3])) ? (((/* implicit */int) var_0)) : (-1))))) != (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                var_17 = ((max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_5))))), (max((7599530314792334029LL), (((/* implicit */long long int) -15)))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 413426034)) ? (-413426051) : (1)))));
                var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_7 [i_0] [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? ((-(((/* implicit */int) arr_14 [i_0])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 2211848691U)))))))));
                            arr_15 [i_0] [i_1] [i_4] [i_5] = ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_1 + 2]))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_1 - 2])) < (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 2]))))) : (((((/* implicit */_Bool) arr_14 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 2] [i_5])) : (((/* implicit */int) var_9)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_11);
    var_21 = var_0;
}
