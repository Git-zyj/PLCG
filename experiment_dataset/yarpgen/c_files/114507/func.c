/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114507
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((var_0) + (((/* implicit */long long int) (~((~(((/* implicit */int) var_9))))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1635129110541447517ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17758))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17757))) != (13849396781304637344ULL))))) : (13849396781304637335ULL)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 *= ((/* implicit */_Bool) var_9);
                        var_16 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_0] [5ULL] [i_0]) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_1])), (arr_7 [i_0] [i_0] [i_0 + 2])))))))) : (var_0));
                        arr_12 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)0))))))) ? ((~(((/* implicit */int) (unsigned short)3715)))) : (((/* implicit */int) var_9))));
                        var_17 = ((/* implicit */int) max((max((arr_7 [i_0 + 1] [i_0 - 2] [i_1 - 1]), (((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_0 - 2])))), ((~(arr_7 [i_0 + 1] [i_0 - 2] [i_1 - 1])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (short)17744)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4])) && (((/* implicit */_Bool) ((long long int) 3413536615042878515LL)))));
    }
}
