/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181528
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
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_5)))), (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (signed char)98))))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == ((+(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) (signed char)-50)) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = var_4;
                                var_14 += ((/* implicit */signed char) ((_Bool) (short)-15497));
                                arr_12 [18U] [(unsigned short)9] [(unsigned short)1] [(unsigned short)2] [(unsigned short)11] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)32))));
                                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)123)) | (((/* implicit */int) (unsigned char)76)))) ^ (((/* implicit */int) arr_6 [i_1] [i_4 - 1]))));
                                var_16 -= ((/* implicit */unsigned short) arr_5 [i_4] [(_Bool)1] [(short)15] [(unsigned char)1]);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-1319)), ((unsigned short)63757))))));
                    arr_14 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)25931))));
                    arr_15 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((short) 912949958U))) * (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-32756)), (var_5))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned short) (short)-32756);
        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_5])) <= (((/* implicit */int) (signed char)0)))))))));
    }
}
