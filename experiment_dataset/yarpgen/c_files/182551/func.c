/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182551
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
    var_15 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))));
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = var_7;
        arr_4 [i_0 - 1] |= min((min((((/* implicit */long long int) var_2)), (arr_2 [i_0 + 2]))), (((/* implicit */long long int) (~(1335644830U)))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_11 [7ULL] [i_1] [i_2] = ((/* implicit */short) var_5);
                    arr_12 [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) min((min((arr_2 [i_0 - 2]), (arr_2 [i_0 - 2]))), ((((_Bool)1) ? (arr_2 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    arr_13 [i_0] = ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 2] [i_1 + 2] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_20 [i_1] [i_4] [(signed char)1] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_17 [i_1 - 1] [(signed char)8] [i_2 + 1] [i_4 - 3] [(signed char)8] [i_4 + 1] [i_4 - 2]), (((/* implicit */short) arr_19 [i_2 + 1] [(short)11] [i_2 + 1] [i_3] [i_2 + 1] [i_4 - 3]))))), (((((/* implicit */int) arr_17 [i_1 + 3] [i_1] [i_2 + 1] [i_3] [i_4] [i_4 - 4] [i_1])) & (((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 1] [i_2 + 1] [i_2] [i_4] [i_4 - 2] [23]))))));
                                arr_21 [i_0] [(unsigned short)18] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) arr_2 [i_1 + 2]);
                                arr_22 [7U] [i_1] [i_4] [(unsigned short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1 - 1] [i_0 - 2])) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_19 [i_4 - 2] [i_1] [i_2] [i_2] [i_4] [i_1])), (var_8))))));
                                arr_23 [(unsigned short)4] [8ULL] [i_2] [i_4] [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((var_14), (var_14)))) != ((~(((/* implicit */int) (unsigned char)245))))))) * (((/* implicit */int) var_9))));
                                arr_24 [i_0] [i_3] [i_3] [22U] [18ULL] [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_1])) < (((/* implicit */int) var_1))))), (arr_2 [i_1]))), (((/* implicit */long long int) (signed char)-43))));
                            }
                        } 
                    } 
                    arr_25 [(_Bool)1] [i_0] [i_0] [i_0] = (~(2959322477U));
                }
            } 
        } 
    }
    var_17 &= ((/* implicit */unsigned short) var_6);
}
