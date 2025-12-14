/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124063
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 -= (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) == (((arr_0 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((int) arr_2 [12ULL] [12ULL])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 19; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 4; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) ((short) ((arr_8 [i_5 - 2] [i_2]) | (arr_8 [i_3] [i_2]))))) >= (((/* implicit */int) ((signed char) ((signed char) arr_7 [i_2]))))))));
                            var_16 ^= ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
                            arr_17 [i_2] [i_2] [6LL] [i_2] [i_2] |= ((/* implicit */int) (~((+(((unsigned int) arr_8 [(unsigned short)0] [(unsigned short)0]))))));
                            arr_18 [i_5] [i_5] [i_3] [(unsigned short)5] [i_5] [i_5] = ((/* implicit */short) ((((((unsigned int) arr_7 [i_4])) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2] [i_2]))))))) || (((/* implicit */_Bool) arr_6 [i_2] [i_3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (int i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */signed char) arr_11 [i_6] [i_3] [i_2]);
                            var_18 += ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2]))) == (arr_20 [i_2 + 2] [i_7])))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) (-(arr_20 [i_2] [i_2])));
            }
        } 
    } 
}
