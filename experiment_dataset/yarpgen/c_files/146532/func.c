/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146532
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
    var_16 -= ((/* implicit */unsigned short) (((+((+(14495225139753958517ULL))))) - (((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) var_11)), (var_1))) : (((/* implicit */unsigned long long int) var_5))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_17 = ((/* implicit */short) ((unsigned long long int) ((arr_4 [i_1]) < (((/* implicit */unsigned long long int) arr_1 [i_0])))));
            var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)11238)) == (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */unsigned int) (+(var_1)));
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) var_9);
            var_21 = ((/* implicit */short) ((unsigned long long int) var_3));
        }
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 |= ((/* implicit */_Bool) ((((arr_5 [i_0 - 1] [i_0 + 1]) >= (arr_5 [i_0 - 1] [i_0 + 1]))) ? (((/* implicit */long long int) ((((arr_5 [i_0 - 1] [i_0 + 1]) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])) - (21602)))))) : (((long long int) arr_5 [i_0 - 1] [i_0 + 1]))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((arr_0 [i_0 + 2]), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((((/* implicit */_Bool) arr_3 [(short)4] [(short)4] [3ULL])) ? (((unsigned long long int) (short)15222)) : (((/* implicit */unsigned long long int) max((-1317581653), (((/* implicit */int) (_Bool)1))))))) : (4670000903936336229ULL)));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21877)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0 - 1] [i_4]), (((/* implicit */unsigned short) var_3)))))) : (((var_13) << (((arr_10 [i_0 + 1]) + (5481729437655005604LL)))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_26 = ((((/* implicit */_Bool) arr_7 [i_0] [i_5])) ? (13776743169773215401ULL) : (((/* implicit */unsigned long long int) var_5)));
            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) == (4670000903936336235ULL)));
            var_28 = ((/* implicit */long long int) var_14);
        }
    }
    var_29 = var_12;
}
