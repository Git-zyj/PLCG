/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143299
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
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((min((((15360U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)28))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) 732123978U);
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_0] [3ULL] = ((/* implicit */long long int) min((((_Bool) (signed char)54)), ((!(((/* implicit */_Bool) (signed char)114))))));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((732123980U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17)))))) * ((+(0)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (short)32767))))), (min((732123978U), (((/* implicit */unsigned int) (unsigned short)65516)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)124)))))))));
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        var_23 = min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3562843297U))), (max((1211999054U), (((/* implicit */unsigned int) (signed char)-35)))));
    }
    for (short i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_24 = ((((/* implicit */_Bool) (-(-1LL)))) ? (min((((/* implicit */int) (short)-8192)), (((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)45)))))) : (((((/* implicit */int) (unsigned short)65518)) & (((/* implicit */int) (unsigned short)65519)))));
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)48)) || (((/* implicit */_Bool) 11114324566000089419ULL))))), ((unsigned short)0))))) > (((((/* implicit */_Bool) max((18356868341683225930ULL), (((/* implicit */unsigned long long int) (short)-1))))) ? (((unsigned long long int) (signed char)-64)) : (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)0)))))))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518))) : (2713544429U))))))));
        var_27 ^= ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) min((1581422867U), (((/* implicit */unsigned int) (signed char)45))))) : (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (11039531805112113942ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
        {
            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned short) (short)32704)), ((unsigned short)0))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 0LL)) == (18446744073709551615ULL)))))))));
            arr_27 [(signed char)12] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((0ULL) == (((/* implicit */unsigned long long int) -7394425463712106149LL))))), (1ULL))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)117)) >> (((((/* implicit */int) (short)-1)) + (23)))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 0LL))))))));
        }
    }
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) max(((-(9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-105))))) : (((/* implicit */int) var_18))))))))));
}
