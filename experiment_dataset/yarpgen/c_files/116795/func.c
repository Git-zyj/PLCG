/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116795
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
    var_18 += ((/* implicit */unsigned short) (((((((!(((/* implicit */_Bool) (unsigned short)8097)))) ? (var_5) : (((/* implicit */long long int) var_10)))) + (9223372036854775807LL))) << (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) && ((!(var_0))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-5722))))) ? (((int) var_6)) : (((/* implicit */int) (short)5734))));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned char)10)) / (((/* implicit */int) var_1))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */_Bool) arr_0 [(unsigned short)7]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_5 [(unsigned short)9] [i_1]))))) % (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))) + (max((arr_6 [(unsigned char)6]), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)121)))))));
        arr_7 [i_1 - 1] = ((/* implicit */long long int) ((arr_5 [3ULL] [3ULL]) ? (max((((/* implicit */int) ((_Bool) var_15))), (((((/* implicit */int) (unsigned short)24709)) >> (((/* implicit */int) arr_5 [(unsigned short)2] [i_1])))))) : ((~(((/* implicit */int) ((_Bool) (unsigned char)10)))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)5716)), (arr_8 [i_2 - 2]))))));
        var_24 += ((/* implicit */signed char) ((_Bool) ((arr_9 [(_Bool)1]) != (((/* implicit */int) var_16)))));
        arr_10 [i_2] = ((/* implicit */unsigned int) arr_9 [i_2]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_0))));
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
        }
        for (unsigned short i_4 = 4; i_4 < 18; i_4 += 2) 
        {
            var_27 = ((/* implicit */_Bool) var_17);
            var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)-29))))))), (((((/* implicit */_Bool) (short)-5719)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9453220106621259922ULL)))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((arr_23 [(_Bool)1] [i_4] [i_7]) > (((/* implicit */unsigned long long int) ((int) arr_19 [i_2] [(short)12] [i_2 + 3] [i_4])))))));
                            var_30 = ((/* implicit */short) min((var_30), (arr_18 [(unsigned short)1] [i_4] [(unsigned char)4])));
                            var_31 += ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-29430)) || (((/* implicit */_Bool) 2144431238U)))))));
                            arr_26 [i_2] [(short)11] [i_5] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [(unsigned short)3] [i_2 + 1])) ? (((/* implicit */int) ((379903873939340804ULL) < (((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_5] [i_4 - 1] [i_2] [i_2] [19U]))))) : (((/* implicit */int) var_3))))) <= (min((var_6), (((/* implicit */unsigned long long int) (unsigned char)231))))));
                        }
                    } 
                } 
            } 
        }
    }
}
