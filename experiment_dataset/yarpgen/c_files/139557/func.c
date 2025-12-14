/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139557
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
    var_17 = ((/* implicit */int) var_2);
    var_18 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) 0LL);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((_Bool) arr_2 [i_0] [4ULL])))));
        var_21 = ((/* implicit */unsigned int) var_7);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_8 [i_1] = min((max((((/* implicit */unsigned long long int) var_3)), (var_9))), ((~(var_15))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) ((arr_2 [i_1] [i_1]) >= (((/* implicit */unsigned long long int) var_11))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
        var_22 = ((/* implicit */int) (short)21078);
        var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) -1598638983))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((int) max((var_9), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1])))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))))) : (((/* implicit */int) var_0))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26465)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21081))) : (8127312747935187191LL)));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_19 [9ULL] [i_1] [i_3] [i_1] = ((/* implicit */int) 3297734429U);
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (short)25646)))));
                            arr_22 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) var_9);
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_6 [4])));
                            var_29 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21092))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_5]))) : (18446744073709551615ULL))))));
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_30 = arr_15 [i_1] [i_1] [i_1];
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((unsigned long long int) ((((arr_6 [0]) != (var_14))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                            var_32 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_3] [i_4] [i_6] [i_6])) + (var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_17 [(short)8] [i_3] [i_3] [i_4]))));
                        }
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_33 *= ((/* implicit */signed char) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0)))))));
                            var_34 = ((/* implicit */int) var_3);
                            arr_29 [i_1] [i_2] [i_1] [i_4] [i_7] = ((/* implicit */unsigned char) max((268173312), (1598638983)));
                        }
                    }
                } 
            } 
        }
    }
    var_35 = ((/* implicit */unsigned long long int) max((var_35), (var_2)));
}
