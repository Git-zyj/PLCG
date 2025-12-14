/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103163
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
    var_10 = ((((((long long int) var_2)) | (var_7))) - (var_2));
    var_11 = var_4;
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] |= var_5;
        arr_3 [i_0 - 2] = (((-(arr_1 [i_0]))) - (((((/* implicit */_Bool) var_1)) ? (3866141911957388611LL) : ((-(var_0))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_12 = var_0;
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_11 [i_0 - 4] [i_0 - 2] [i_0] [i_1] [i_0 + 1] [i_0 - 3]), (arr_11 [i_0 - 4] [i_0 - 2] [i_0 + 1] [i_1] [i_0 - 2] [i_0 - 3]))))));
                        var_13 = (-(((var_7) / (var_8))));
                        var_14 = arr_9 [i_1] [i_1] [i_2] [i_3];
                        var_15 = ((((arr_6 [i_1] [i_1] [i_3]) <= (var_7))) ? (3871466827463194368LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (var_6))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_16 = 261740528634392189LL;
        var_17 = var_1;
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_18 = 3871466827463194396LL;
                                var_19 = ((/* implicit */long long int) (!(((1856901164887528323LL) != ((+(2797389232620678174LL)))))));
                            }
                        } 
                    } 
                    arr_26 [i_6] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((var_6) != (((max((133955584LL), (2225059480461249125LL))) % ((+(6624046492410808639LL)))))));
                }
            } 
        } 
        arr_27 [i_4] = arr_9 [24LL] [i_4] [i_4] [i_4];
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_8 [0LL] [0LL] [0LL] [i_4]), (arr_8 [i_4] [i_4] [22LL] [i_4])))))))));
    }
}
