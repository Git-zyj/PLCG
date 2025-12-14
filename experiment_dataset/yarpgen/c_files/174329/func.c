/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174329
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
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25791))) % (-3258293513874868839LL)));
                    arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_1 [i_1])))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((_Bool) arr_1 [i_0])), ((!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1] [i_2 - 1]))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_2 - 2] [i_2 - 2] [i_1 - 1]);
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (-7982205991696393655LL));
    var_22 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_3 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 768931462))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_0))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (short)2048))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((min((229376ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1444197460))))))) | (((/* implicit */unsigned long long int) ((unsigned int) 4294967276U))))))));
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) 8294627171465537518ULL)))));
                }
            }
        } 
    } 
}
