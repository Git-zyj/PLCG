/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172171
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 - 1])) << (((/* implicit */int) (!(((/* implicit */_Bool) 976263864U)))))));
                                arr_14 [i_4] [i_4] [i_4] [i_4] [15ULL] [i_1] [i_4] = ((/* implicit */int) ((unsigned short) ((signed char) ((737639450) / (((/* implicit */int) var_5))))));
                            }
                            arr_15 [i_0] [i_1] [i_1] = ((/* implicit */short) (-(min((((/* implicit */long long int) 737639444)), (((-5156842158003089394LL) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (~(min((((long long int) 4688048424998381068ULL)), (((-5156842158003089387LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))))))));
                            var_14 = (unsigned char)255;
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) 1820636124)));
                var_16 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4140199538390371111ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1]))))) + (min((((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), ((+(14306544535319180493ULL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~(var_3)));
    var_18 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_9)) / (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_6))))));
    var_19 = ((/* implicit */unsigned short) var_7);
}
