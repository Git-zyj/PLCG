/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139052
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((long long int) -6550450948551171198LL));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-6550450948551171198LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))) : (25165824U)));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 7; i_2 += 1) 
    {
        var_22 |= ((/* implicit */unsigned int) (~(arr_2 [i_2 + 2] [i_2 + 1])));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6550450948551171184LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6)))))) : (var_15)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_9 [i_3] = ((/* implicit */unsigned short) arr_7 [(signed char)2]);
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_24 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_4]))));
                        arr_18 [i_3] [8ULL] [8ULL] [i_5 - 2] [i_6] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)118)) || (((/* implicit */_Bool) arr_6 [i_4])))))))));
                        arr_19 [i_3] [i_3] [(short)5] [i_4] [i_5] [(unsigned char)12] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-1)), (-6550450948551171198LL)));
                        var_25 = ((/* implicit */_Bool) (((+(-5201232374951354997LL))) - (((/* implicit */long long int) 237488055U))));
                    }
                } 
            } 
        } 
        arr_20 [(unsigned char)8] [8] = ((/* implicit */unsigned long long int) var_7);
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        arr_23 [i_7] [i_7] = ((/* implicit */unsigned short) var_15);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    var_26 ^= ((/* implicit */_Bool) var_13);
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) < (0ULL)))));
                                var_28 *= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [16LL] [i_9] [i_7]))))))))) < ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-28375))) * (var_2))))));
                                var_29 = ((/* implicit */unsigned int) ((signed char) arr_33 [i_7] [i_8] [i_7] [i_8] [i_10] [i_11]));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((((((/* implicit */unsigned int) -1)) | (var_2))) >> (((((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_8] [i_9] [i_10] [i_11])) ? (((/* implicit */int) arr_33 [i_7] [i_7] [i_8] [i_9] [i_10] [(_Bool)1])) : (((/* implicit */int) (unsigned short)0))))))));
                                arr_34 [i_8] [i_8] [i_8] [20U] [5U] = ((/* implicit */long long int) (+(var_2)));
                            }
                        } 
                    } 
                    var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_32 [i_7] [i_8] [1LL] [i_7]))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) (-(((arr_24 [i_7]) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [2] [i_7])))))));
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        var_33 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
        arr_37 [i_12] = ((/* implicit */short) 18446744073709551605ULL);
    }
    var_34 = ((/* implicit */long long int) -1499548958);
}
