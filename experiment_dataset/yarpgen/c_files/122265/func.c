/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122265
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
    var_10 = var_9;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 |= ((/* implicit */long long int) (_Bool)1);
                                arr_15 [20ULL] [i_1] [20ULL] [(signed char)9] [i_1] = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                } 
                var_12 |= ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned long long int) max((min(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))), ((~(((/* implicit */int) ((948046948) < (((/* implicit */int) arr_16 [(unsigned short)14] [i_1] [i_1])))))))));
                            var_13 = (signed char)105;
                            var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 0ULL))) ? (7268695872253992362LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) < (min((((/* implicit */unsigned long long int) arr_8 [i_6 - 1] [i_0 + 1] [i_0 - 1])), (((((/* implicit */_Bool) (short)-24865)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_14 [i_6 - 2] [8ULL] [i_0 + 1] [i_0 - 3] [i_0])), (arr_3 [i_0])));
                            var_15 -= ((/* implicit */signed char) ((min((max((arr_3 [(_Bool)1]), (((/* implicit */unsigned int) (unsigned char)238)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)237))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = var_0;
}
