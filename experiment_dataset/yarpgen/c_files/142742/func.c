/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142742
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [(unsigned char)3] [i_0] = ((/* implicit */unsigned int) max(((signed char)9), (((/* implicit */signed char) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */short) min((((((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */signed char) var_11))))) | ((~(((/* implicit */int) arr_9 [i_2] [i_1] [0ULL] [i_3])))))), ((~(((/* implicit */int) var_10))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) -429095755308771266LL);
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned char) (+(var_4))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))))) + (((/* implicit */int) ((((/* implicit */long long int) var_6)) <= (var_7))))))));
    var_14 = ((/* implicit */unsigned char) ((long long int) ((long long int) min((18446744073709551610ULL), (((/* implicit */unsigned long long int) (unsigned short)56049))))));
}
