/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147565
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
    var_19 = ((/* implicit */long long int) var_4);
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) * ((~(((/* implicit */int) var_12))))))) < ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (var_3)))))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_13))));
                var_23 = ((/* implicit */unsigned int) ((_Bool) 14477993792775537209ULL));
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) || (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) ((short) 435575909U))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) ((((/* implicit */long long int) var_14)) != (arr_7 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            arr_9 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                arr_12 [i_0] [7U] [i_2] [7U] [7U] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)48492)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1723903880U) < (4294967295U))))) : (1024U))));
                                arr_13 [i_0] [i_0] [i_2 - 1] [i_0] [i_4] [i_4] = ((unsigned long long int) ((short) -1579954028522968902LL));
                            }
                            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                            {
                                arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 656720276U)) ? (((var_16) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) arr_10 [i_5] [i_3] [i_3] [(unsigned short)13] [i_0 - 2] [i_0])))));
                                var_26 = ((/* implicit */short) var_16);
                                var_27 = ((/* implicit */_Bool) ((long long int) ((int) var_4)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) 18173512525247077357ULL);
}
