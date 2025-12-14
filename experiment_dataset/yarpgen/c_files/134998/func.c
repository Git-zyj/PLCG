/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134998
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */short) ((((/* implicit */_Bool) min((((signed char) arr_0 [i_0])), (((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0 + 1])) < (((/* implicit */int) (signed char)-120)))))))) ? (((int) ((short) arr_2 [i_1 + 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 1])) && (((/* implicit */_Bool) (signed char)-107)))))));
                    var_13 ^= ((/* implicit */int) ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)-107))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    var_14 += ((/* implicit */signed char) ((long long int) arr_9 [i_5 - 1]));
                    var_15 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_3] [i_3]))));
                    var_16 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_5 - 1]))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1]))));
                    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    var_19 = ((((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1])) * (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 1])));
                }
                arr_20 [i_3] [i_3] [(signed char)0] = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
}
