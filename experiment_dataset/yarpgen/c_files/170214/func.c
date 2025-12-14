/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170214
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
    var_17 = ((/* implicit */signed char) (+((+(5106975014407612555LL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 *= ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_4 [i_1] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))));
            arr_5 [i_0] [i_1] [10] = ((/* implicit */short) (!((!(arr_0 [i_0])))));
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1])))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [11] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_2 [i_1]))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]))));
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(arr_7 [i_0] [9] [9] [(_Bool)1]))))));
        }
        var_22 *= ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_23 &= ((/* implicit */int) arr_1 [(_Bool)1]);
                        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_6] [i_4] [1LL] [3LL]))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_25 &= ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_21 [i_7] [i_7])), (arr_22 [i_7] [(short)16])));
        arr_24 [12LL] = (-((-(((/* implicit */int) (!(arr_21 [i_7] [(_Bool)1])))))));
    }
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                var_26 = min((min((min((arr_27 [i_8]), (((/* implicit */long long int) arr_8 [i_9] [i_9] [i_8] [i_8])))), (min((5106975014407612546LL), (5106975014407612546LL))))), (((/* implicit */long long int) (+((-(((/* implicit */int) arr_16 [i_9]))))))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_21 [i_8] [i_8]))));
                var_28 &= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_10 = 4; i_10 < 9; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_25 [i_9]))));
                            var_30 *= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            arr_37 [i_8] [i_9] [i_10 + 2] [6U] [i_9] [i_8] |= ((/* implicit */_Bool) arr_10 [i_8] [i_9] [i_8] [10]);
                            var_31 = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)4529))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
