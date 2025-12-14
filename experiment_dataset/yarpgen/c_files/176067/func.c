/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176067
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */short) ((long long int) max(((signed char)-1), (((/* implicit */signed char) arr_2 [i_1])))));
                var_20 -= ((/* implicit */signed char) ((((/* implicit */int) ((13835058055282163712ULL) != (arr_4 [i_0])))) == ((~(((/* implicit */int) arr_2 [i_1]))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] [(short)19] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned long long int) min((256121430), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (signed char)0)))))))));
                    arr_10 [i_2] [i_1] [i_0] = var_14;
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */int) ((-119063689) == (((/* implicit */int) var_18))))))))));
}
