/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115767
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) * (((/* implicit */int) ((arr_4 [i_0]) || (((((/* implicit */unsigned int) arr_2 [i_1])) >= (arr_5 [(_Bool)1] [i_1] [6U])))))));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)236))))) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_3 [(signed char)21]) : (((/* implicit */int) arr_4 [10U]))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned long long int) 13220013865543309830ULL))) ? (min((((/* implicit */unsigned long long int) arr_2 [22])), (5200817030042665811ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_5);
    var_22 = ((/* implicit */unsigned int) 13220013865543309830ULL);
    /* LoopSeq 3 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)27471)) : (((/* implicit */int) (unsigned short)63153)))))));
        var_24 = ((/* implicit */unsigned char) ((short) ((short) (unsigned short)26738)));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_3 [i_3]) : (arr_3 [i_3])));
        arr_13 [19U] = ((/* implicit */unsigned long long int) ((arr_2 [i_3]) << (((arr_2 [i_3]) - (1572367990)))));
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (736829592U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2383)))))) ? (arr_10 [i_3] [i_3]) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) : (1289279016U))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        var_26 ^= ((((/* implicit */unsigned long long int) ((arr_17 [i_4 - 2]) | (arr_17 [i_4 - 2])))) & ((+(5226730208166241792ULL))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((short) arr_1 [i_4]));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_17 [i_4 - 3]))));
        var_28 &= ((/* implicit */unsigned long long int) arr_2 [i_4 + 2]);
        var_29 = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_4] [12ULL]);
    }
}
