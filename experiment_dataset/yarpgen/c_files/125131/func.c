/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125131
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((((/* implicit */int) (short)3353)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) == (var_12))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)31420)) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_2 - 1] [i_2] [i_2])) : (((/* implicit */int) var_15)))) * (((/* implicit */int) (unsigned short)0))));
                        var_22 = ((/* implicit */signed char) arr_2 [i_3]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) | (0)))) * (min((((/* implicit */long long int) var_6)), (arr_12 [i_0] [i_1] [7]))))) : (((/* implicit */long long int) (+(var_12))))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(arr_8 [i_0] [1LL] [i_0])));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (short)3353))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((unsigned long long int) (unsigned short)986)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */int) arr_10 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2 - 3])))))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((((/* implicit */int) (short)-3353)) >= (((/* implicit */int) (signed char)-102)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (short)-3354))))) : (arr_1 [i_2 + 2]))) : (min((arr_1 [i_2 - 2]), (((/* implicit */int) ((unsigned short) var_7)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_6]);
                            var_28 += ((/* implicit */signed char) max((((((/* implicit */int) var_16)) % (-1189387230))), (((/* implicit */int) var_15))));
                            arr_21 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((((/* implicit */int) var_17)) * (((/* implicit */int) (signed char)127)))))))) <= (((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1183)) || (((/* implicit */_Bool) 4398046511103LL))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)255)), (var_11)))), (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93)))))))));
                            arr_22 [i_0] [i_0] [i_0 + 3] [i_1] [i_0] [i_0 - 1] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_3 [i_1] [i_1] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_0 + 3] [i_5]))))) : (12331702239782987642ULL)));
                        }
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) var_7);
    var_31 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
    var_32 = ((/* implicit */unsigned char) var_15);
    var_33 += ((/* implicit */_Bool) var_17);
}
