/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138505
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
    var_17 = ((/* implicit */_Bool) (signed char)-33);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) + (-1LL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_19 |= ((/* implicit */long long int) (unsigned char)208);
            var_20 = ((/* implicit */int) (unsigned char)22);
        }
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */_Bool) 2261286069U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208))) : (18446744073709551615ULL))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2] [i_2 - 3] [i_4] [i_4])) % (((/* implicit */int) arr_10 [i_0] [i_2 - 3] [i_2 + 1] [i_3]))));
                        var_22 = ((/* implicit */long long int) ((((var_1) || (((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-95)) | (((/* implicit */int) (unsigned short)32760)))))));
                    }
                } 
            } 
        } 
    }
}
