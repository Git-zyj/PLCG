/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10009
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_17 = (signed char)6;
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)199)) ? (6836316301551703089ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-10352)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (2820260340685519995ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_8) ? (-75775839) : (((/* implicit */int) var_5)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_11))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        arr_17 [i_1] [i_2] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((672221271) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((9223372036854775784LL) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8197521410905062141LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    arr_18 [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (1156179651)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 8197521410905062128LL)) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)31493))))))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) var_4)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (unsigned char)36)))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_31 [i_5] [i_5] [i_6] [i_7] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) (unsigned char)23))) : (((/* implicit */int) var_13))))) ? (((((214082973219476899LL) != (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (-9223372036854775779LL) : (((long long int) (short)-32763)))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) & (2147483640))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL)))) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (signed char)7))));
                        arr_32 [i_5] [i_6] [i_5] [i_7] [i_5] = ((short) (signed char)-120);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (long long int i_11 = 3; i_11 < 11; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32206)) ? (min((6836316301551703109ULL), (10410102222951323091ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)25675)))))))) ? (((((/* implicit */_Bool) (-(var_12)))) ? (((6836316301551703095ULL) % (((/* implicit */unsigned long long int) var_15)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (var_9))))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)28377)))));
                        arr_43 [i_9] [i_5] = var_9;
                    }
                } 
            } 
        } 
        arr_44 [i_5] = ((/* implicit */short) ((var_4) ? ((-(((/* implicit */int) (unsigned char)26)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) var_5)))))));
    }
}
