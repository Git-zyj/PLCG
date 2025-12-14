/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16121
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
    var_13 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((((/* implicit */_Bool) (((_Bool)0) ? (arr_1 [i_1 - 1] [i_1 - 2]) : (arr_1 [i_1 - 2] [i_1])))) || (((/* implicit */_Bool) ((((var_7) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])))) ? ((~(arr_2 [i_0] [i_0] [i_1]))) : (arr_2 [i_0] [i_1 + 2] [i_1 - 1])))));
                var_15 -= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) >> ((((~(((/* implicit */int) (signed char)-33)))) - (24)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_16 |= ((/* implicit */long long int) (+(arr_1 [i_0] [i_2])));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((532676608U), (((/* implicit */unsigned int) (_Bool)0))))))) ? ((+(max((((/* implicit */unsigned long long int) arr_4 [i_0])), (67108863ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned short) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((unsigned short) (_Bool)1)))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((/* implicit */int) var_7)), (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            arr_15 [i_3 + 2] [i_4] = ((((/* implicit */_Bool) (short)10908)) && (((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_3 + 2])), (arr_10 [i_3 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3] [i_4] [5LL])) >> (((/* implicit */int) (_Bool)1))))))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8190)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (16721748173319545292ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (min((-5107407848660174793LL), (721045485913286666LL)))))) ? ((~(((/* implicit */int) ((signed char) (signed char)15))))) : (((/* implicit */int) (((+(-8883714996347487711LL))) <= (((/* implicit */long long int) var_5))))))))));
            var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3])) <= (((/* implicit */int) arr_12 [(signed char)7]))))), (min((((/* implicit */int) var_11)), (arr_6 [i_3 + 3] [i_4] [i_4] [i_4])))))) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) (_Bool)1))));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_13 [i_3 + 1] [i_4] [i_4 - 2])) / (((/* implicit */int) ((((/* implicit */_Bool) 16721748173319545292ULL)) || (((/* implicit */_Bool) (unsigned short)26326))))))));
        }
        for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((max((var_2), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))) <= (-6340209505267888890LL)))))), (((/* implicit */signed char) var_0))));
            var_24 += ((((((/* implicit */int) arr_11 [i_3])) - (var_8))) >> (((((arr_14 [i_3 - 2] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))))) - (788185890U))));
        }
        var_25 = ((/* implicit */long long int) max((arr_12 [i_3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3 - 1] [i_3 - 2])))))));
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)24414))))));
    }
}
