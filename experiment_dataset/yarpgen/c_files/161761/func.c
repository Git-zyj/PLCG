/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161761
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 *= ((/* implicit */signed char) (+(((/* implicit */int) ((((0ULL) | (((/* implicit */unsigned long long int) -9223372036854775806LL)))) == (((/* implicit */unsigned long long int) var_12)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_9 [i_1 + 1]), (arr_9 [i_1 - 1])))) - (((/* implicit */int) (unsigned short)16953))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    arr_13 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) var_12);
                    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) -639766196)) && (((/* implicit */_Bool) arr_1 [i_1 - 2]))));
                    arr_14 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1330297805U))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (short i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] = (short)-11553;
                            arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((841969883785790194LL) != (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1 - 1] [i_1])))))) - (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (8458396880721378596LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((int) var_1);
}
