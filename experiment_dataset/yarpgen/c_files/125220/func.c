/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125220
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) ((2196875771904LL) | (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-23)))))));
                    var_14 -= ((/* implicit */unsigned long long int) ((unsigned short) max((arr_6 [i_0] [i_2]), (arr_6 [i_0] [i_0]))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) (unsigned short)6407)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_4 [i_0] [i_0] [i_2])))) ? ((-(14434089754791418250ULL))) : (((arr_6 [i_1] [i_0]) + (arr_6 [(unsigned short)1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)41882), (((/* implicit */unsigned short) (signed char)-23))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) (short)5991)))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */int) var_12)), (7340032))))) : (max((((/* implicit */int) max((((/* implicit */unsigned short) (short)5985)), (var_12)))), (((((/* implicit */int) var_0)) >> (((var_11) - (1739614736U)))))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 6; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((((/* implicit */int) arr_14 [i_3] [i_3] [i_4 + 4])) + (((/* implicit */int) arr_13 [i_4 - 3] [i_4 + 1] [i_4 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_4])) <= (((/* implicit */int) max((arr_15 [i_5] [i_5] [i_5] [i_5]), ((signed char)0))))))))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_3] [i_5]))) ? (((int) ((((/* implicit */_Bool) (signed char)24)) ? (-2147483644) : (((/* implicit */int) (signed char)-32))))) : (((/* implicit */int) arr_9 [8] [i_4])))))));
                }
            } 
        } 
    } 
}
