/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178954
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_2))));
                var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 882784362)) : (min((arr_3 [i_0] [3LL]), (((/* implicit */unsigned long long int) var_8)))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_1])) ? (arr_2 [i_0] [i_0 + 1] [15LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27949)))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6952120772676597645LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)27949))))) : ((~(((/* implicit */int) var_12))))))) ? (((arr_2 [(unsigned char)17] [i_0] [i_1 + 1]) ^ (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-27949)) > (((/* implicit */int) (unsigned char)214)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27949)) ? (((/* implicit */int) (unsigned char)231)) : (1259461750)))) : (1665941212U))))));
                arr_4 [(short)18] [(unsigned char)3] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)214)), ((short)-27949))))) < (var_10)))), (var_8)));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (signed char)115);
    var_17 = ((/* implicit */_Bool) var_9);
}
