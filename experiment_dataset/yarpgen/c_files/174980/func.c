/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174980
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
    var_14 = ((/* implicit */signed char) max((var_4), (((/* implicit */short) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_4), (arr_4 [i_0])))) / (((/* implicit */int) max(((short)20174), ((short)27607))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)82)) / (((/* implicit */int) (short)27607))))))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_13);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_0]))) : (((/* implicit */int) max((((((/* implicit */_Bool) (short)27583)) || (((/* implicit */_Bool) var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_2]))) == (var_12))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_2] [i_1] [i_0])), ((short)27614)))) ? (((/* implicit */int) (short)3)) : (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))) ? (min((var_9), ((+(var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    var_18 = ((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_11 [i_3] [i_3] = ((unsigned long long int) arr_4 [i_3]);
        var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [i_3]))))));
        var_20 = ((/* implicit */unsigned long long int) (signed char)15);
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_21 *= ((/* implicit */short) (~((~(((/* implicit */int) arr_12 [i_4] [i_4]))))));
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21007)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) : (min((var_5), (((/* implicit */unsigned long long int) var_2)))))));
        var_22 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_13 [i_4] [i_4])) + (((/* implicit */int) arr_13 [i_4] [i_4]))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551587ULL)) ? (11592305357718827805ULL) : (36ULL)))) ? (((/* implicit */int) ((short) (short)12288))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-100)), (var_4))))))) && (((/* implicit */_Bool) (signed char)-1)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */short) ((min(((~(var_5))), (((/* implicit */unsigned long long int) arr_16 [i_5])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((short) var_6)))))));
        arr_18 [i_5] = ((/* implicit */unsigned long long int) (signed char)-60);
        var_24 = ((/* implicit */signed char) 0ULL);
        var_25 = ((/* implicit */short) ((18446744073709551588ULL) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (min((((/* implicit */unsigned long long int) (signed char)-125)), (4ULL)))))));
    }
}
