/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172095
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
    var_14 = ((/* implicit */unsigned char) 15798686897992131720ULL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((arr_2 [i_0]), (((/* implicit */long long int) var_9))))))) % (min((2648057175717419883ULL), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)35)), (arr_5 [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5578))) != (arr_9 [i_4] [i_3] [i_1])));
                            arr_15 [i_3] [i_0] [i_1] = ((/* implicit */signed char) (-((~(((/* implicit */int) min(((short)-32762), (((/* implicit */short) (signed char)-112)))))))));
                        }
                    } 
                } 
            } 
        }
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-121))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((var_12), (((/* implicit */unsigned int) arr_14 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2648057175717419883ULL)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) var_0))))) ? (min((((/* implicit */long long int) var_13)), (arr_2 [i_0]))) : (((/* implicit */long long int) var_4))))));
    }
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) 15798686897992131703ULL))));
    var_19 = ((/* implicit */_Bool) var_2);
}
