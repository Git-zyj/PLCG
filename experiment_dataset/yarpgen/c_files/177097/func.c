/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177097
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
    var_17 = 4611686018427387904LL;
    var_18 *= var_4;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) arr_1 [i_0 - 1]);
                arr_6 [i_0] [i_0] [i_1] = (signed char)4;
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        {
                            arr_16 [(signed char)7] = ((/* implicit */unsigned short) (unsigned char)96);
                            arr_17 [i_2] [(unsigned short)15] [i_2] [(signed char)17] [i_2 - 1] [i_2] = ((/* implicit */signed char) var_14);
                            var_19 -= ((/* implicit */unsigned short) (-(max((arr_15 [i_2 + 1]), (arr_15 [i_2 - 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_3);
                            arr_25 [9LL] [i_6 - 1] [9LL] [(signed char)8] = ((/* implicit */int) ((arr_14 [i_2] [(_Bool)1] [8LL] [18U] [i_2] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-4355437374690496870LL) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [(unsigned short)11] [(unsigned short)11] [18LL] [(unsigned short)11] [i_6])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3]))))) : (((/* implicit */int) min((((/* implicit */short) arr_18 [i_2 - 1] [9LL] [16LL])), (arr_12 [i_2] [i_2]))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2] [(unsigned short)7] [(signed char)17] [i_2])) ? (var_8) : (((/* implicit */int) var_2))))), (18446744073709551615ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
