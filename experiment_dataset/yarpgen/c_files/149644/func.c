/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149644
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
    var_13 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) 15648822721051134323ULL);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [1U] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL));
                    arr_9 [(unsigned short)12] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59879)) ? (13ULL) : (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3536317522U)) ? (7604130170099427991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) -6097142179996228699LL)) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (14669337582627828149ULL))) >> (((/* implicit */int) var_6))));
                        arr_14 [i_3 + 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (signed char)69)))));
                        arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 2512967213U)) : (arr_6 [i_3] [i_3 + 2] [i_3 + 1] [i_3 - 2])));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) ((unsigned char) 3777406491081723452ULL))) : (((/* implicit */int) ((short) (_Bool)1))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [5U] [3ULL]))) < (3489728515U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1763040072419468339ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) 3364881064U)) ? ((-(7604130170099428012ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4944758215486569297ULL))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) 3239165306U)) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (7604130170099427994ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0])))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) != (var_8))))));
                    var_17 = ((/* implicit */short) (signed char)47);
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-27), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 113549249U)) <= (4ULL)))) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_5] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= ((~(((/* implicit */int) (short)10810))))))) : (((/* implicit */int) var_3))));
                    arr_25 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (short)-3261)))))));
                    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)20803)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                }
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(-687949398))))));
                arr_26 [i_0] [1LL] [i_1] = ((/* implicit */short) ((0ULL) << (((/* implicit */int) (unsigned short)13))));
            }
        } 
    } 
}
