/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13050
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
    var_19 = ((/* implicit */int) var_16);
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_21 ^= ((((((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2])) % (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1] [i_1 - 2] [i_2])) + (15683))));
                    var_22 = ((/* implicit */int) min((var_22), (((((((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 2] [i_1])) / (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1])))) / (((/* implicit */int) max((arr_7 [i_1 + 2] [i_1 - 2] [(_Bool)1]), (arr_7 [i_1 + 2] [i_1 + 1] [10]))))))));
                    arr_9 [i_0] [i_0] [i_1 + 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_1 + 2] [i_1 - 2] [i_1 + 1]), (((/* implicit */short) (unsigned char)238))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned short)16544))))))));
                    arr_10 [2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1 - 2])))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11401616457149402869ULL)) ? (((/* implicit */int) arr_8 [i_4] [i_3] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))))) ^ (((((/* implicit */_Bool) max((var_17), (arr_11 [i_4] [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48992)) ^ (((/* implicit */int) (unsigned short)16544))))) : ((~(1351749314U))))))))));
                            var_24 ^= ((/* implicit */signed char) arr_2 [i_1 - 1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -1562750159)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))) & (min((var_12), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) max(((unsigned char)112), (((/* implicit */unsigned char) var_6))))))))));
}
