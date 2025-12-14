/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147504
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
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((unsigned short) ((unsigned short) arr_2 [i_1] [(unsigned short)2]));
                    var_13 = ((((/* implicit */int) ((((((arr_5 [i_0]) + (2147483647))) << (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) != (max((arr_4 [i_0] [i_1] [(unsigned short)8] [i_1]), (((/* implicit */int) var_10))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned short) var_4));
                        arr_9 [(unsigned short)3] [i_2] [i_1] [7] [i_0] = arr_6 [i_0] [8LL] [i_1] [(_Bool)1];
                    }
                    for (int i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        arr_12 [i_0] = min((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4 - 3])), ((+(((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4 + 3])))))))));
                        arr_13 [i_0] [11] [i_2] [i_0] = var_5;
                        arr_14 [11LL] [i_1] [(_Bool)1] [i_4] = arr_4 [11LL] [i_1] [i_1] [i_0];
                    }
                    var_14 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_7)) != (arr_5 [i_0]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((long long int) (unsigned short)9560));
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_5]) >= (var_8))))) == (((long long int) arr_15 [i_5])))));
        var_16 = arr_15 [i_5];
        var_17 = ((/* implicit */long long int) ((_Bool) var_3));
        arr_18 [i_5] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) 2118158921)))));
    }
    for (int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    arr_25 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */int) ((arr_16 [i_7 - 1]) == (((/* implicit */int) ((((/* implicit */long long int) 2147483647)) != (2048LL))))));
                    var_18 = ((/* implicit */unsigned short) arr_22 [i_6] [i_7 - 1] [i_8]);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) var_5);
                                arr_32 [i_7] [i_9] [i_7] = ((unsigned short) min((arr_24 [i_7] [i_7 - 1] [i_7 - 1]), (((/* implicit */long long int) arr_26 [i_7] [i_9] [(_Bool)1] [(unsigned short)8] [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_6] [i_6] = ((/* implicit */int) var_7);
    }
    for (int i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) arr_19 [i_11]);
        var_21 = ((/* implicit */unsigned short) ((long long int) ((_Bool) (!(((/* implicit */_Bool) arr_21 [i_11] [i_11] [i_11]))))));
    }
}
