/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142461
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
    var_14 *= ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned long long int) min(((-(2663116257U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11432506642014123745ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0])))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (-((-(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1])))))));
                arr_7 [i_0] [i_0] = var_13;
                /* LoopSeq 4 */
                for (unsigned int i_2 = 1; i_2 < 6; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] &= ((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2]);
                    arr_11 [i_0] [i_1 + 1] [i_2] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(arr_1 [i_1 - 1] [i_1 + 1]))))));
                    arr_12 [0U] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) max((((arr_3 [i_0] [i_0]) ? (((((/* implicit */unsigned long long int) var_13)) * (11432506642014123748ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((unsigned char) (+(8796093022207ULL)))))));
                    arr_13 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 3] [i_2 + 1]))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_17 [5] [i_1] [i_3] [i_0] = ((/* implicit */signed char) max(((!(((_Bool) var_4)))), (((min((((/* implicit */unsigned long long int) 2953191770U)), (11432506642014123745ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)64573)))))))));
                    arr_18 [i_0] [i_1 - 1] = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) <= (8637459994059715926ULL)))), (max(((unsigned short)980), (((/* implicit */unsigned short) arr_14 [i_0]))))))), (((((/* implicit */_Bool) arr_14 [i_1 + 1])) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1])))) : (arr_9 [i_3])))));
                    arr_19 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) max((((arr_1 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3410493375U)))))) : (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (2199023255552ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_3])), (arr_8 [i_3] [i_3])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned char i_4 = 1; i_4 < 6; i_4 += 3) 
                {
                    arr_23 [i_4] [i_1] = ((/* implicit */unsigned int) var_12);
                    arr_24 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49535)) ? (arr_22 [i_0] [i_4] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58)))))) - (max((var_1), (((/* implicit */unsigned long long int) var_11)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1 + 1])) >= (((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))))));
                    var_15 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) : (max((234361898U), (((/* implicit */unsigned int) var_10))))))), (2199023255552ULL)));
                    var_16 = ((/* implicit */signed char) var_11);
                }
                for (int i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    arr_28 [i_0] [i_5] [i_5] = ((((int) ((2147483647) >= (((/* implicit */int) (_Bool)1))))) > ((-(((/* implicit */int) var_10)))));
                    arr_29 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) max((min(((~(17291862819876523432ULL))), (((/* implicit */unsigned long long int) ((long long int) var_0))))), (((/* implicit */unsigned long long int) arr_9 [i_0]))));
                }
            }
        } 
    } 
}
