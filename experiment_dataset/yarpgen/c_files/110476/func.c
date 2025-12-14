/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110476
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((var_9) != (max((arr_2 [i_1]), (var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [7ULL] [i_0] [i_0])) ? (arr_6 [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 32767U)))))));
                    var_16 = ((/* implicit */unsigned int) ((((max((var_9), (((/* implicit */unsigned long long int) arr_3 [i_0])))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 682071187U)) / (var_8)))))) & (arr_7 [i_0] [i_2] [i_1] [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_20 [i_5] [i_5] [i_6] [i_6] [9ULL] [i_3 - 1] = (((~(((var_9) * (((/* implicit */unsigned long long int) 0LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            arr_21 [i_3] [i_6] [i_6] [i_3] = ((/* implicit */long long int) (-(var_5)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_9 - 1] [i_4 + 2])), (arr_23 [i_7 - 3]))))));
                                arr_33 [i_9] [3U] [i_3] [i_3] = ((((var_2) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_25 [i_9] [i_8 + 1] [i_3 + 1]))))) * (((((var_13) != (var_13))) ? (((/* implicit */unsigned long long int) max((arr_28 [i_4] [i_4] [i_4]), (var_8)))) : (((var_15) / (((/* implicit */unsigned long long int) 1587951326U)))))));
                                arr_34 [i_9] [i_8] [i_7] [i_4 - 1] [3U] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_18 [i_9] [i_8] [i_7] [i_3 - 2] [i_4] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)65)) << (((((var_3) + (1807766573962575191LL))) - (3LL)))))) : (min((arr_13 [i_7]), (((/* implicit */unsigned long long int) arr_10 [i_7] [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((var_14) & (5127770222176493830LL))) : (((((/* implicit */long long int) 1587951334U)) % (2924893635649547810LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
