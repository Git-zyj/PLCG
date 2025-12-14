/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184847
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (arr_2 [4] [i_1] [i_0 + 1])))));
                arr_4 [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [2LL])) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) var_9))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (signed char)-122)))))));
                var_21 = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) (short)-4391)) == (((/* implicit */int) var_16))))), ((signed char)34)));
    /* LoopSeq 3 */
    for (long long int i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) var_16);
        var_24 = ((/* implicit */signed char) -4662213727858608703LL);
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned short)40679)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (short)-4391)))))));
        var_26 ^= ((/* implicit */unsigned short) 2147483647);
        var_27 = ((/* implicit */int) var_5);
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32114)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_3 - 2] [i_4] [i_7 - 1]))));
                            var_29 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (short)4391)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)31371)) && (((/* implicit */_Bool) arr_18 [i_5] [i_5] [(signed char)0])))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_24 [i_5] [i_4] [i_4] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (short)-4391)) >= (((/* implicit */int) var_17)))));
                            var_30 = ((/* implicit */unsigned int) (unsigned char)0);
                        }
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_31 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13161))) != (var_19))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_16))))) : (((/* implicit */int) (unsigned short)34883))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_9 [i_3]))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)50)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned short) var_19)))));
                        }
                        arr_27 [i_3 - 2] [i_4] [i_4] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 + 1])));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)151))));
                    }
                } 
            } 
            arr_28 [i_4] &= var_18;
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_31 [i_3] [i_3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 - 2]))) == (arr_15 [i_3] [i_10] [i_10] [i_3 + 1])));
            var_35 = ((((/* implicit */int) (signed char)127)) << (((((12627648675182809043ULL) << (((2147483647) - (2147483586))))) - (6917529027641081833ULL))));
            arr_32 [i_10] [i_3] [i_10] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_5 [i_3] [i_10]))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_36 = ((((/* implicit */int) ((unsigned short) (signed char)70))) == (var_2));
            arr_36 [i_3] [i_3] [i_3] = ((/* implicit */signed char) 262237379);
        }
    }
    /* vectorizable */
    for (long long int i_12 = 2; i_12 < 23; i_12 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned int) -671488577);
        var_38 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_12 - 2] [i_12] [i_12]))));
        var_39 = ((/* implicit */unsigned short) (signed char)0);
    }
    var_40 = ((/* implicit */short) (unsigned short)63331);
    var_41 = ((/* implicit */unsigned long long int) 3748667931U);
}
