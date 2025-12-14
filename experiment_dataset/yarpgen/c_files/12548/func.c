/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12548
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (-(var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_4 + 1]), (((/* implicit */unsigned int) (_Bool)1))))) && (((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_4] [i_4 - 1]))))))));
                            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_0] [(_Bool)1])) ? (arr_8 [i_1 - 2] [i_1] [i_1 + 1] [(unsigned char)0] [i_1] [i_1]) : (arr_8 [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]))))))));
                            arr_16 [i_1] [i_1] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19858))) != (1354895016U))))))));
                        }
                        arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((((-(((/* implicit */int) (unsigned char)255)))) - (((/* implicit */int) ((_Bool) var_8)))))));
                    }
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)41);
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) max(((short)19858), (((/* implicit */short) (_Bool)1))));
                            var_21 = ((/* implicit */_Bool) max((((unsigned char) ((_Bool) var_10))), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) < (((/* implicit */int) (_Bool)1)))))));
                            var_22 = ((/* implicit */_Bool) (short)32767);
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */int) var_3);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            arr_29 [i_6] [i_0] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((int) 2504889885U)), (((/* implicit */int) (_Bool)1)))))));
                            arr_30 [i_0] [i_0] [i_2] [i_6] [i_8] = ((/* implicit */_Bool) var_1);
                            arr_31 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_1 - 2] [i_2])) : (((/* implicit */int) arr_2 [i_1 - 2]))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_1 - 2] [i_1 - 1])) - (((/* implicit */int) arr_14 [i_8] [i_8] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_26 [i_0] [i_1 - 1] [i_2] [0] [i_1])))) : ((-(max((var_10), (((/* implicit */unsigned long long int) var_1)))))))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((_Bool) 2940072279U)))))));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_2] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 7582930513068252543LL)) ? (((/* implicit */int) ((_Bool) 2504889887U))) : ((~(arr_9 [i_1] [(short)1])))))));
                    }
                    var_25 = ((_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [14])) ? (((((/* implicit */_Bool) 1354895016U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30402))) : (1759338786U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2251731094208512ULL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) 1023ULL))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)18)), (1354895016U)))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-89)))) : (((/* implicit */int) ((signed char) arr_8 [i_11] [i_11] [(unsigned short)13] [i_2] [i_0] [i_0])))));
                                arr_41 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) max((arr_0 [i_0]), (arr_37 [i_0] [i_1] [i_2] [i_11] [i_11])))) - (((/* implicit */int) (short)19858))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
