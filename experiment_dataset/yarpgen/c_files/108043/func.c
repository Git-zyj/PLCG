/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108043
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
    for (short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 + 1] = ((/* implicit */signed char) arr_0 [i_1]);
                var_14 -= ((/* implicit */int) ((((1871582388U) & (((/* implicit */unsigned int) 2147483647)))) / (1871582388U)));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned long long int) ((var_9) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1871582388U) : (16760832U)))) ? (((/* implicit */int) ((unsigned short) (signed char)4))) : (((((((/* implicit */int) var_2)) + (2147483647))) >> (((/* implicit */int) var_3)))))) : (var_5)));
    var_16 = ((/* implicit */_Bool) (-(((var_1) >> (((((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)4)))) + (9740)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */int) 3758096384U);
        var_18 += ((/* implicit */unsigned char) ((unsigned short) arr_5 [i_2] [i_2]));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)43)) <= (((/* implicit */int) (signed char)43))))) : ((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))));
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned int) (signed char)60);
        arr_12 [i_3] = ((/* implicit */signed char) max((6284546782295028420ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_21 -= ((/* implicit */long long int) arr_2 [i_4]);
                    arr_17 [i_3] [i_4] [i_3] [(unsigned char)2] = (-9223372036854775807LL - 1LL);
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_23 [i_4] [i_4] = ((((((/* implicit */int) (signed char)-5)) == (-1))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) 1871582416U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192))))), (((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5])) ? (arr_4 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_4] [i_4] [i_3])))))))));
                                var_22 -= arr_0 [(signed char)9];
                                var_23 ^= ((/* implicit */unsigned long long int) arr_4 [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
    {
        var_24 -= ((/* implicit */signed char) arr_25 [i_8]);
        var_25 -= (+(((((/* implicit */_Bool) (short)32454)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))));
        arr_26 [8ULL] = -2147483647;
        arr_27 [i_8] = ((/* implicit */unsigned int) ((long long int) (short)(-32767 - 1)));
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 9; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) var_11);
                    arr_32 [i_8] [10LL] [i_9] = ((/* implicit */unsigned short) ((_Bool) ((short) var_8)));
                    var_27 -= ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    }
}
