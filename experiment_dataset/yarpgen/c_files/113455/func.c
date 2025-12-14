/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113455
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
    var_10 &= ((/* implicit */signed char) (short)14369);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_3] [i_3 + 2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (_Bool)0))))) ? ((~(((arr_9 [i_1] [(short)2] [i_1 + 2] [i_1 + 1] [i_1]) >> (((((/* implicit */int) (short)-14369)) + (14413))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)30037))))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned short)26656)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))))));
                            var_11 ^= ((/* implicit */short) ((unsigned long long int) (-(7441566435348999261ULL))));
                            var_12 = ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
                arr_11 [i_0] [2ULL] [i_0] |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_4)))))));
                arr_12 [(unsigned char)1] [i_0] [(unsigned char)1] = max((((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14370))) % (arr_9 [i_0] [1LL] [i_0] [19LL] [19LL])))))));
                var_13 = (_Bool)1;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_9);
}
