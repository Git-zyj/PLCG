/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106433
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
    var_10 = ((/* implicit */_Bool) ((long long int) (signed char)-25));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [(unsigned short)9] [i_2] &= ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (signed char)25))), ((+(((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 3] [i_2 - 3] [i_2 - 2]))))));
                    var_11 -= ((/* implicit */long long int) (signed char)101);
                }
                var_12 += arr_7 [i_0] [i_0] [i_0] [i_0];
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) ((arr_5 [i_0]) ? ((-(((/* implicit */int) arr_4 [i_0] [5U] [i_1])))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_1]))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)101))))), (((((/* implicit */_Bool) 2297012845U)) ? (((/* implicit */long long int) 1997954444U)) : (arr_2 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)10))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-69)))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1])))))) : (max((((/* implicit */long long int) ((short) 4790445480545605144LL))), (((((/* implicit */long long int) arr_3 [i_0])) / (arr_6 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)183))))), (((unsigned long long int) (signed char)-82)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)72)))))))))));
}
