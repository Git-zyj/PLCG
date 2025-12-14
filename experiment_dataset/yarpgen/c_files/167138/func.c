/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167138
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = 4294967295U;
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), ((-(18446744073709551615ULL)))))) ? (((/* implicit */int) ((short) ((signed char) var_5)))) : (((/* implicit */int) arr_4 [i_0] [i_1]))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-98))))) | (((/* implicit */int) ((signed char) min((((/* implicit */short) var_7)), ((short)19007)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4] [(signed char)10] = ((short) 0U);
                            /* LoopSeq 1 */
                            for (signed char i_6 = 2; i_6 < 10; i_6 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned char) 4294967295U);
                                var_21 ^= ((/* implicit */unsigned short) ((unsigned int) (short)10132));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (short)-19008))) ? (min((((/* implicit */unsigned int) var_14)), ((~(1U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                var_23 = ((/* implicit */signed char) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]);
            }
        } 
    } 
}
