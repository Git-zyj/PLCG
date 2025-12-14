/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124051
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
    var_17 = ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [(signed char)11] [14] = arr_5 [i_0] [i_2 - 1];
                        arr_14 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_2 - 1] [i_3]);
                        arr_15 [(unsigned char)2] [(unsigned char)2] [i_0] = min(((-(((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_3])))), ((-(arr_11 [i_1] [i_2 - 1] [i_0] [i_3]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) max((var_18), (arr_7 [(_Bool)1] [i_0])));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4])) - (((/* implicit */int) (signed char)0)))))));
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    {
                        arr_26 [i_4] [i_4] [i_7] [i_4] [i_5] [i_7] = ((/* implicit */signed char) ((unsigned char) var_8));
                        var_20 = ((/* implicit */int) arr_20 [i_4] [i_5] [i_6 + 2]);
                        arr_27 [i_7] [i_4] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)55))));
                        arr_28 [i_4] [i_5] [i_5] [(signed char)0] [i_7] [(signed char)19] = (+(((/* implicit */int) arr_6 [i_7 - 1] [i_7])));
                    }
                } 
            } 
        }
        var_21 *= ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)55))))));
    }
}
