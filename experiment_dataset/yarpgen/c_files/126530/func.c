/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126530
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)5143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91))) : (17048661310234607053ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_1 [3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [3LL] = ((/* implicit */long long int) (~(17048661310234607051ULL)));
        var_15 = ((/* implicit */long long int) arr_0 [11U]);
    }
    var_16 = ((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 4; i_1 < 11; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((arr_1 [i_1 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1]))))))));
        var_18 = ((/* implicit */long long int) var_10);
        var_19 = ((/* implicit */int) (short)-5144);
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-19327)) ? (-881381328) : (((/* implicit */int) (unsigned char)146))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) 16648544366104072670ULL)))) ? (arr_9 [i_2]) : (((((/* implicit */_Bool) min((881381327), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) var_11)) : (arr_9 [i_2])))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((max((((arr_8 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [(_Bool)1]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)17316))))))) >> (((((/* implicit */int) (unsigned char)133)) - (126))))))));
    }
    var_23 = ((/* implicit */_Bool) (short)19327);
}
