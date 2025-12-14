/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150326
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
    var_10 ^= var_5;
    var_11 = ((/* implicit */short) (~(((unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (short)-20743);
                arr_7 [(short)11] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6446742088212055513LL)) ? (-6446742088212055538LL) : (3182641902701658437LL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) arr_5 [(signed char)14] [(signed char)8] [i_0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -21LL)) ? ((-(8273230379772214975LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)83)))));
                        var_13 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [5LL] [i_3 + 1] [(unsigned short)9] [i_1 + 1] [i_0]))));
                        arr_14 [i_0] [i_1 + 1] [(unsigned short)17] [(short)6] &= ((/* implicit */_Bool) var_8);
                    }
                    for (short i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                        arr_17 [i_4] = ((/* implicit */unsigned char) ((-21LL) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_6)) != (6446742088212055511LL)))))));
                        var_15 = ((/* implicit */unsigned short) 6446742088212055559LL);
                    }
                    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5)))));
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [15LL] [i_1 + 1] [i_1 + 1])) ? (arr_16 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6446742088212055543LL)) ? (1676043666046246689LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -6446742088212055540LL)) ? (6446742088212055490LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97)))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) (~(max((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))));
    var_20 = ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
}
