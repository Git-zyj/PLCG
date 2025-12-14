/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108931
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)6] [i_1 + 1] [i_2]))) : (2800569498U))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) / (((/* implicit */int) var_4))))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_0]) : (var_0)))), (((unsigned int) (short)0))))));
                    arr_10 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_0] [i_2])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_2]))))));
                    arr_11 [(short)6] |= ((/* implicit */unsigned long long int) (~(max((((944906163518038409LL) | (((/* implicit */long long int) var_0)))), (((((/* implicit */_Bool) var_10)) ? (-3265057999618668101LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) 24U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-82))) : (-2929343511888725137LL)))));
    var_12 ^= ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        {
                            arr_21 [i_3 - 2] [i_4] [i_5] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 2] [i_3 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_3 - 3] [i_3 - 2] [1LL])) : (((/* implicit */int) arr_15 [(signed char)19] [i_3 - 1] [(short)3]))))) : (min((var_8), (((/* implicit */unsigned int) arr_15 [i_3] [i_3 - 2] [i_3 + 1]))))));
                            var_13 = ((/* implicit */short) var_7);
                            arr_22 [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((arr_13 [i_3] [i_3 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_4]))))))));
                            arr_23 [i_3 + 1] [i_3] [(unsigned char)19] [i_6] = ((/* implicit */signed char) ((((unsigned long long int) var_4)) * (((/* implicit */unsigned long long int) (-(var_5))))));
                            var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_7) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-6))))) : (var_8)));
                        }
                    } 
                } 
                var_15 += ((/* implicit */unsigned int) 3265057999618668104LL);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_0);
}
