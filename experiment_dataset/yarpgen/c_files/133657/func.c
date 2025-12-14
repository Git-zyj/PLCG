/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133657
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
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) var_9))))) ? ((-(9007182074871808ULL))) : (((((/* implicit */unsigned long long int) 1775740464)) - (10786914310216631770ULL))))) < (((/* implicit */unsigned long long int) (+(min((var_9), (((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */int) 10786914310216631770ULL);
                var_22 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)255)))))));
                var_23 = max((((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) 64359841U)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (var_1) : (2049929396U)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)110))))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-112)) ? (17197403118805695961ULL) : (((/* implicit */unsigned long long int) 4230607454U)))), (var_12)));
            }
        } 
    } 
    var_24 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 10786914310216631770ULL)) ? ((-(var_16))) : (((1775740464) / (var_3)))))) * (((((((/* implicit */_Bool) 9007182074871808ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_19))) * ((+(3968U)))))));
    var_25 = ((/* implicit */unsigned char) ((((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))) ? (9849578318882587343ULL) : (((/* implicit */unsigned long long int) ((343580860U) / (var_0))))));
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                {
                    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_2 - 3] [i_3 + 3] [i_4 + 2])), (var_0)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) : (arr_12 [i_2] [i_2 + 1] [i_3 + 2] [i_4 + 1]))) : (((((/* implicit */_Bool) 4230607455U)) ? (255U) : (2824147577U)))));
                    arr_14 [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_2 - 2] [i_2 - 1]);
                    var_27 = ((/* implicit */int) (~(var_10)));
                }
            } 
        } 
    } 
}
