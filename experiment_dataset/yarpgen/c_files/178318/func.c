/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178318
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
    var_20 = ((/* implicit */unsigned int) ((signed char) ((var_13) * (((/* implicit */unsigned int) -461480218)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)0)) ? (4122181393U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34643))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1])) ^ (((/* implicit */int) (_Bool)1))))), (arr_3 [i_0] [i_1] [i_2 - 4])))) : (((max((arr_4 [i_0] [i_0 - 2] [i_0]), (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1] [i_0 + 1])))) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    var_21 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                    arr_9 [i_0 + 1] [i_0 + 2] [i_0] = ((/* implicit */short) ((unsigned short) (+((((_Bool)1) ? (var_15) : (((/* implicit */unsigned long long int) var_16)))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))))))));
                        var_23 -= ((/* implicit */short) (~(-707841254079524720LL)));
                        var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 1964979653100531680LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_2 + 4] [i_2 - 3] [i_2 - 4]))) : (var_12)))));
                        var_25 *= ((/* implicit */short) ((((((/* implicit */_Bool) 8001400419160763115LL)) || (((/* implicit */_Bool) arr_5 [i_2 - 4] [i_2 + 1] [i_0 - 2] [i_0 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5091008156621131293ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_1] = ((unsigned int) arr_3 [i_0 - 2] [i_2 + 1] [i_0 - 2]);
                        arr_16 [i_0] [1ULL] [i_2 + 4] [i_4] = ((/* implicit */unsigned short) var_19);
                        arr_17 [10] = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_7)) > (((/* implicit */int) var_0))))));
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */int) -7185602569831777518LL);
                        var_26 = 7185602569831777519LL;
                    }
                    arr_21 [i_1] [(signed char)0] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)146))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-707841254079524720LL)))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 7185602569831777515LL)))))))));
}
