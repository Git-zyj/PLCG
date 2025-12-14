/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11513
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [5] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)0)))))) ? (((((/* implicit */_Bool) (~(2047322109298541361ULL)))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)0)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (unsigned char)210))))))));
                                arr_13 [2U] [2U] [i_2] [i_1] [i_0] [2U] |= ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [i_1])) >> (((((/* implicit */int) var_11)) + (5858)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_3] [i_2] [i_0] [i_4 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-89)))))))));
                                var_20 -= ((/* implicit */signed char) (~(min((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_5)))), (max((((/* implicit */int) arr_7 [i_1] [i_2] [4LL])), (1135382393)))))));
                                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0ULL)))) ? ((~(((/* implicit */int) arr_8 [i_0] [i_1] [(short)13] [i_3 - 1] [i_1])))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14))))))) ? (max(((~(((/* implicit */int) (unsigned short)1)))), ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_0 [i_1] [i_2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (unsigned short)65520);
    var_23 = ((/* implicit */unsigned int) var_14);
}
