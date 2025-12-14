/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185797
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((unsigned long long int) var_0))))))) + (((long long int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) % (var_14))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0]))))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_2 [(signed char)8])) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (9111))))) != (((/* implicit */int) ((short) arr_4 [i_2])))))) : (((/* implicit */int) arr_9 [i_4] [i_3]))));
                                var_18 = ((/* implicit */unsigned char) (((+(arr_3 [i_0]))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((-562361879) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) % (var_14))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_19 = max((((/* implicit */unsigned long long int) ((562361873) != (var_7)))), (((max((var_5), (((/* implicit */unsigned long long int) 3764173446414303741LL)))) + (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0]) - (arr_10 [(_Bool)1] [(_Bool)1] [i_5])))))));
                    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((_Bool) (unsigned char)51))) & ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2499))))) || (((/* implicit */_Bool) var_3))));
                }
                arr_15 [i_0] = max((arr_4 [i_0]), (((/* implicit */int) arr_0 [(short)2] [i_0])));
            }
        } 
    } 
}
