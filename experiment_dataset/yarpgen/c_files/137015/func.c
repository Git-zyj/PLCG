/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137015
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
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((((/* implicit */int) min((var_12), (((/* implicit */short) (signed char)-48))))) > ((-(((/* implicit */int) arr_2 [(_Bool)1] [i_1] [(_Bool)1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) ((4507534895680894696ULL) + (((/* implicit */unsigned long long int) var_11)))))))));
                    var_17 += ((/* implicit */signed char) ((2123240526) > (((/* implicit */int) (signed char)63))));
                }
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (int i_4 = 4; i_4 < 9; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) arr_7 [i_1] [(unsigned char)1] [i_3] [(_Bool)1]);
                            arr_12 [i_0] [i_3] [i_1] |= ((((/* implicit */int) ((arr_3 [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-48))))));
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (13939209178028656923ULL)));
                            var_20 = 13939209178028656917ULL;
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) var_10);
            }
        } 
    } 
    var_21 = (+(((/* implicit */int) ((567453553048682496LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224)))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((max((-2123240538), (((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_2))))))) < (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) | (13939209178028656919ULL))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
}
