/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126334
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
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((unsigned short) 833459846715362239LL));
                                var_13 += ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = (+(max((arr_6 [i_0] [i_1]), (arr_6 [i_1] [i_2]))));
                    arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((1073741823ULL) - (11ULL)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(28ULL))))))));
                    var_14 *= ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0])))));
                    var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)28320)))) ? (18446744073709551615ULL) : (((18446744073709551615ULL) >> (((((/* implicit */int) (unsigned short)65535)) - (65532)))))));
                }
            } 
        } 
        var_16 *= ((/* implicit */unsigned int) max((((2969922097474824125ULL) << (((/* implicit */int) (_Bool)0)))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [(unsigned short)11]))));
        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_0 [i_0]) < (arr_0 [i_0]))))));
        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])) ? (var_9) : (((/* implicit */unsigned int) arr_1 [i_0] [19LL])))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_0]))))));
    }
}
