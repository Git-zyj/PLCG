/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102753
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) arr_3 [i_1] [i_2] [i_3]);
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((long long int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            {
                arr_22 [i_5] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_5] [i_5]))))) ? (((/* implicit */int) arr_3 [i_5] [i_5] [i_5])) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_21 [i_5])))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [i_5]) >> (((max((((/* implicit */long long int) arr_6 [i_5] [i_5] [i_6] [i_6])), (-5311498675437744986LL))) - (9LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_5] [i_6]), (((/* implicit */short) (_Bool)1)))))) : (arr_20 [i_5]))) : (((/* implicit */unsigned long long int) 8338517820617269223LL)))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_5] [i_6]))) ? (((/* implicit */int) arr_10 [(short)13] [(short)13])) : ((~(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_22 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-4655))))))) ? (min((((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_21 [i_5])))), (((/* implicit */int) max((((/* implicit */short) arr_19 [i_6])), (arr_16 [i_5] [(_Bool)1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            var_23 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_8]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 15; i_9 += 1) 
    {
        for (short i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            {
                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_9 + 2]))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((!(arr_10 [(unsigned short)2] [i_9 + 1]))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                            var_27 |= ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) arr_5 [i_9 + 3] [i_10 + 1])))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) var_16)), (var_5))))), (arr_31 [i_9] [2LL] [i_10]))))));
                arr_38 [i_10] = ((/* implicit */long long int) arr_10 [i_10 + 1] [i_10 + 1]);
            }
        } 
    } 
}
