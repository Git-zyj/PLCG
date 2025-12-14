/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180709
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-71))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-77), (((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) (signed char)-73))))))))) != (var_8)));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)118))))), (15796270849584181838ULL)));
    var_14 = ((/* implicit */unsigned short) max((((((12344624675056594373ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24451))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((var_8) - (8435328685668744898ULL)))))))), (3917407663702594385ULL)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) max((((/* implicit */unsigned char) max(((signed char)-81), (var_0)))), (arr_9 [i_2] [i_3])))) : (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (short)-32754)) + (32780))))))))));
                arr_10 [i_3] [i_3] = ((/* implicit */signed char) max((9096208572401056504ULL), (((/* implicit */unsigned long long int) (signed char)-18))));
                arr_11 [(unsigned short)18] [(unsigned short)18] |= ((/* implicit */unsigned long long int) (short)-8337);
            }
        } 
    } 
}
