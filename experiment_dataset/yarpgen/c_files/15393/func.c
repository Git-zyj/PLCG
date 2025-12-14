/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15393
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
    var_17 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (988410600U))), (((/* implicit */unsigned int) arr_0 [i_0] [i_2])))), (((/* implicit */unsigned int) ((unsigned char) min(((unsigned char)226), (((/* implicit */unsigned char) arr_6 [(unsigned char)10] [i_1]))))))));
                    arr_9 [(unsigned char)4] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((int) 988410600U))), (((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) * (var_11))))) * (32U)));
                    var_19 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)221)) == (((/* implicit */int) (signed char)-59))))))), (((((((/* implicit */_Bool) 6354926027894424548ULL)) ? (15205929326525738181ULL) : (((/* implicit */unsigned long long int) 1839589753)))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))))));
                    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 3] [i_2])) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_1 - 2])) : (((/* implicit */int) (_Bool)1))))));
                }
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)180)))))))) * ((-(((/* implicit */int) max(((signed char)-36), (((/* implicit */signed char) arr_6 [i_0] [i_1 - 1])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    arr_12 [(unsigned short)7] [i_1] [(unsigned short)7] = ((((/* implicit */_Bool) max((arr_7 [i_1 - 2] [i_3 + 1] [i_3] [i_3 + 2]), (arr_7 [i_1 - 1] [(_Bool)1] [i_3 + 2] [i_3 + 1])))) || (((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 3]) <= (arr_7 [i_1 - 1] [i_1 - 1] [i_1] [i_3 - 1]))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((max((((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1] [i_1 - 2])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [13])) : (arr_0 [i_0] [i_3 - 1]))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)107)) || (((/* implicit */_Bool) 988410599U))))))))));
                    var_23 = ((/* implicit */int) (((~(arr_7 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 3]))) >= (min((var_1), (arr_5 [i_1 - 3] [i_3 + 1])))));
                }
            }
        } 
    } 
}
