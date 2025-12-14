/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124492
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), ((unsigned char)10)));
                            arr_11 [i_2] [1ULL] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? ((~(5544614656717450794ULL))) : (((/* implicit */unsigned long long int) ((int) arr_5 [i_2] [i_2] [i_2] [i_2 + 1])))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_0]))) : ((-9223372036854775807LL - 1LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (long long int i_5 = 4; i_5 < 12; i_5 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) 5544614656717450802ULL))))), ((short)-14258)));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) arr_5 [i_4] [i_5] [i_5] [(signed char)4])))) : (((/* implicit */int) (unsigned short)31832))));
                var_17 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))))) ? (4398046511103LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                arr_16 [i_4] [i_5] = ((signed char) (unsigned char)0);
            }
        } 
    } 
}
