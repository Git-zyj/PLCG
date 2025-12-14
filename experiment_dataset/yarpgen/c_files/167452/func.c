/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167452
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 ^= (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_16)))));
        arr_2 [i_0] = ((/* implicit */int) (~(var_17)));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((2526561789U) << (((((/* implicit */int) (signed char)99)) - (75))))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) var_14)) == (6963347319298146381LL)))))))));
        var_19 = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_15)))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_6))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) / (((((/* implicit */int) (short)8618)) | (((/* implicit */int) (signed char)127))))))));
        arr_7 [i_1] [(short)5] = ((/* implicit */long long int) var_8);
    }
    for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_19 [0ULL] [i_4] [i_3 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) var_14))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 2; i_6 < 23; i_6 += 4) 
                        {
                            arr_24 [9LL] [i_4] = ((/* implicit */signed char) (~(var_10)));
                            var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)26815)) ? (((/* implicit */int) (_Bool)0)) : (-1534995351)));
                        }
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_14)))));
                            arr_28 [i_2] [i_7] [6U] [i_5 - 1] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_1)))));
                            var_23 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_9)) : (var_11));
                            arr_29 [i_2 + 2] [i_2] [i_7] [i_2] [10] [i_2 - 2] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? ((~(var_17))) : (((var_17) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            arr_32 [i_8 - 2] [i_3] [i_2] [i_4] [i_2] [i_3] [i_2] &= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)53291))));
                            var_24 = (~(((/* implicit */int) ((var_12) != (((/* implicit */int) var_8))))));
                            var_25 = ((/* implicit */short) ((((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15))))));
                        }
                        for (long long int i_9 = 4; i_9 < 22; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)107)) && (((/* implicit */_Bool) 2403640627493143079ULL))))) >> ((((+(8844717408993111500ULL))) - (8844717408993111471ULL)))));
                            arr_35 [i_2 - 2] [i_2 - 2] [15ULL] [i_4 - 2] [i_2 - 2] [5U] = ((/* implicit */unsigned int) var_3);
                            var_27 |= (!(((/* implicit */_Bool) ((int) var_15))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_40 [14LL] [(signed char)15] [i_4] [14LL] [14LL] = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                            arr_41 [4LL] [i_3 - 1] [i_3 - 1] [i_5] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((var_17) + (9223372036854775807LL))) << ((((-(var_16))) - (6660938546036851212LL)))));
                        }
                        for (long long int i_11 = 4; i_11 < 20; i_11 += 3) 
                        {
                            arr_44 [(short)12] [i_5] [16LL] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3296638901072814727LL)) ? (70368727400448LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))))) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_45 [i_5] [i_3 + 2] [i_3 + 2] [i_5] [i_11] = ((/* implicit */signed char) var_5);
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) (~((~(1481548108443643676ULL)))));
                            var_29 |= ((/* implicit */unsigned long long int) (-((-(0U)))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_15)))))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_4)) : (var_9)))));
                            arr_48 [20U] [i_3] [i_3] [i_4] [(signed char)19] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) var_12)))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    {
                        arr_53 [(unsigned short)15] [i_2] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                        arr_54 [7] [(unsigned short)22] [(_Bool)1] [11] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_10)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_15) : (var_11)))) ? (((((/* implicit */_Bool) -1528303851)) ? (3924148046268279617ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12233)) << (((((/* implicit */int) (unsigned short)53055)) - (53050))))))));
        }
        arr_55 [i_2] = (-(((/* implicit */int) var_8)));
        var_32 -= ((/* implicit */signed char) max(((unsigned short)53309), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-108))))))))));
    }
    var_33 -= ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))) ^ (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        arr_58 [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((((/* implicit */int) (short)7694)) ^ (((/* implicit */int) (short)-15))))))) / (((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) var_4)) - (var_14)))))));
        var_34 = ((/* implicit */short) var_11);
    }
}
