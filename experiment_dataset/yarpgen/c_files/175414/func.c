/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175414
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (_Bool)1);
                    arr_10 [i_0] [11U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) || (((((((/* implicit */int) (signed char)125)) <= (((/* implicit */int) var_18)))) && (((/* implicit */_Bool) (~(3069051828U))))))));
                    arr_11 [i_0 - 1] [i_1] [(unsigned short)5] [i_2] |= ((/* implicit */unsigned short) max((max((1921721687112379017ULL), (((/* implicit */unsigned long long int) (short)-28232)))), (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) var_8)), (var_13))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-9718)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))), (((int) arr_1 [i_1] [(signed char)0])))) & (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_15)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-2147483647 - 1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (812447489231960125ULL))) : (((/* implicit */unsigned long long int) arr_12 [(_Bool)1])))))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) 3436550028081051937ULL);
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_24 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
            var_25 = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))) : (1262192686471525802LL)));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27125)) ? (3543655657U) : (((/* implicit */unsigned int) 1689257668))));
        }
        for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) (((-(1487734207497903822ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
            var_28 = ((/* implicit */unsigned long long int) (unsigned short)19229);
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-89)) && ((!(((/* implicit */_Bool) (short)-15512))))))) & (((/* implicit */int) (short)1023))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_20 [i_4] [i_4] [i_4]))));
            var_30 = ((/* implicit */short) ((-3012757189278464118LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_4])))));
            arr_26 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_4] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4] [i_7]))) : (var_8)));
        }
        var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))) : ((+(((/* implicit */int) arr_24 [12]))))))) % (((max((((/* implicit */unsigned int) -141059510)), (2918604769U))) / (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_6)))))))));
        arr_27 [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) 3717377378U))), ((~(arr_22 [i_4] [i_4])))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) (short)(-32767 - 1))))));
        var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((1376362527U) * (((/* implicit */unsigned int) arr_12 [i_8])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        arr_31 [i_8] = ((/* implicit */short) 537337496);
        var_33 = ((/* implicit */_Bool) (short)(-32767 - 1));
        /* LoopSeq 2 */
        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)245)) % (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)7))))));
            /* LoopSeq 4 */
            for (long long int i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
            {
                var_35 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)44))))) + (var_0)));
                arr_36 [i_8] [i_9] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                arr_37 [i_8] [i_9] [i_10 - 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_9] [i_10 - 1] [i_9])) * (((/* implicit */int) (signed char)-125))));
            }
            for (long long int i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */signed char) ((unsigned char) arr_29 [i_11 + 1] [i_9 - 1]));
                /* LoopNest 2 */
                for (short i_12 = 3; i_12 < 17; i_12 += 3) 
                {
                    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_37 += ((/* implicit */unsigned char) (~(var_16)));
                            var_38 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_38 [i_13 - 1] [i_9 - 1] [12]))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) arr_41 [i_8] [i_9 - 1] [i_11 - 1] [i_11] [i_8]))));
                arr_45 [i_8] [i_8] [i_8] &= (_Bool)1;
            }
            for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                var_40 = ((/* implicit */signed char) arr_48 [i_8] [i_8]);
                var_41 *= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_8] [i_14]))))) || (((/* implicit */_Bool) arr_40 [i_8] [i_8] [12ULL] [i_9 - 1])));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 392454431)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (unsigned short)4611))));
                arr_50 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) var_18);
            }
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                var_43 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)53104)) > (arr_52 [i_8] [i_9] [i_8] [i_9 + 1])));
                arr_53 [i_8] [i_9] [i_15] = ((/* implicit */int) ((var_9) >> (((781142366U) - (781142336U)))));
            }
        }
        for (unsigned short i_16 = 1; i_16 < 18; i_16 += 3) /* same iter space */
        {
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-15512)) & (((/* implicit */int) var_18))))) || (((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
            var_45 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)7))));
            arr_57 [i_8] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_16] [i_16] [i_16 - 1]))) - (arr_33 [i_8])));
        }
    }
}
