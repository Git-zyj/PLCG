/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168576
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            var_10 -= arr_1 [i_2];
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((long long int) (unsigned char)202)))));
                        }
                        arr_15 [0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)39351))));
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_9 [i_0] [7LL]))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) -2422354645936577913LL);
    }
    var_13 = ((/* implicit */short) (_Bool)1);
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
