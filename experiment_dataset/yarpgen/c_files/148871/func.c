/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148871
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) >= ((~(arr_2 [i_0 + 1])))));
        arr_4 [i_0 + 1] = arr_3 [i_0];
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            {
                arr_9 [i_1] [i_2] [i_1] = var_3;
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    arr_14 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_1]))));
                    arr_15 [i_1] [i_2] = ((/* implicit */signed char) ((min((arr_7 [i_3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) * (11751124427745831767ULL))), ((+(arr_7 [i_1])))))));
                    var_19 = ((/* implicit */_Bool) arr_7 [i_1 + 2]);
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 660533040)) + (var_5))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [(unsigned short)8] [i_1] [i_4] [i_4] = ((((((/* implicit */int) var_14)) % (-660533040))) == (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1]))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) / ((~(660533040)))));
                    }
                }
            }
        } 
    } 
    var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3794117522478137129LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (714025967U)));
}
