/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102586
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
    var_18 = max((((long long int) var_4)), ((~(((long long int) 3857627945112866997LL)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = (-(((long long int) 9223372036854775807LL)));
        var_19 = (-((~(var_0))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2 + 1] = min(((~(((long long int) -5785557914526800378LL)))), (((long long int) var_2)));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_20 = ((long long int) 114589987593869490LL);
                        arr_13 [i_3] [i_3] = ((long long int) (-((-(70351564308480LL)))));
                        var_21 = ((long long int) (!(((/* implicit */_Bool) -114589987593869489LL))));
                        var_22 = min(((-(var_12))), ((~(-3857627945112867024LL))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((114589987593869488LL), (-7205375233921196243LL)))))))));
                    }
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        var_24 = ((long long int) (-(var_12)));
                        var_25 = (-((+(2353695862306772389LL))));
                        var_26 = ((long long int) min((arr_14 [i_2] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 1]), (arr_9 [i_1 - 1] [i_4] [i_4] [i_4 - 1])));
                    }
                }
            } 
        } 
    }
    for (long long int i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = (-((+(-114589987593869482LL))));
        var_27 = min(((~(4181739848859923359LL))), ((~(((long long int) arr_4 [i_5] [i_5 - 1] [i_5 + 1])))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    var_28 = ((long long int) (+(arr_4 [i_7] [i_7] [i_7])));
                    var_29 = ((long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
        var_30 = ((long long int) (+(9223372036854775807LL)));
    }
    for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
    {
        var_31 = ((long long int) (~(arr_24 [i_8] [i_8 + 2] [i_8])));
        var_32 = ((long long int) ((long long int) var_6));
        arr_28 [i_8] = (-(max((arr_7 [i_8 + 3]), (var_12))));
        arr_29 [i_8] [i_8] = ((long long int) max((-114589987593869489LL), (arr_1 [i_8 + 1])));
    }
    /* vectorizable */
    for (long long int i_9 = 3; i_9 < 21; i_9 += 3) 
    {
        var_33 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
        var_34 += (-(-114589987593869491LL));
        var_35 ^= (~(((long long int) var_9)));
    }
}
