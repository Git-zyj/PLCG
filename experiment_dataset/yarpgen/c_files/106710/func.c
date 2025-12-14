/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106710
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) (short)-7053)))) / (((/* implicit */int) (short)(-32767 - 1)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_0] = ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)23)))) / (((/* implicit */int) arr_7 [i_0])))));
                        var_20 = (+((+(((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
                        var_21 = ((/* implicit */signed char) ((unsigned int) min((-706580258736231449LL), (((/* implicit */long long int) (signed char)-23)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 24; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */int) var_18);
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) - ((-(((/* implicit */int) arr_0 [i_0]))))));
                        }
                        arr_14 [i_3] [(unsigned short)13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_3])) ? (arr_12 [0ULL] [i_1] [i_1 + 3] [i_1]) : (((/* implicit */int) arr_10 [(unsigned short)11] [i_0] [i_0] [i_0] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)22)), (arr_7 [i_1]))))) : (((((/* implicit */_Bool) var_8)) ? (arr_2 [7ULL]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32761))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(781394014679478334LL)))))));
        arr_16 [i_0] = max(((+(((unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((short)32760), ((short)-32761))))))));
    }
    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_18))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (((/* implicit */unsigned short) (signed char)46))))))))));
    var_25 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-32759)) ? (12468275886414062517ULL) : (0ULL)))))));
    var_26 = ((/* implicit */signed char) (+(10ULL)));
}
