/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114242
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)28)))), (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)130))))))) ? (((/* implicit */int) var_15)) : ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) >= (((/* implicit */int) var_7))))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)228)) <= (((/* implicit */int) (unsigned char)67)))))));
        var_19 += max(((unsigned char)120), ((unsigned char)87));
        arr_2 [(unsigned char)0] |= ((unsigned long long int) (unsigned char)28);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8195)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (2417231739546017087ULL)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) <= (var_14))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-((-(arr_4 [i_1]))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        var_22 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((17308441684615865148ULL), (((/* implicit */unsigned long long int) arr_6 [i_2 - 2]))))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_2]), (((/* implicit */unsigned short) (unsigned char)78)))))))))));
        var_23 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2 - 2])) + (((/* implicit */int) (unsigned short)30351))))), (((((/* implicit */_Bool) 16029512334163534526ULL)) ? (12575463808137120886ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            var_25 += 16930086392260821637ULL;
            var_26 |= (unsigned char)234;
            var_27 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)28))));
            arr_14 [i_3 + 1] [(unsigned char)6] |= (unsigned char)176;
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_28 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [(unsigned char)0] [i_5] [i_3 - 2])) ^ (((/* implicit */int) (unsigned char)135))));
            var_29 |= ((/* implicit */unsigned long long int) arr_5 [i_3 - 2]);
            var_30 += ((((/* implicit */_Bool) arr_9 [4ULL])) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) : (12910343659776770956ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
        }
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [(unsigned char)10] [i_3 + 1] [i_3 - 1])) & (((/* implicit */int) arr_15 [(unsigned short)0] [i_3 - 1] [i_3 - 1])))))));
    }
}
