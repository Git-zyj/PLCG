/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174066
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
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [0U] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2])))))));
                var_12 ^= (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)73)), (var_4))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    arr_9 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1])) % (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1])) * (((/* implicit */int) arr_3 [i_1] [i_1])))));
                    var_13 = ((/* implicit */unsigned short) (_Bool)0);
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_2))));
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(max((arr_4 [18U]), (arr_4 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_4] [i_0] [i_0] [i_5] [i_3] [(unsigned short)12] &= ((/* implicit */unsigned long long int) (_Bool)0);
                                arr_17 [i_1] [i_1 + 1] [i_3] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_3] = ((/* implicit */unsigned int) var_11);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 19; i_6 += 1) 
    {
        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) var_3);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min(((-(var_4))), (((/* implicit */unsigned long long int) arr_1 [8ULL] [(signed char)23]))));
                            var_18 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6 - 3]))))) >= (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) (-(arr_24 [i_7 - 1] [i_6 - 1] [i_6])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((var_1) * (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_7 - 1] [i_7]))) & (var_4)))))))));
            }
        } 
    } 
}
