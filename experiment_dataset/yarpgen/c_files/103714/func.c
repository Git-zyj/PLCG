/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103714
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~((~(-1757928616)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned char)88))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_3] = ((/* implicit */long long int) var_8);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) <= (arr_11 [i_0 + 3] [i_3] [i_3] [i_3 - 4] [i_3])));
                            arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2])) << (((arr_2 [i_3 - 4] [i_0 + 1]) - (994037232)))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3]) || (((/* implicit */_Bool) arr_11 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0]))));
                        }
                    }
                    arr_20 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_8))) / (arr_11 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0 + 2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), ((~(var_3)))))));
                }
            } 
        } 
    } 
    var_17 = ((((unsigned int) var_14)) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)167)))))));
}
