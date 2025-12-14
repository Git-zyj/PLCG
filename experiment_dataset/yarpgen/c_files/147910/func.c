/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147910
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
    var_19 &= ((((/* implicit */unsigned long long int) min((671805241), (794683439)))) == (var_16));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_12);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) >= (((/* implicit */int) arr_1 [i_1] [i_0])))))));
            var_21 = ((/* implicit */int) (short)32640);
        }
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2246016256714853584ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))) : (var_2))))))));
            var_23 = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) >= (arr_6 [i_0] [i_0])))))) >= (((/* implicit */int) arr_8 [i_0] [i_2]))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((-(((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1])))) | (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2 + 1])) > (var_12)))))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) max((2130706432U), (((/* implicit */unsigned int) arr_1 [i_2] [i_2 + 2]))))) < (18446744073709551615ULL)))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_3 - 1])) ? (arr_0 [i_3 + 1]) : (var_1)));
            var_27 = ((/* implicit */signed char) var_14);
            arr_12 [i_0] [(unsigned char)4] [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 16200727816994698033ULL)) ? (16200727816994698032ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))));
            var_28 = var_2;
        }
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_0]);
        var_29 = ((/* implicit */unsigned short) (short)11621);
    }
    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (-((~(var_2))))))));
}
