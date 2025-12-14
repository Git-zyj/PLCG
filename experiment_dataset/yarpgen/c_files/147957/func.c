/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147957
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))) >> (((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) arr_2 [i_0]))))))))));
        var_16 = ((/* implicit */short) (-(3ULL)));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))))) ? ((+((~(arr_1 [14U] [i_1]))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-126)) > (((/* implicit */int) (signed char)15)))))) : (arr_1 [(unsigned short)14] [(unsigned short)14])))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2ULL] [i_1 + 3])))))));
        var_17 = ((/* implicit */_Bool) ((unsigned long long int) (!((_Bool)1))));
        var_18 ^= ((/* implicit */long long int) (+(min((17870283321406128128ULL), (((/* implicit */unsigned long long int) arr_2 [0ULL]))))));
        var_19 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) > (min((2147483634), (((/* implicit */int) (signed char)(-127 - 1)))))))) >> ((((+((~(arr_1 [(_Bool)1] [i_1]))))) - (6491349629256102576ULL)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min(((unsigned char)224), (((/* implicit */unsigned char) (signed char)-109))));
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) 0U)))))) ? (((((/* implicit */_Bool) (-(4294967292U)))) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) -9223372036854775797LL)) ? (4503599493152768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)119))))) && (var_6)))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)(-127 - 1))))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) || (((/* implicit */_Bool) 0ULL)))))))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 8; i_8 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */signed char) var_6);
                                arr_25 [i_5] [i_7] [i_5] = max((((/* implicit */int) ((signed char) (unsigned short)0))), (((((((/* implicit */int) (short)32753)) + (((/* implicit */int) (signed char)127)))) & (((/* implicit */int) (unsigned char)126)))));
                                arr_26 [i_2] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2251799813685232LL)) && (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (0U))), (((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */unsigned int) var_2)) : (20U))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) arr_22 [i_5]);
                    var_26 = ((/* implicit */_Bool) ((int) arr_1 [i_5] [i_5]));
                    arr_27 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) (short)-32751)))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2305561534236983296LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))));
}
