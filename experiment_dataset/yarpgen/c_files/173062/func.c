/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173062
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) >> (((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0]))) * (arr_2 [i_0]))) : (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0] [i_0])), (arr_0 [(unsigned char)5] [i_0]))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 6; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [8U] [(unsigned char)7] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)108)) * (((/* implicit */int) (signed char)28))));
                                arr_16 [i_4] [(unsigned char)3] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)135))))) == (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_10)))))), (((max((arr_11 [i_0] [i_0] [i_0] [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2 + 4] [i_3] [i_4])))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)38)) & (((/* implicit */int) (unsigned char)149))))) && (((/* implicit */_Bool) (~(1342467191U))))));
                }
            } 
        } 
    }
    var_13 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36197))) * (((((/* implicit */_Bool) 3878010812743642713ULL)) ? ((((_Bool)0) ? (1105966232U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13476))))) : (((/* implicit */unsigned int) var_2))))));
}
