/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117869
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
    var_18 = ((/* implicit */unsigned int) 5684571792940011371ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [(short)8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_2] [i_3])) & (((/* implicit */int) (signed char)63))))))) ? (((((/* implicit */_Bool) max((arr_3 [13] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_3])))) : (((((_Bool) arr_6 [0LL] [3U] [i_2] [i_3])) ? (((((/* implicit */_Bool) (short)21348)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (short)21348)))) : ((-(((/* implicit */int) (_Bool)0))))))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [(short)9] [(short)9] [(short)9]))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned int) (((-(((13974128774738312650ULL) + (((/* implicit */unsigned long long int) arr_3 [i_0] [(signed char)2])))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1571)), ((unsigned short)44663))))) : (max((((/* implicit */unsigned long long int) (short)5417)), (arr_8 [i_0] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
}
