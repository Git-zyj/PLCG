/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114018
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (((long long int) (-(4294967295U))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned int) var_6);
                    arr_11 [i_0] [(signed char)12] [2ULL] [15] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_18 [i_2] [18LL] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31))))) ? (min((((/* implicit */int) var_7)), (var_4))) : (((((/* implicit */int) (unsigned short)65266)) / (var_4))))) * (((/* implicit */int) arr_3 [i_4]))));
                                arr_19 [i_0] [i_3] [12ULL] = ((/* implicit */long long int) (unsigned short)63112);
                                arr_20 [i_4] [i_4] [i_4] [i_0] [i_4] [i_4] [i_4] = max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (14065718562557247466ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)297))) % (arr_4 [i_0] [i_1 - 2] [i_4]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2] [i_3] [(signed char)17]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
