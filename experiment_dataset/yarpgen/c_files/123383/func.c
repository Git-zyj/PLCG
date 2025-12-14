/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123383
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
    var_13 = 18446744073709551605ULL;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = 18446744073709551615ULL;
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((1780102923U), (3696276474U)))) ? (arr_6 [i_0] [i_1] [i_2 - 2] [i_0 + 1]) : (max((((/* implicit */unsigned int) arr_2 [i_0])), (3696276467U)))))) >= ((((!(((/* implicit */_Bool) var_5)))) ? (8077720826356136663LL) : (((/* implicit */long long int) arr_5 [i_0 + 1]))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_6 [i_0] [i_0] [i_2] [i_1]), (2514864373U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))) ? ((~(2623657271020403474ULL))) : (((/* implicit */unsigned long long int) min((1780102923U), (1780102923U))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 6192560282416180228ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3696276474U)));
                        arr_11 [2] [i_3] [i_2 + 1] [i_3] = ((/* implicit */short) (+(-353861004)));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 6192560282416180225ULL))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((16190472218801307131ULL), (((/* implicit */unsigned long long int) 1780102923U)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (arr_10 [(unsigned char)3] [(_Bool)1]))), (((max((arr_14 [i_4] [i_4] [i_4] [i_1] [i_1] [i_0 + 1]), (11570636771338541795ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4])) ? (18446744073709551615ULL) : (min((arr_8 [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_9 [i_1] [i_1] [i_2] [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_1] [i_2])))))) : ((-(arr_14 [10ULL] [i_1] [i_2] [i_4] [i_4] [i_4]))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] [i_0] = ((unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_4]);
                        arr_16 [i_0] [i_1] [i_2] = arr_7 [i_0] [i_0] [i_4];
                    }
                }
            } 
        } 
    } 
}
