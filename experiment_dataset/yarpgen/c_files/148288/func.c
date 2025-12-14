/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148288
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
    var_19 = ((/* implicit */unsigned long long int) (short)-32757);
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 0ULL))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [14ULL] [i_0] = ((/* implicit */unsigned long long int) (short)32750);
        var_21 = ((/* implicit */unsigned long long int) (+(-2012308609)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (short)-32757))));
                        var_23 = ((/* implicit */long long int) (~((-(var_7)))));
                        var_24 = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)3))));
                        arr_15 [i_0] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) & (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_8)), (3929790587U))) | (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-18911)))))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */short) (unsigned char)67);
    }
}
