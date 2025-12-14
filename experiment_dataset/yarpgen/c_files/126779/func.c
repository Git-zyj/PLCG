/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126779
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? ((~(var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_9), ((_Bool)1))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0]) % (var_3)));
        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [(unsigned char)7] [i_2] [i_0 + 1] [(unsigned short)14])) % (arr_6 [i_0 + 1] [i_3 - 3] [i_4 - 3] [i_3 - 3])));
                                var_15 -= ((/* implicit */_Bool) arr_5 [i_0] [i_2] [(unsigned short)2] [i_4]);
                                var_16 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)255)))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)6)) : (arr_6 [i_6] [5] [i_1] [i_0 + 1])))) ? (18446744073709551615ULL) : (18446744073709551606ULL)));
                                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)10321))));
                                arr_18 [i_0] [i_0] [i_0] [0ULL] [i_0] [i_0] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (unsigned char)25))))) ? ((+(((/* implicit */int) var_4)))) : (arr_12 [6] [i_0 - 1] [i_5] [i_5] [i_6]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned int) (~(((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned short) (+((~(var_10)))));
    }
}
