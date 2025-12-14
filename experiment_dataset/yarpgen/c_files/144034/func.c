/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144034
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
    var_11 = ((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)127))))), (var_10))) != (((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_0))))) && (((/* implicit */_Bool) var_6)))))));
    var_12 &= ((/* implicit */short) ((var_1) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)13596), ((short)13581)))) ? (((/* implicit */int) ((((/* implicit */long long int) 1211071952)) < (var_3)))) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0] [i_0])) % (((/* implicit */int) arr_0 [i_0] [i_0])))) >= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0] [(short)12]))))))))));
        arr_2 [i_0] = (-(((var_9) / (((((/* implicit */int) (short)13596)) ^ (((/* implicit */int) (short)13582)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (11602480128345328318ULL) : (((/* implicit */unsigned long long int) var_5))));
            var_15 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)18532)) || (((/* implicit */_Bool) 11602480128345328339ULL))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)20726)) && (((/* implicit */_Bool) var_7)))))));
            var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13596))) | (11602480128345328318ULL))) + (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))));
        arr_10 [i_2] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
    }
    for (long long int i_3 = 3; i_3 < 21; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_6 [i_3] [(short)6]))));
        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [(signed char)14])) * (((/* implicit */int) arr_11 [(short)20]))))) ? (arr_4 [i_3] [i_3 - 3] [i_3]) : (((/* implicit */int) (short)-20089))))));
    }
    var_19 = ((/* implicit */unsigned short) -1740375901046250394LL);
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (min((((/* implicit */unsigned int) var_9)), (var_5)))));
}
