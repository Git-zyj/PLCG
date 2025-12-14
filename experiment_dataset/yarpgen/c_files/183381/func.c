/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183381
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)100)) ? (-1909243094789856775LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))))), (((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_1] [i_1])))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_9))));
                var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -5837370351489823766LL)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)100))));
                var_17 ^= ((/* implicit */short) max(((+((-(((/* implicit */int) (unsigned char)230)))))), (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_13)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [6LL] [i_1])) ? (12) : (arr_5 [i_0] [i_1] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)16))))))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 4; i_2 < 20; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_12))))) : (((/* implicit */long long int) var_13))));
        var_20 *= ((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned char)164)), ((-(((/* implicit */int) (unsigned char)249)))))), (((/* implicit */int) min((((unsigned short) var_2)), (((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), (arr_9 [(short)16])))))))));
    }
    for (int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((9223372036854775799LL), (((/* implicit */long long int) var_8))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))) % ((((_Bool)0) ? (((/* implicit */long long int) 2914422099U)) : (1308905594368204244LL))))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_26 [(signed char)23] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) (-((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (3LL))))))));
                        arr_27 [i_6] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */signed char) max((min((var_6), (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48803))) : (1308905594368204248LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 2914422110U)) ? (4294967267U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))), (((/* implicit */unsigned int) (signed char)-92)))))));
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) var_11))), (min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) arr_22 [i_6] [i_3] [i_3])), (arr_20 [i_4])))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (-2847835456226378392LL)));
                    }
                } 
            } 
        } 
    }
}
