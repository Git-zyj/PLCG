/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141665
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
    var_14 = ((/* implicit */unsigned char) ((((var_3) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_7))))))) > (((((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 9ULL)))))))));
    var_15 = var_6;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_16 -= ((/* implicit */short) ((((/* implicit */int) ((arr_1 [(_Bool)1]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (9U))))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_0]))))) || (((/* implicit */_Bool) ((long long int) arr_6 [i_1 + 1] [i_0])))));
        }
        var_17 |= ((/* implicit */unsigned char) ((signed char) arr_6 [i_0] [(unsigned char)8]));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_11 [(signed char)8] [i_2] = arr_5 [i_2] [i_2] [i_2];
        arr_12 [(unsigned char)3] [i_2] &= ((/* implicit */long long int) max((min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))) : (arr_3 [i_2] [i_2]))), (((/* implicit */unsigned int) arr_9 [i_2])))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))));
        arr_13 [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((((/* implicit */short) var_10)), ((short)32734)))) && (((/* implicit */_Bool) (signed char)(-127 - 1))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) 4294967290U))));
    }
}
