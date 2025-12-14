/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136404
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
    var_20 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */long long int) ((unsigned char) var_11)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_21 = ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0] [i_0] [i_1] [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [9LL]))))), (((/* implicit */long long int) arr_8 [i_0] [9LL] [(unsigned char)4] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [6LL] [6LL]))));
                            var_22 = -8071495365671806849LL;
                            arr_14 [i_0] [i_1] [2LL] [2LL] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) <= (min((678680936043024991LL), (((/* implicit */long long int) var_8))))));
                            arr_15 [i_0] [i_0] [i_1] [(unsigned char)7] [(unsigned char)7] [i_3] = min((arr_11 [i_0] [i_3] [i_2 - 1] [i_0] [i_2 - 1]), ((-(arr_0 [i_0]))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_24 = (~(min((arr_21 [i_4] [i_4 + 1] [i_4 - 1] [i_0] [0LL] [i_4 + 3]), (((/* implicit */long long int) (unsigned char)107)))));
                                var_25 += ((/* implicit */long long int) max(((unsigned char)110), (((unsigned char) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_12)))))));
                                var_26 |= var_17;
                                var_27 = ((/* implicit */unsigned char) max((var_27), (var_15)));
                            }
                        } 
                    } 
                } 
                arr_25 [i_0] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                var_28 = (unsigned char)48;
                                arr_38 [i_7] [i_10] [i_9] [i_9] [(unsigned char)4] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), ((~(3335834194636682288LL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_28 [i_11] [i_9]), ((unsigned char)205))))) <= (max((((/* implicit */long long int) (unsigned char)245)), (var_6)))))) : (((/* implicit */int) ((unsigned char) max((var_2), (var_19)))))));
                                arr_39 [2LL] [9LL] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : ((+((-(arr_37 [i_7] [i_7] [i_7] [i_10] [i_11])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 4; i_13 < 16; i_13 += 4) 
                        {
                            {
                                arr_45 [i_13] [i_12] [i_12] [i_12] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned char)155))));
                                var_29 = ((/* implicit */unsigned char) arr_30 [i_7] [(unsigned char)7]);
                            }
                        } 
                    } 
                    arr_46 [i_7] [i_8] [14LL] [9LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_42 [16LL] [16LL] [i_8] [i_8])) << (((((/* implicit */int) var_12)) - (29)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 1; i_14 < 22; i_14 += 1) 
    {
        for (unsigned char i_15 = 2; i_15 < 21; i_15 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1042171510311481544LL) ^ (arr_47 [i_15])))) && (((/* implicit */_Bool) (unsigned char)19)))))));
                var_31 -= ((/* implicit */unsigned char) ((long long int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_15]))))));
                arr_52 [21LL] [i_15] [i_14] = ((/* implicit */unsigned char) max((((long long int) arr_49 [i_14 - 1])), (((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_14 - 1])) & (((/* implicit */int) var_8)))))));
            }
        } 
    } 
}
