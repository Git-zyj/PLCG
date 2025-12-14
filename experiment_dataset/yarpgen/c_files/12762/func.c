/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12762
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)2047))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5143)) ? (((/* implicit */int) (short)-27)) : (((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)17)), (var_0)))) : ((-(((/* implicit */int) (unsigned char)1)))))))));
                            var_13 = ((/* implicit */unsigned char) 0ULL);
                            var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_9 [i_0] [i_1] [i_0] [i_3]))) || (((/* implicit */_Bool) min((arr_9 [i_3] [i_2 - 1] [i_1] [i_0]), (arr_9 [i_0] [i_0] [i_0] [(short)5]))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) (-((+(((/* implicit */int) arr_0 [i_0]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 4; i_4 < 11; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) (+(arr_12 [i_0] [i_1] [i_4] [6ULL])));
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_9);
                }
                var_17 = ((/* implicit */unsigned char) max(((~(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)118)), ((short)-5145)))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_9 [(short)7] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1])))))))));
                arr_14 [i_0] [i_0] |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) >= (((/* implicit */int) (short)32762)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((2ULL), (((/* implicit */unsigned long long int) var_11))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) (short)31416)))) : (((((/* implicit */int) (unsigned char)252)) / (((/* implicit */int) var_0)))))))));
}
