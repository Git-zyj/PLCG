/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119740
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? ((-(((/* implicit */int) var_0)))) : (min((825987699), (((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_12)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) (+((-(min((var_3), (((/* implicit */unsigned long long int) var_13))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((unsigned short) 0ULL));
                            var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_3 - 1] [i_0 + 1] [i_0 - 1]))))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((var_5) - (-825987698)))) : (((unsigned long long int) var_8))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
                                arr_13 [i_0] = ((((/* implicit */_Bool) arr_10 [i_4] [i_3 + 2] [i_3] [11ULL] [i_0 - 2])) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3]))));
                            }
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3 + 1])) || (((/* implicit */_Bool) -8438541652237171492LL))))), (((short) arr_11 [i_0] [i_1]))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1]))))), (arr_5 [i_3] [i_2] [i_1] [i_0]))) : ((-(((long long int) (unsigned short)19974))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) | (((((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_6))))) * (((/* implicit */int) var_2))))));
    var_23 = ((/* implicit */long long int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) == (((long long int) var_14)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) (signed char)11)))))) > (((((/* implicit */_Bool) (short)6553)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))))))));
}
