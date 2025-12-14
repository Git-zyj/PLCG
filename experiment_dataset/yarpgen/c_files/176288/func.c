/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176288
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
    var_14 = var_9;
    var_15 = ((/* implicit */int) min((((/* implicit */long long int) var_12)), (var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */int) ((_Bool) -4615422631425550783LL));
            arr_7 [i_1] = (-(((/* implicit */int) arr_1 [i_0])));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] = (+(((/* implicit */int) arr_8 [i_2] [i_0])));
            arr_11 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_9 [i_2] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) ((_Bool) var_8));
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_3 + 2] [i_0] [i_2] [i_2] [i_0] [i_4 - 3]))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_13 [i_0] [i_3] [i_3] [6LL]))));
                        var_19 = (~(arr_2 [i_4 - 1]));
                        var_20 = ((long long int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) arr_8 [i_0] [i_2]);
        }
        arr_18 [i_0] = ((/* implicit */long long int) ((arr_17 [i_0] [i_0] [8] [i_0]) ? (((/* implicit */int) arr_17 [i_0] [i_0] [4LL] [i_0])) : (0)));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */int) (~(arr_4 [i_0] [(_Bool)1])));
            var_24 = ((/* implicit */_Bool) ((long long int) (-(arr_19 [i_5] [i_5]))));
            /* LoopNest 2 */
            for (long long int i_6 = 4; i_6 < 23; i_6 += 4) 
            {
                for (int i_7 = 3; i_7 < 22; i_7 += 3) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                        arr_31 [i_0] [i_0] = (-(((/* implicit */int) arr_15 [i_0] [i_5] [i_6] [i_7 + 2] [i_7] [i_5])));
                    }
                } 
            } 
        }
        for (long long int i_8 = 1; i_8 < 22; i_8 += 4) 
        {
            var_25 = ((/* implicit */_Bool) (~(((int) arr_22 [i_0] [i_0] [i_0]))));
            var_26 = ((/* implicit */_Bool) (~(-4615422631425550777LL)));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_27 ^= (+(((/* implicit */int) arr_22 [i_8] [i_8 + 1] [i_8 + 3])));
                arr_38 [i_8] [i_8] = ((/* implicit */long long int) arr_13 [i_0] [i_8] [i_9] [i_8]);
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+((~(2147483641))))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_8] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_0] [i_8 - 1] [i_8] [i_10]))));
                arr_42 [i_8] [i_8] [i_8] = ((/* implicit */int) arr_32 [i_8 + 1] [i_8 + 1] [i_8]);
                arr_43 [i_8] = ((/* implicit */_Bool) -6461436067885279789LL);
            }
            arr_44 [i_8] = ((/* implicit */int) (+((~(var_1)))));
        }
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        arr_47 [i_11] [i_11] = ((/* implicit */int) (_Bool)1);
        var_29 *= (-((-(((/* implicit */int) arr_1 [i_11])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                {
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) arr_8 [i_11] [i_11]))));
                    arr_53 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */int) (!(arr_22 [i_11] [i_12] [i_12])));
                    var_31 = ((/* implicit */_Bool) -4615422631425550809LL);
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) arr_50 [i_11] [i_11]);
    }
}
