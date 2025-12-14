/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182980
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_17 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))));
                var_18 = ((/* implicit */int) ((unsigned char) 2147483622));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((arr_4 [i_0]) / (arr_4 [i_1]))))));
            }
        }
        var_20 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_11)));
        arr_7 [i_0] = ((/* implicit */signed char) (~(var_4)));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_5 [12U] [i_0] [12U] [i_0]))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [15LL])) == (((arr_4 [i_0]) % (((/* implicit */int) (short)-15339))))));
    }
    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 1) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */int) ((((unsigned long long int) ((var_14) ^ (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3 + 1]))))) & (((/* implicit */unsigned long long int) (~(max((arr_9 [i_3] [i_3]), (((/* implicit */long long int) 3311313357U)))))))));
        var_23 = ((/* implicit */short) arr_9 [i_3 - 1] [i_3]);
        arr_11 [i_3 - 3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((min((((/* implicit */int) var_12)), ((-2147483647 - 1)))) & (((/* implicit */int) var_6))))), (min((((/* implicit */long long int) 983653938U)), (9223372036854775797LL)))));
        arr_12 [i_3] [(unsigned short)3] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_10))))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [(unsigned char)8] [i_4] [(unsigned char)8] |= ((/* implicit */_Bool) ((long long int) max((((long long int) (signed char)48)), (((/* implicit */long long int) arr_14 [(unsigned short)18])))));
            arr_18 [(short)18] &= ((/* implicit */unsigned char) (-(min(((-(var_14))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned char) var_6)))))))));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_24 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_12))))) / (min((8796093022207LL), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) min((((/* implicit */int) (!(arr_14 [i_5])))), ((+(((/* implicit */int) arr_19 [i_5])))))))));
            arr_21 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_1), ((short)-8259)))), (var_9)))), (min((((/* implicit */unsigned long long int) min((8796093022207LL), (var_3)))), (min((5920440761650394814ULL), (arr_16 [i_5])))))));
            var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (9223372036854775797LL) : (((/* implicit */long long int) 3311313357U))))) ? (min((((/* implicit */unsigned long long int) arr_13 [i_3 - 3] [(short)6] [i_5])), (arr_16 [16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_31 [i_8] [i_7] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_30 [i_3 + 1] [i_3 - 3] [i_3]), (arr_30 [i_6] [(unsigned char)4] [i_3]))))) - ((~(-9223372036854775798LL)))));
                            var_26 = (+((-(min((983653927U), (3311313374U))))));
                            arr_32 [i_7] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */_Bool) ((((int) min((5920440761650394837ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) | (((/* implicit */int) var_12))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((983653939U), (387724625U)))), (min((arr_9 [i_3 - 2] [i_9]), (((/* implicit */long long int) var_10))))));
            var_28 *= ((/* implicit */short) (+(((18230587771393891143ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749)))))));
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((min((((/* implicit */long long int) max((-2035592241), (((/* implicit */int) var_1))))), ((~(-9223372036854775797LL))))) + (9223372036854775807LL))) << (((((min((((/* implicit */long long int) min((((/* implicit */int) arr_30 [i_3] [i_9] [i_9])), (var_2)))), (-4472191515021872667LL))) + (4472191515021872706LL))) - (39LL))))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) (~(-8796093022208LL)));
        arr_38 [i_10] [i_10] = ((/* implicit */short) min(((~(min((arr_33 [i_10] [15ULL]), (((/* implicit */long long int) 1930175858)))))), (((/* implicit */long long int) min((min((var_1), (var_0))), (var_12))))));
    }
    var_31 = ((/* implicit */int) (~(((unsigned long long int) (!(var_13))))));
    var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) & (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)57931)), (var_9)))), (var_11)))));
    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 1188340022U)) ? (((/* implicit */long long int) 1248855583)) : (var_11)));
}
