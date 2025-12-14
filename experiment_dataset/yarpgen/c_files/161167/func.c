/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161167
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
    var_19 |= ((/* implicit */int) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 = ((min((max((13130098623968773191ULL), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3351)) >= (((/* implicit */int) arr_0 [i_0]))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))));
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            var_21 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((-1528546887) * (((/* implicit */int) (_Bool)0))))), (((arr_1 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_18)))))));
            arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1 - 4])))) * (((unsigned long long int) var_10))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_0] [6ULL] [i_2] = ((/* implicit */short) arr_3 [i_2] [i_0]);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        }
        arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) 1528546888)) == (9223372036854775807LL)));
    }
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3345)) ? (((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) (short)10457)) : ((+(-2147483647))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))) != (min((arr_1 [12]), (((/* implicit */long long int) var_18)))))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_1 [i_3]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_24 -= ((/* implicit */unsigned long long int) var_14);
            arr_18 [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [7ULL] [i_4])) ? (-7891296655336159689LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)21] [(signed char)16])))))) : (var_6)));
        }
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] = arr_6 [i_5] [i_5] [i_5];
        arr_22 [i_5] [i_5] = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) -9)) && (((/* implicit */_Bool) (short)27044))))), (((((/* implicit */int) (signed char)-109)) & (((/* implicit */int) var_10))))))) ? (min((((/* implicit */int) ((unsigned char) var_4))), ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_10)));
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */int) ((long long int) (_Bool)0));
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_6] [i_6])))))));
    }
    var_26 -= ((/* implicit */long long int) (-(min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_17)) ? (811955684) : (var_14)))))));
}
