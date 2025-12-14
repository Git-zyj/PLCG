/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130734
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) (((((~(0))) * (((((/* implicit */int) (short)8889)) * (((/* implicit */int) (_Bool)1)))))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((((/* implicit */int) ((unsigned short) arr_3 [(_Bool)1] [17] [1ULL]))) - (47953)))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((1354493384), (((/* implicit */int) var_9)))), (((/* implicit */int) arr_2 [i_0]))))) ? (((((((/* implicit */int) var_3)) - (((/* implicit */int) arr_0 [(short)12] [(signed char)0])))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)44932)) == (((/* implicit */int) (signed char)-27))))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_2 [i_0]))) > (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (_Bool)0))));
                    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-8167))));
                    var_22 ^= ((((8351236274059393868LL) << (((((((/* implicit */int) var_14)) + (9602))) - (62))))) << (((((/* implicit */int) arr_2 [i_1])) - (52))));
                    var_23 = ((/* implicit */unsigned int) ((short) arr_3 [14ULL] [i_1] [i_2]));
                }
            }
        } 
    } 
    var_24 *= ((/* implicit */unsigned short) var_3);
    var_25 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((unsigned short)36820), (((/* implicit */unsigned short) (signed char)-25))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)22))))) % (((var_5) ? (var_1) : (((/* implicit */unsigned long long int) 1841636080U))))))));
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) - (4294967283U)));
}
