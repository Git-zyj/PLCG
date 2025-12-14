/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151745
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = var_13;
        arr_4 [i_0] = ((min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) <= (((((/* implicit */_Bool) (-(593044442)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (1406148291U)))) : (min((var_16), (((/* implicit */long long int) var_3)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = min((((((((/* implicit */int) (signed char)-24)) + (2147483647))) >> (((2326852466282484564LL) - (2326852466282484551LL))))), (((/* implicit */int) ((((/* implicit */_Bool) max((593044442), (((/* implicit */int) (unsigned short)20030))))) || (((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))))));
                    var_20 = (((~(((/* implicit */int) (unsigned short)46385)))) == (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_1] [i_2])), (arr_3 [i_0])))));
                    arr_11 [i_1] [i_1] = ((/* implicit */_Bool) 1002783096);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (!(((/* implicit */_Bool) -546502505156515778LL))))))));
        arr_15 [i_3] = ((/* implicit */int) ((arr_5 [i_3]) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (unsigned short)6676)) : (((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) > (var_14))))))) : (((var_14) >> (((/* implicit */int) arr_5 [i_3]))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (unsigned short i_6 = 4; i_6 < 24; i_6 += 4) 
            {
                {
                    arr_24 [(unsigned short)17] [i_5] = ((/* implicit */short) min((((var_10) > (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))), ((!(((/* implicit */_Bool) var_1))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        arr_27 [i_5] [i_6 - 1] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)50557)))) : (arr_21 [(_Bool)1] [i_6] [i_5] [i_7 + 1])))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            arr_30 [i_4] [i_5] [i_5] [i_6 - 4] [i_7] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-53))));
                            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_18 [i_5]), (((/* implicit */signed char) (_Bool)1)))))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_1);
                        }
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 24; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) var_7);
                            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_7 - 1]))));
                            var_24 *= ((4617333830329185504LL) <= (546502505156515778LL));
                        }
                        arr_35 [i_7] [i_7 + 1] [i_5] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2418728870U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [8ULL])))), (((/* implicit */int) arr_19 [i_7 + 1])))))));
                    }
                }
            } 
        } 
    } 
}
