/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169435
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1]));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (short)-23588);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_10 [(_Bool)1] [i_1] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 6871951187110998568LL)) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (var_8))), (((/* implicit */unsigned long long int) var_5))));
                            var_13 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(834840631249845001LL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)39)))) ^ ((~((~(((/* implicit */int) (_Bool)1))))))));
                            var_14 = ((/* implicit */_Bool) var_11);
                            arr_11 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)73))) | (var_2)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)31500))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_4] [i_4] [i_4]));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_3 [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_7 [i_4])) ? (var_10) : (((/* implicit */unsigned int) arr_0 [(_Bool)1])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [13] [i_4])))))));
        arr_17 [(unsigned char)10] [i_4] = ((((/* implicit */_Bool) 2074436034U)) ? (arr_7 [i_4]) : (arr_7 [i_4]));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [i_5])) || (((/* implicit */_Bool) arr_18 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_5]) == (((/* implicit */unsigned long long int) var_2)))))) : ((~(var_9)))));
        arr_22 [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (signed char)-32))))) : (var_7)))));
        arr_23 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3506850158U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) != (min((10ULL), (((/* implicit */unsigned long long int) (short)-32753)))))))));
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775787LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (2113887040))))))) ? ((+(((unsigned int) arr_19 [i_5])))) : (((/* implicit */unsigned int) ((arr_20 [i_5] [i_5]) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) var_6)))))));
    }
}
