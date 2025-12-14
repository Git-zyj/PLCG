/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17814
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            var_14 = ((/* implicit */signed char) var_3);
            arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1 - 2]);
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) ((_Bool) (short)1147))), (arr_7 [i_0] [i_2])));
            var_15 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-1147)), (arr_5 [i_0 - 1] [i_0] [i_0 - 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 - 4]))))) : (min((-1875197601662405219LL), (((/* implicit */long long int) (short)1147)))));
            var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)1147)) : (((/* implicit */int) (short)-1147)))))));
            var_17 = ((/* implicit */long long int) arr_7 [i_0] [i_0]);
        }
        arr_9 [i_0 + 1] [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_12 [(signed char)15] = ((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (short)29809))));
        var_18 = ((/* implicit */unsigned int) max((((6250826677106049909LL) / (arr_11 [i_3]))), (((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */_Bool) -6250826677106049912LL)) ? (((/* implicit */int) (signed char)-125)) : (-1315657029))))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (short)1147))));
        var_20 += ((/* implicit */signed char) (~(arr_10 [i_3])));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))))));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_17 [i_4] = ((((/* implicit */_Bool) var_11)) ? ((+(max((6250826677106049914LL), (var_4))))) : (((-6250826677106049900LL) & (((/* implicit */long long int) var_5)))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_13 [i_4]))));
                    arr_24 [(signed char)1] [(signed char)1] = max(((unsigned short)59584), ((unsigned short)32845));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (signed char)-115))));
        var_24 = ((/* implicit */long long int) min((var_24), (2508793086666717392LL)));
    }
    var_25 = ((/* implicit */short) min((((/* implicit */long long int) ((3600102841U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65)))))), (((long long int) var_0))));
    var_26 = ((/* implicit */unsigned short) var_12);
}
