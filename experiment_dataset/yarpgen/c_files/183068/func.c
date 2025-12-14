/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183068
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((signed char) var_17));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [10] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_0 [i_0]) << (((arr_0 [i_0]) - (3349676129U)))))) * (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                        var_21 += ((/* implicit */short) var_18);
                    }
                } 
            } 
        } 
    }
}
