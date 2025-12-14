/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16176
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */signed char) var_3);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_1] = ((/* implicit */signed char) max((((/* implicit */short) (_Bool)1)), (((short) (short)30101))));
                            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_1] [i_3 - 1] [i_3])) ^ ((+(((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) var_13))), (((long long int) ((unsigned long long int) 2886261164U)))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (long long int i_5 = 1; i_5 < 24; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((unsigned int) var_9))), (((unsigned long long int) -24442674)))), (((/* implicit */unsigned long long int) max((var_11), (arr_15 [i_5 - 1]))))));
                arr_17 [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned int) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) ((arr_12 [(unsigned char)11] [i_5 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))))))))));
                var_21 = ((/* implicit */signed char) var_8);
                arr_18 [i_4] [i_4] = ((/* implicit */signed char) -24442676);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 10; i_6 += 3) 
    {
        for (signed char i_7 = 2; i_7 < 9; i_7 += 4) 
        {
            {
                arr_23 [i_6 - 1] [i_7] = ((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) arr_15 [i_6])), (var_13))) + ((-(var_13))))) & (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) -863838135)) : (2886261164U))))));
                arr_24 [i_7] [(signed char)7] [(_Bool)1] = ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? ((~(min((((/* implicit */long long int) (short)1023)), (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -6441289379512555371LL))) && ((!(((/* implicit */_Bool) (unsigned char)255)))))))));
            }
        } 
    } 
}
