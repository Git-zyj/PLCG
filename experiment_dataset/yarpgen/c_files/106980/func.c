/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106980
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((short) 15016301840069072101ULL)))));
    var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned long long int) -2935109247174727802LL)) ^ (((((/* implicit */_Bool) var_0)) ? (var_8) : (var_6)))))) ? (min((min((var_1), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) (~(var_5)))))) : (((min((var_1), (((/* implicit */long long int) (unsigned short)53860)))) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)247)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_1 [i_1]))));
                    var_13 = 214790477U;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        arr_10 [11LL] [i_3] [i_2 - 1] [i_3 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0)))))));
                        var_14 = ((/* implicit */int) ((_Bool) arr_1 [i_0]));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        arr_13 [i_0] = ((/* implicit */int) arr_8 [12LL] [12LL] [i_1] [i_1] [12LL] [i_4 - 1]);
                        var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])) ? (max((((/* implicit */unsigned int) (short)493)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [3U])))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (max((min((((/* implicit */unsigned int) (unsigned short)22031)), (3032750665U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_4] [i_4]))) : (arr_11 [(_Bool)1] [i_0] [i_0])))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) arr_4 [i_5 + 2]);
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((_Bool) ((signed char) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_2 - 1] [i_0] [i_0])))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_1] [i_4])) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (unsigned char)177))));
                            arr_19 [i_0] [(unsigned short)6] [i_2 - 1] [i_4] [i_0] [i_6] = ((/* implicit */unsigned char) max((((arr_1 [i_2 - 1]) ? (((/* implicit */int) (unsigned short)5477)) : (((/* implicit */int) arr_1 [i_2 - 1])))), (((((/* implicit */_Bool) max((arr_4 [i_2]), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) arr_12 [i_6] [i_4 - 1] [(short)13] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))));
                            var_20 -= ((/* implicit */short) (_Bool)1);
                        }
                    }
                }
            } 
        } 
    } 
}
