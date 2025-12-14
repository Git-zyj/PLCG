/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147686
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)231))))))) ? (((((arr_0 [i_0]) ^ (var_9))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) -1317632153);
        var_13 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min(((_Bool)1), ((_Bool)0))) && ((_Bool)0))))) == (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1081371352)))) ? (var_7) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_15 = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && ((_Bool)1)))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((~((((_Bool)0) ? (((/* implicit */int) arr_8 [i_1])) : (arr_10 [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1])) >= (((/* implicit */int) (_Bool)1)))))));
                            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_3] [i_1] [i_1] [i_4])) == (13239083341999096994ULL))))));
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) ((arr_9 [i_4] [i_4] [i_4 + 1]) >= (475640774)))) >> (((((min((((/* implicit */int) (!((_Bool)1)))), ((-2147483647 - 1)))) - (-2147483643))) + (31)))))));
                        }
                        var_19 = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) var_3)) ? (3118276021U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        var_20 = (((!(max(((_Bool)1), (arr_12 [i_1] [i_1] [i_1] [i_1]))))) ? ((-(arr_17 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]))) : (((/* implicit */unsigned long long int) min((arr_16 [i_1] [i_4 - 1] [i_1] [i_4 - 2] [i_4]), (((/* implicit */int) (unsigned char)191))))));
                        arr_21 [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_2] [i_2]) & (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) arr_16 [i_3] [i_2] [i_2] [i_2] [i_3])) : (((/* implicit */unsigned long long int) min((arr_20 [i_4 - 2] [i_4 - 1] [i_2] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 - 2]), (((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_16 [i_4] [i_4 - 1] [i_1] [i_4] [i_4 + 1])))) ? (((((((/* implicit */int) (_Bool)1)) - (arr_18 [i_1] [i_2]))) ^ (((/* implicit */int) ((-1) >= (-1081371348)))))) : ((~(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        arr_22 [i_1] = ((((((/* implicit */_Bool) (~(arr_14 [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) (-(var_10)))))) ? (((/* implicit */int) (_Bool)1)) : (var_1));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) arr_18 [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_23 |= ((/* implicit */int) (!(((/* implicit */_Bool) 0))));
                                arr_35 [(unsigned char)20] [(unsigned char)20] [i_7] [(unsigned char)20] [(unsigned char)20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_9] [i_7]))));
                                arr_36 [17ULL] [17ULL] [i_8] [i_8] [i_7] = ((/* implicit */unsigned long long int) (+(arr_7 [i_9])));
                                var_24 = ((/* implicit */_Bool) var_7);
                                arr_37 [i_10] [i_9] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_6] [i_6] [i_8] [i_9])) == (((/* implicit */int) (unsigned char)139))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) max((var_25), (((_Bool) (_Bool)1))));
        arr_38 [i_6] = ((/* implicit */unsigned char) (-(-1081371357)));
    }
    var_26 = ((/* implicit */int) min(((~(((((/* implicit */_Bool) 1176691274U)) ? (var_9) : (2427883011U))))), (max((((/* implicit */unsigned int) (unsigned char)186)), (var_9)))));
    var_27 = min((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)186)) && (((/* implicit */_Bool) var_1))))) << (((((/* implicit */int) var_2)) - (174))))), (((/* implicit */int) var_11)));
}
