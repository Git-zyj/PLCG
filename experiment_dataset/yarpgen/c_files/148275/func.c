/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148275
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)52817))));
    var_21 = ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_8 [(signed char)3] [(_Bool)1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(arr_6 [(unsigned short)17] [20] [i_0 - 1] [i_0] [i_0 - 2])));
                        var_22 = (_Bool)0;
                        arr_9 [i_1] [12ULL] = ((/* implicit */unsigned short) (~(arr_3 [i_0 - 1] [i_0 - 1])));
                        arr_10 [i_0] [(unsigned short)23] [i_2] [i_1] = ((/* implicit */unsigned short) ((arr_3 [i_0 - 2] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                } 
            } 
        } 
        arr_11 [(signed char)21] = ((/* implicit */unsigned short) ((arr_0 [(unsigned short)18]) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) (unsigned short)53798)))) : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0])));
        arr_12 [i_0] [1] = ((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (arr_5 [i_0] [i_0] [i_0 + 1] [i_0])));
    }
    for (unsigned short i_4 = 2; i_4 < 24; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 23; i_5 += 4) 
        {
            arr_20 [i_5] = arr_19 [i_4] [i_5];
            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_4] [i_4] [i_4] [i_5]))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 24; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) ((_Bool) arr_23 [(unsigned short)19] [i_7] [i_7] [i_7]));
                        var_25 = ((/* implicit */_Bool) ((unsigned long long int) 3185909187U));
                    }
                } 
            } 
        }
    }
}
