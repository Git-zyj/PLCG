/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154485
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(2347522459526214648LL)))) ? (min((((((/* implicit */_Bool) (short)-4543)) ? (((/* implicit */unsigned long long int) 6051008916933421479LL)) : (8663651156837603879ULL))), (((/* implicit */unsigned long long int) ((long long int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30572)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (9783092916871947759ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18367167788060308723ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                var_13 = ((/* implicit */short) (-(min((((/* implicit */long long int) var_4)), (max((arr_3 [i_0]), (((/* implicit */long long int) (short)26148))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 18367167788060308723ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((13633368999886481551ULL) | (8663651156837603862ULL)))) ? (14306967975246455722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_15 = ((/* implicit */unsigned char) 9783092916871947727ULL);
                }
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_16 = ((((/* implicit */int) var_0)) != (var_2));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (short i_5 = 4; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_4] [(short)14] [i_5 - 2] [i_5 - 3] [(unsigned char)20])), (arr_5 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1]))))) + (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_5 + 1] [(unsigned char)12] [(unsigned char)19])) ? (8663651156837603888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                                var_18 &= ((/* implicit */unsigned long long int) arr_9 [i_5 - 3] [i_5] [i_5] [i_1]);
                                arr_12 [i_3] [i_1] [i_3] [i_4] [i_5 - 3] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_11 [i_5 - 1] [i_5 - 4] [i_5 - 3] [i_5 + 1] [i_5 - 4])), (arr_10 [i_5 - 3] [i_5 - 4] [i_5 - 2] [i_5 - 3] [i_5 - 2]))), (((/* implicit */long long int) ((short) 8663651156837603878ULL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)174)))) : (min((((/* implicit */int) (unsigned short)10414)), (714691426)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_1)))))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (unsigned short)42524))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_5)))))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-((+((-(4564431267639027357LL))))))))));
    var_21 = ((/* implicit */unsigned long long int) var_7);
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) (short)19)), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)27196))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 218167664)) && (((/* implicit */_Bool) -1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-14804)) : (((/* implicit */int) (unsigned char)95)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
}
