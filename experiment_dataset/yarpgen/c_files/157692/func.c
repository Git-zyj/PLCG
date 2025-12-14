/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157692
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)89)) | (((((/* implicit */_Bool) 3579798811438190623ULL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (682826808181793180LL)))) : (((/* implicit */int) (unsigned char)211))))));
    var_21 = ((/* implicit */unsigned char) 4294967295U);
    var_22 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_23 |= max(((unsigned char)211), ((unsigned char)192));
        arr_4 [0U] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39391))))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((var_13) << (((2101139240U) - (2101139226U))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))))))) : (((long long int) (unsigned short)1))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            var_25 = var_4;
            var_26 = ((/* implicit */unsigned short) ((signed char) (~(var_8))));
            arr_11 [16ULL] [(signed char)0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(4503599627370488LL)))) <= (arr_9 [i_2 + 1] [i_2])));
            var_27 = ((/* implicit */long long int) ((6711061353197860930ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_1] [i_2 - 2])))));
        }
        /* LoopSeq 2 */
        for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            arr_14 [i_1] [i_3 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_3 - 2] [i_1] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_3 + 1] [i_1] [i_3 - 2]))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((long long int) arr_10 [i_6 - 1] [i_6 - 2] [i_1]));
                            var_29 = ((/* implicit */long long int) ((unsigned int) (unsigned char)245));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (unsigned short i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_9 + 2] [i_1] [i_1] [i_9 + 2]))));
                        /* LoopSeq 4 */
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                        {
                            arr_35 [i_8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_1])) % (((/* implicit */int) arr_5 [i_9 - 2] [i_1]))));
                            var_31 = var_17;
                            arr_36 [i_1] [i_1] [i_9 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_15 [i_7] [i_8]))));
                        }
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) 14433823720107821436ULL))) < (((/* implicit */int) var_5))));
                            var_33 *= ((/* implicit */unsigned long long int) (-(arr_20 [i_9 - 2] [(unsigned short)18] [2ULL] [i_11] [i_11])));
                        }
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                        {
                            var_34 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)7] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((14433823720107821436ULL) >= (((/* implicit */unsigned long long int) var_10)))))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19423))) : (arr_30 [i_1] [i_7] [i_1] [i_12])));
                        }
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                        {
                            arr_47 [i_1] [i_1] [i_8] [i_9 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                            var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                        }
                        var_37 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_17 [i_9 - 1]));
                    }
                } 
            } 
            var_38 = ((/* implicit */signed char) var_4);
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        {
                            var_39 = (+(arr_16 [14LL] [i_1] [i_14]));
                            var_40 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [4LL] [i_7] [i_14] [i_15]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_17 = 4; i_17 < 20; i_17 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3338089433U)) - (var_3)));
                arr_58 [i_1] [i_7] [i_17] [i_17] = ((13835058055282163712ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37074))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) ((var_17) ^ (((/* implicit */unsigned long long int) arr_61 [i_17 - 4] [i_1] [i_17] [i_18] [(unsigned short)2] [i_1]))));
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)86))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) : (var_13))))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) + (arr_16 [i_1] [i_1] [i_17])))) >= (arr_45 [i_1] [16U] [i_17 - 1] [i_19 + 1] [i_19 + 2])));
                        }
                    } 
                } 
                arr_64 [(unsigned char)10] [i_7] [i_1] [i_7] = var_16;
            }
            for (long long int i_20 = 4; i_20 < 20; i_20 += 4) /* same iter space */
            {
                var_45 |= ((/* implicit */signed char) ((unsigned long long int) arr_27 [i_20] [i_20 - 4]));
                var_46 = ((/* implicit */long long int) var_15);
            }
        }
    }
}
