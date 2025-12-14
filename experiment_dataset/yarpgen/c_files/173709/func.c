/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173709
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
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) max(((short)-14674), (((/* implicit */short) var_0))))))));
    var_14 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (+((-(((/* implicit */int) arr_3 [i_0 - 1]))))));
                var_16 = ((/* implicit */short) (_Bool)1);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(short)23] [(signed char)1])) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-87))))))) : (((/* implicit */int) (short)0))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */_Bool) (~((~(var_7)))));
                            arr_12 [(unsigned short)2] [(short)0] [(_Bool)1] [3U] [3LL] = ((/* implicit */unsigned short) arr_11 [4LL] [(unsigned char)4] [(_Bool)1] [2]);
                        }
                    } 
                } 
                arr_13 [18ULL] = ((/* implicit */unsigned char) (-(min((max((arr_8 [(unsigned short)21] [(unsigned short)7] [2] [(signed char)16]), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65523)))))))));
            }
        } 
    } 
}
