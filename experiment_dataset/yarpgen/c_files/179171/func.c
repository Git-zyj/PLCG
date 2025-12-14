/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179171
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2 - 1]))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */signed char) (~(min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) < (var_4))))))));
                    arr_9 [i_2] [(unsigned char)10] [i_2] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3])) - (((/* implicit */int) (signed char)-34))))) ? (((/* implicit */int) min(((unsigned char)3), (var_7)))) : ((+(((/* implicit */int) arr_11 [i_3]))))))) : (((-4992417013642240551LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_7)))))))));
                arr_16 [i_3] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (var_8))) : (min((((/* implicit */long long int) var_7)), (arr_10 [i_3])))));
                var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)0))))));
                var_14 = ((/* implicit */short) var_10);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    arr_25 [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-29974)) : (((/* implicit */int) (_Bool)1))));
                    arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0))))) : (0LL)))) ? (((((_Bool) 2933969954588612230ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (9223372036854775807LL)))) : (15512774119120939395ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (long long int i_8 = 4; i_8 < 21; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 20; i_12 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_32 [i_8] [(_Bool)1]);
                                var_17 = ((/* implicit */signed char) (short)16383);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 4; i_13 < 20; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_42 [i_13] [i_10] [i_13]))))), ((signed char)-68))))));
                                var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8 - 1])))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_8 - 1])) || (arr_28 [i_8 - 1]))))));
                                arr_47 [i_13] = ((/* implicit */signed char) (((~(var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_41 [i_8] [i_9] [i_13] [i_9] [i_14]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))))))));
                                arr_48 [i_8 - 3] [i_13] [i_10] [(short)9] [i_13] [i_14] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (unsigned char)159)) - (153)))))) ? (((arr_41 [i_8 + 2] [i_9] [(unsigned short)0] [i_15] [i_10]) >> (((arr_27 [i_9] [i_8]) - (15943539825356348786ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_10] [i_15])))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_36 [i_8 - 4] [18ULL] [i_8 + 1] [i_8 - 4])) : (((/* implicit */int) (signed char)-127)))) : ((-(((/* implicit */int) ((signed char) (unsigned short)37719)))))));
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (unsigned short)23)))));
                    }
                    for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        arr_54 [i_8] [21LL] [(unsigned char)22] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2933969954588612230ULL)) ? (3804253494U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_32 [i_9] [17U])), ((unsigned short)65535)))) ? (min((((/* implicit */long long int) (unsigned char)1)), (-6799033647279911733LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (965306451U)))))))));
                        var_22 = 762388575U;
                    }
                }
            } 
        } 
    } 
}
