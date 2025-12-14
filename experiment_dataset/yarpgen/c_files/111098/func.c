/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111098
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) <= (2989441414029280972LL)));
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 3] [i_0 - 2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) (unsigned short)65535))))), (min((arr_3 [i_1] [i_0 - 4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_0])))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_14), (arr_3 [i_1] [i_0 + 1])))), (((-2989441414029280963LL) / (((/* implicit */long long int) arr_0 [i_1]))))))) ? ((-(361567792U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16)) * ((+(((/* implicit */int) (short)-31827)))))))));
                arr_8 [i_1] |= ((((/* implicit */_Bool) 3928433559U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21243))) : (-7720351485621131360LL));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 4; i_2 < 10; i_2 += 4) 
                {
                    var_17 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((569584411U), (((/* implicit */unsigned int) (unsigned char)255))))) ? (min((456132736U), (((/* implicit */unsigned int) (unsigned char)1)))) : ((+(569584413U)))))));
                    var_18 = ((/* implicit */int) ((((((/* implicit */unsigned int) arr_0 [i_0 - 3])) <= (arr_9 [i_0 - 1] [i_0 - 3] [i_2 - 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))))) : (var_13)));
                    var_19 = ((/* implicit */short) ((-827888984) <= (827888995)));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)32761)), ((+(((/* implicit */int) arr_2 [i_0]))))))) ? ((~(((long long int) var_4)))) : (((/* implicit */long long int) (~(arr_3 [i_2 - 2] [i_0 - 2]))))));
                    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0 - 3]), (arr_2 [i_2 - 4])))) ? (((/* implicit */int) ((short) arr_2 [i_0 - 3]))) : ((~(((/* implicit */int) arr_2 [i_2 + 1]))))));
                }
                arr_11 [i_0] [i_1] = ((/* implicit */short) (((((+(arr_5 [i_0]))) + (2147483647))) << ((-(4294967295U)))));
            }
        } 
    } 
}
