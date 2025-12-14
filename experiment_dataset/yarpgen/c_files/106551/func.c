/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106551
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_0);
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_14 ^= ((/* implicit */signed char) 16495859729105306788ULL);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((short) ((int) ((_Bool) arr_6 [i_0])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_16 ^= ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (unsigned short)4095)) / (((/* implicit */int) (unsigned short)4095)))) % ((-(1345971349))))), (((/* implicit */int) ((short) (unsigned short)61441)))));
                    arr_10 [i_0] [i_1] [i_1] [0U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) % (((int) var_4))))) ? (((/* implicit */int) (unsigned short)4095)) : (((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6)))) + (((((/* implicit */_Bool) (unsigned short)4094)) ? (((/* implicit */int) (unsigned short)4095)) : (-111714205)))))));
                    var_17 = ((111714206) >= ((~(((/* implicit */int) max((((/* implicit */short) (signed char)113)), (var_8)))))));
                }
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) var_1)), (arr_2 [i_1 + 1] [i_1]))), (((/* implicit */unsigned short) var_1))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [(unsigned char)10] [i_5] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */int) ((unsigned short) (unsigned short)4083))), (var_13))), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_18 [i_1] [i_1 + 3] [i_4] [1] [i_6] [i_6 - 2]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) || (((/* implicit */_Bool) arr_9 [i_0] [1U] [i_5] [i_6]))))))))));
                                arr_20 [(short)7] [i_0] [15] [i_0] [(short)7] [2] = ((/* implicit */unsigned short) max((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61440))))), (((((/* implicit */int) var_12)) * (((/* implicit */int) var_9)))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61454)) || (((/* implicit */_Bool) (unsigned short)4095)))))))));
                                arr_21 [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)4081)) & (((/* implicit */int) arr_12 [i_4] [i_5] [i_4] [i_1])))) | (((((/* implicit */int) (unsigned short)61445)) & (((/* implicit */int) (unsigned short)61435))))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) (unsigned short)4095))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_4);
}
