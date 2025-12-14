/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132963
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_0 - 2] [i_0 + 2] [i_1 + 3] [i_0 + 2]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_2)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)48711)), (var_2)))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) 2708542873U))))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-9007199254740992LL) : (-6675631044405247521LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 3763809826U)) != (var_1))))) : (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */unsigned long long int) 3110554687425325898LL)) : (arr_3 [i_0] [i_2])))))) ? (((((/* implicit */unsigned long long int) min((1537447297U), (((/* implicit */unsigned int) 33292288))))) * (max((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_0 - 3] [(signed char)11] [13]))))) : (((/* implicit */unsigned long long int) ((min((arr_5 [1LL] [i_1] [i_1] [(signed char)1]), (((/* implicit */long long int) var_2)))) >> (((((((/* implicit */int) var_5)) | (((/* implicit */int) var_5)))) - (160))))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_2 [13ULL] [i_1] [(unsigned char)12]) + (((/* implicit */unsigned long long int) 1537447297U)))) & (((/* implicit */unsigned long long int) min((2757519981U), (((/* implicit */unsigned int) (_Bool)1)))))))) ? (((((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [13U])) == (var_7))) ? (max((var_0), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-16152)) ? (var_0) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0 - 2])))))));
                }
                arr_7 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-90)), (var_5)))), (((-9007199254740992LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023)))))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26405)) ? (33292288) : (((/* implicit */int) (signed char)64))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (var_0))))) != (min((((/* implicit */unsigned long long int) -33292289)), (arr_2 [i_1 + 3] [0LL] [i_1 + 3])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7))), (max((max((var_3), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (unsigned short)4678)))))))));
}
