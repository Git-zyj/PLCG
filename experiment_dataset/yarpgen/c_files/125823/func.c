/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125823
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
    var_13 = ((((/* implicit */_Bool) -5882718460446296640LL)) ? (var_7) : (max((9175778397785940676LL), (((var_8) & (var_6))))));
    var_14 = min((((((/* implicit */_Bool) var_6)) ? (var_9) : (min((5882718460446296639LL), (5882718460446296627LL))))), (var_0));
    var_15 = var_3;
    var_16 = min(((~(var_2))), (((long long int) var_12)));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_17 ^= ((((/* implicit */_Bool) min((((arr_2 [12LL]) ^ (arr_1 [i_0]))), (var_4)))) ? (arr_0 [10LL]) : (-5882718460446296639LL));
        arr_3 [0LL] |= ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((long long int) 5882718460446296640LL)) : (5882718460446296639LL)));
        arr_4 [i_0] = ((long long int) ((arr_2 [i_0]) / (arr_2 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_18 = min((arr_1 [i_1]), (((long long int) ((arr_1 [i_1]) < (9223372036854775807LL)))));
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            var_19 = ((long long int) ((long long int) arr_2 [i_1]));
            var_20 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) min((var_9), (arr_1 [i_1])))) ? (min((arr_8 [i_1] [i_1]), (var_11))) : (2236800011471289083LL))) : (((((((/* implicit */_Bool) 1559631534174509403LL)) ? (arr_7 [i_1] [i_1]) : (16382LL))) ^ (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_7) : (arr_6 [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_21 = 738142483019394570LL;
                            var_22 |= ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_4 + 1])) ? (arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (-5916749547345176715LL));
                            var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3791422002951445864LL)) ? (-3896661235397064394LL) : (arr_19 [8LL] [8LL] [i_4])))) ? (arr_0 [12LL]) : (-2750671219340655456LL));
                            var_24 = -1559631534174509411LL;
                            var_25 = ((long long int) arr_11 [i_1] [i_1] [2LL]);
                        }
                    } 
                } 
            } 
            var_26 &= var_0;
            arr_20 [i_1] = (~(var_9));
        }
    }
    for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        arr_23 [i_7] &= ((((/* implicit */_Bool) max((2236800011471289066LL), (min((1020088347071126721LL), (arr_21 [i_7] [i_7])))))) ? (((((/* implicit */_Bool) -738142483019394552LL)) ? (arr_22 [i_7] [i_7]) : (arr_22 [i_7] [i_7]))) : (1099510579200LL));
        var_27 ^= arr_22 [i_7] [i_7];
        var_28 = ((((/* implicit */_Bool) min((arr_21 [i_7] [i_7]), (arr_21 [i_7] [i_7])))) ? (((long long int) 9223372036854775781LL)) : (arr_21 [i_7] [i_7]));
    }
}
