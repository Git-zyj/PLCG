/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1445
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32527)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) ((short) var_3)))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned char)15))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) min(((unsigned char)231), ((unsigned char)247)))) : (((/* implicit */int) (short)-8591))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? ((-(((/* implicit */int) (unsigned char)27)))) : (((((/* implicit */_Bool) (unsigned char)27)) ? (2038063418) : (((/* implicit */int) (short)-8598))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_15))));
                }
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        arr_15 [i_0 - 2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (unsigned char)16);
                        var_19 = ((/* implicit */_Bool) (unsigned short)20222);
                    }
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((var_7) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_5 [i_3 + 2] [i_3] [16ULL] [i_0])))) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(1567992052399665300ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)29132))))))))) : (((176755111U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])))))));
                }
                for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (short)8591)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (_Bool)1))))))), (((var_14) + (((((/* implicit */_Bool) 2410416866165328889ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(signed char)4]))) : (659355531U)))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */int) var_11);
                        arr_21 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */int) ((short) var_5));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+(arr_10 [(short)3] [i_0 - 1] [i_6 + 1]))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (unsigned short)49531);
                            arr_26 [i_1] [i_7] [14] = (signed char)-4;
                            arr_27 [i_8 - 1] [i_7] [i_1] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (short)-8591)))))) % (((((/* implicit */_Bool) (short)-18511)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
                            arr_28 [i_0] [4] [i_8] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-13792)) || (((/* implicit */_Bool) 35184372087808ULL)))) ? (arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 2])) ? (var_5) : (((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
