/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145362
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) max((1332614389U), (((/* implicit */unsigned int) var_16)))));
                    var_20 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)4353))))) ? ((~(-1))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_5 [i_1 - 1]))))))));
                    arr_8 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)64512)), ((-(var_3)))))) ? (((/* implicit */int) (signed char)-117)) : ((+(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                }
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    arr_13 [11ULL] [i_1 + 1] [i_0] = (~(((/* implicit */int) (unsigned short)11050)));
                    arr_14 [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned short) arr_9 [i_0] [i_0] [i_1 + 1] [i_3 - 1]))) ? (min((var_3), (arr_0 [i_0]))) : ((~(((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_3] [i_0]))))))));
                    var_21 ^= ((unsigned short) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [11U])), (arr_6 [i_1 + 1])));
                    arr_15 [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [(unsigned char)8]))) || (((/* implicit */_Bool) (+(arr_12 [i_1] [i_1 - 4] [i_1 - 4])))))));
                }
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((short) arr_4 [i_1 - 4] [i_1 - 4])))));
                                var_23 = (~(max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)19)), ((unsigned short)23879)))), ((-(((/* implicit */int) (unsigned short)11037)))))));
                            }
                            arr_25 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), (arr_2 [i_1] [i_4] [(unsigned short)0])))) << (((((((/* implicit */_Bool) max((arr_11 [i_0] [0ULL] [i_5]), (((/* implicit */signed char) (_Bool)1))))) ? (arr_0 [(unsigned short)3]) : ((-(((/* implicit */int) (unsigned short)11051)))))) + (1659788600)))));
                        }
                    } 
                } 
                arr_26 [i_0] [i_1 - 4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((((/* implicit */_Bool) max(((unsigned short)1008), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((arr_16 [i_0]), (((/* implicit */unsigned long long int) arr_21 [i_1])))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_22 [i_0 + 2] [i_0 + 2] [i_1] [i_1])) ? (arr_1 [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_13))));
    var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
}
