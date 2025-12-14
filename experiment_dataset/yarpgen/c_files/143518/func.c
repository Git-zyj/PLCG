/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143518
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
    var_18 = ((/* implicit */int) (-(((((((/* implicit */long long int) var_4)) <= (3685585379519774436LL))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) -1567644846))))));
    var_19 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = min((((/* implicit */unsigned long long int) (!(arr_9 [i_0] [i_0])))), (arr_5 [i_0] [i_1]));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */short) max((1567644846), (1567644846)));
                        var_22 = ((/* implicit */short) (((~((-(15003241105031789909ULL))))) & (((/* implicit */unsigned long long int) 1567644837))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) (+(var_16)));
                                var_24 = ((/* implicit */_Bool) min((var_24), (arr_2 [i_4 + 1] [i_4 - 1])));
                                var_25 = ((/* implicit */unsigned long long int) -1567644841);
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((_Bool) (-(-1567644831)))), (((arr_4 [i_1] [i_0]) && (var_11)))));
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) ((15003241105031789915ULL) >= (((/* implicit */unsigned long long int) -1567644846))))))));
                }
            } 
        } 
        arr_21 [(short)10] |= ((/* implicit */_Bool) var_9);
        arr_22 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) min((max((var_12), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))), ((-(var_8))))));
        arr_23 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))))) * (((/* implicit */int) ((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) var_7))))))));
    }
    var_26 = ((/* implicit */short) ((((unsigned long long int) ((unsigned int) var_6))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) >= (((/* implicit */unsigned long long int) var_1))))))));
}
