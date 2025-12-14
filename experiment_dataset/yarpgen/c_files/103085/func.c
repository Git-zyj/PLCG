/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103085
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = max((min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))))));
                arr_6 [i_0] = (~(((/* implicit */int) ((short) (unsigned char)50))));
            }
        } 
    } 
    var_19 &= ((/* implicit */long long int) (~(((/* implicit */int) (((+(var_4))) != (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)50))))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_11 [i_3])) : (var_11))) >> ((((((_Bool)1) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_7 [i_2] [i_2])))) - (69)))))) ? (((/* implicit */int) min((arr_10 [i_2 + 3]), (((/* implicit */unsigned char) arr_4 [i_2] [i_3] [i_2]))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_3])) > (((/* implicit */int) arr_0 [i_2]))))))))))));
                arr_12 [i_2] = min((((((var_11) >= (((/* implicit */int) arr_0 [i_2])))) ? (((int) var_13)) : (((arr_8 [i_2] [i_2]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2)))))), (((arr_8 [i_2 - 1] [i_3]) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_3] [i_2])) ? (arr_2 [i_2] [i_2] [i_2]) : (arr_2 [i_2] [i_2] [i_2]))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_11 [i_2])))))));
                var_21 = max((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_2])) >> (((((/* implicit */int) arr_9 [i_2] [i_2])) - (29)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) arr_3 [i_2]))))) : (((/* implicit */int) arr_10 [i_2 + 1])))), (((/* implicit */int) (!(arr_8 [i_2 - 1] [i_2 + 3])))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_22 += ((/* implicit */int) arr_0 [i_2]);
                                var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2]))))) ? (((((/* implicit */int) (unsigned char)243)) << (((/* implicit */int) arr_8 [i_3] [i_3])))) : (((/* implicit */int) var_15))))) | (((arr_14 [i_2 + 1]) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_2]))))) : (min((((/* implicit */long long int) arr_14 [i_2])), (1150669704793161728LL)))))));
                                var_24 = ((/* implicit */int) min((var_24), (((int) max((arr_15 [i_2 - 2] [i_2 - 2] [i_4 + 1]), (arr_15 [i_2 - 2] [i_2 - 2] [i_4 - 1]))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_24 [i_5] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) || (arr_14 [i_2]))));
                                var_25 = ((/* implicit */int) min((var_25), ((((!(((/* implicit */_Bool) ((arr_14 [i_5]) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_22 [i_2] [i_3] [i_2] [i_3] [i_2]))))))) ? ((+(((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (_Bool)1)))))) : (((((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_7] [i_4])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (1942191719))) * (((/* implicit */int) arr_11 [i_7]))))))));
                                arr_25 [i_2] [i_2] [i_4] [i_5] [i_7] = ((/* implicit */_Bool) ((max((((/* implicit */int) (!(arr_16 [i_5] [i_5] [i_5] [i_7])))), (arr_13 [i_2 + 2]))) * (((int) ((arr_14 [i_2]) ? (-2077397882) : (arr_23 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] [i_2]))))));
                            }
                            arr_26 [i_2] [i_2] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) max((((long long int) (unsigned char)12)), (((/* implicit */long long int) ((arr_16 [i_5] [i_5] [i_5] [i_5]) && (((/* implicit */_Bool) 484728471)))))))) ? (((/* implicit */int) ((_Bool) ((arr_2 [i_2] [i_2] [i_5]) > (-2077397882))))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])) ? ((-(((/* implicit */int) arr_10 [i_4])))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_7)))))));
                            var_26 += ((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_2]);
                            arr_27 [i_2] [i_5] [i_5] [i_5] = ((int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((min((2077397882), (((/* implicit */int) (unsigned char)56)))), (((/* implicit */int) var_2))))), ((+(((var_2) ? (var_0) : (var_0)))))));
}
