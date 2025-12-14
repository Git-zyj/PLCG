/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16786
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
    var_20 = ((/* implicit */long long int) ((var_10) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 5292160862923481077LL)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16979)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [2U] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) 2147483647)) <= (((long long int) var_17))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (-4692805636287058930LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            arr_5 [i_0] = ((/* implicit */short) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) (~(((var_10) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) var_2))))), ((-(((/* implicit */int) var_15)))))))));
            var_24 = ((/* implicit */unsigned long long int) (short)-16979);
            var_25 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)2370))))), (((unsigned long long int) var_9)));
            arr_9 [i_0] = ((/* implicit */_Bool) ((short) ((int) (short)-1)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
            {
                arr_16 [19ULL] [i_4] [23LL] = ((/* implicit */long long int) (unsigned short)60256);
                var_26 -= ((/* implicit */_Bool) var_7);
                var_27 = ((/* implicit */short) var_19);
                var_28 = ((/* implicit */signed char) (-(((unsigned int) 36020000925941760LL))));
            }
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
            {
                var_29 += ((/* implicit */unsigned int) max((((/* implicit */int) (short)16979)), (((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) ^ (2180513728209429537LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((-2147483647 - 1))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned short i_7 = 4; i_7 < 23; i_7 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (max((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))), (((((/* implicit */int) var_8)) | (((/* implicit */int) var_17))))))));
                            var_31 ^= ((/* implicit */signed char) (-(min((2034168359262286362ULL), (((/* implicit */unsigned long long int) var_8))))));
                            arr_24 [i_0] [22LL] [14U] [i_6] [i_7] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) & (-5498262364763488886LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                            arr_25 [i_7] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 134217727LL))))), ((+(-4692805636287058949LL)))));
                            var_32 = ((/* implicit */unsigned int) ((((min(((+(((/* implicit */int) var_15)))), ((~(((/* implicit */int) (_Bool)1)))))) + (2147483647))) << ((((+(((/* implicit */int) var_7)))) - (49477)))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (long long int i_9 = 1; i_9 < 23; i_9 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            arr_34 [i_8] [i_10] [4LL] [(unsigned char)19] [i_8] [(unsigned short)18] [i_8] = ((/* implicit */unsigned char) (short)15034);
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) 18446744073709551615ULL))));
                            arr_35 [(unsigned char)23] [i_3] [i_8] [(signed char)19] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2180513728209429511LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_4))));
                        }
                        arr_36 [5LL] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) + (((((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (var_11)))) ^ (((/* implicit */int) var_4))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            arr_39 [i_0] [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) ((short) var_10));
                            var_34 = max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) > (((/* implicit */unsigned long long int) (~(var_3))))))), (((long long int) var_18)));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 4; i_12 < 22; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */short) 16412575714447265257ULL);
                            arr_42 [12LL] [(_Bool)1] [i_8] [i_8] [3LL] [(short)15] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55463)) && (((/* implicit */_Bool) var_7))));
                            arr_43 [i_8] [(unsigned char)3] [15LL] [i_9] [(signed char)21] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (var_19)));
                        }
                        var_36 &= ((/* implicit */unsigned short) (-(min((4611686018427387896LL), (((/* implicit */long long int) var_13))))));
                        arr_44 [i_8] = ((/* implicit */short) min((((var_6) & (((/* implicit */unsigned long long int) 1040733598U)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)90)), (var_15))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (~(((unsigned int) 9597239562022313339ULL)))))));
            var_38 ^= max((((/* implicit */long long int) ((((((/* implicit */int) var_15)) | (((/* implicit */int) var_10)))) << (((9205543426661563209LL) - (9205543426661563195LL)))))), (((((/* implicit */long long int) ((/* implicit */int) (!(var_8))))) / (max((((/* implicit */long long int) var_14)), (var_3))))));
            var_39 &= ((((/* implicit */_Bool) (((_Bool)1) ? (-5292160862923481078LL) : (((/* implicit */long long int) -158648994))))) ? (((/* implicit */long long int) min((619153243U), (((/* implicit */unsigned int) (signed char)49))))) : ((+(4692805636287058929LL))));
        }
    }
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 12; i_14 += 4) 
        {
            for (unsigned char i_15 = 4; i_15 < 14; i_15 += 2) 
            {
                {
                    var_40 = ((/* implicit */int) min((max((((/* implicit */long long int) var_2)), (-4692805636287058929LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2370)))))));
                    var_41 = ((/* implicit */unsigned long long int) ((((-5292160862923481062LL) ^ (((/* implicit */long long int) 774523784U)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) var_14))) : (((/* implicit */int) (unsigned short)52756)))))));
                    var_42 = ((/* implicit */long long int) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 774523784U)))), (((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)180)) - (180))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 14; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_1)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10927))) : (-3269711990541213017LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 268435456)))))) ^ (2047ULL)))));
                            var_44 = ((/* implicit */unsigned long long int) var_5);
                            arr_61 [i_18] [12LL] [i_17] [(signed char)2] [(short)5] [(short)2] [i_17] = ((/* implicit */_Bool) 2048777902849677284ULL);
                            var_45 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)201))))));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (-((+(15349725683779135876ULL))))))));
        }
        var_47 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((var_2) - (var_2)))))));
        arr_62 [7ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((5292160862923481078LL) == (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 11; i_20 += 4) 
    {
        var_48 |= ((/* implicit */unsigned int) (-(-158648994)));
        var_49 = ((/* implicit */long long int) var_1);
        arr_66 [i_20] = ((/* implicit */unsigned short) (+(16646144LL)));
    }
}
