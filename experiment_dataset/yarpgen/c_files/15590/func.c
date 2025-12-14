/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15590
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
    var_15 ^= ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((signed char) var_4))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) var_10);
            arr_6 [i_0] [i_0] [6ULL] |= ((/* implicit */short) ((((((/* implicit */int) (signed char)72)) >> (((18446744073709551604ULL) - (18446744073709551589ULL))))) << ((((~(((/* implicit */int) arr_5 [i_1] [i_1] [i_0 + 1])))) + (2)))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_0 [i_0 - 1])))) + (var_0))))));
            var_18 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((short)11386), ((short)-11386)))) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_10)))) == ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)7)))) ^ (((/* implicit */int) ((signed char) arr_0 [i_1])))))));
            var_19 = ((/* implicit */unsigned char) 12737818949198814367ULL);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((_Bool) var_5));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_2] [(signed char)7] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            arr_19 [i_5] [i_4] [(_Bool)0] [i_4] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 1] [(_Bool)1])) & (((/* implicit */int) var_4))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_21 &= ((/* implicit */unsigned char) ((((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0 - 1] [(_Bool)1] [i_4] [i_6])))) - (((/* implicit */int) arr_13 [i_0 - 1] [0LL]))));
                            arr_23 [i_4] [i_2] [i_3] [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1))));
                            arr_24 [i_4] [(signed char)3] [i_4] [i_4 - 2] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)34446)) * (((/* implicit */int) var_9)))) / (((/* implicit */int) (_Bool)1))));
                            var_22 = (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_4 + 1])));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_0] [i_2] [(signed char)9]) : (arr_7 [i_0 - 1] [i_2] [i_0 + 1])));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 564172296)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2))))));
                        }
                        arr_28 [i_0] [i_4] = ((/* implicit */unsigned char) ((((arr_17 [i_0] [i_0] [i_3] [i_2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((((/* implicit */_Bool) var_8)) ? (arr_17 [i_0] [i_2] [i_0 + 1] [i_4] [i_0]) : (arr_17 [i_0] [i_0 + 1] [i_3] [i_4] [i_2])))));
                        var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_3] [i_2] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)34446)) : (((/* implicit */int) var_8))))))) ? ((~(((/* implicit */int) (unsigned char)245)))) : ((+(((/* implicit */int) var_3))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) ((unsigned long long int) max((var_0), (((/* implicit */int) arr_4 [i_0 + 1])))));
            var_27 |= ((/* implicit */unsigned long long int) 35862174799127584LL);
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57023)) / (((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) arr_21 [i_0] [(_Bool)1])))) : (((((/* implicit */_Bool) max(((signed char)46), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (short)-3824)))) : (((/* implicit */int) (unsigned short)0))))));
            arr_29 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)23))))) ? (3063854879U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_20 [i_0] [i_0] [(unsigned char)7] [i_2] [i_2])))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((var_4) ? (2601214165725554424LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2] [i_2] [10] [(short)6] [10] [i_0] [i_0])))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_1)) ? (35862174799127580LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967273U)) ? (-35862174799127581LL) : (((/* implicit */long long int) 134217216))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_11))))))))));
            arr_33 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                arr_37 [i_0] [i_8] [i_8] [4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -7941224208870803888LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)59))))))) * (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1])) ? (((arr_4 [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (5231760383238033972LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-4405)))))))));
                var_30 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_9] [i_0 - 1] [i_9]))))), (((unsigned long long int) arr_20 [i_0] [i_0] [i_9] [i_0 + 1] [(unsigned short)7]))));
                arr_38 [i_9] [i_9] [i_8] [i_0] = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (int i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        {
                            arr_45 [i_11] [i_0] [i_10] [i_10] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((long long int) (short)30573)) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))) ? (((((var_6) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)(-32767 - 1))))) : (((/* implicit */int) ((signed char) arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_10] [i_11] [i_8] [(signed char)9]))))) : (-1372838139)));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((arr_17 [i_11] [i_10] [i_9] [i_8] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-786)) : (((/* implicit */int) (signed char)111))))))))));
                        }
                    } 
                } 
            }
            arr_46 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [(_Bool)1] [i_0] [i_0 + 1] [(_Bool)1])) ? (((/* implicit */int) ((_Bool) -35862174799127583LL))) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0]))));
        }
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 2; i_15 < 8; i_15 += 1) 
                        {
                            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-7125)))) : (((/* implicit */int) (short)-7105))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_0 - 1] [i_15 + 3] [i_0 - 1]))) - (6811190102142406062ULL))))));
                            arr_59 [i_15] [i_12] [10ULL] [i_12] [i_0 + 1] = ((/* implicit */long long int) ((11329466477637802165ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((signed char) var_7)))))));
                            var_33 = ((/* implicit */long long int) (unsigned short)65511);
                        }
                        for (signed char i_16 = 3; i_16 < 10; i_16 += 3) 
                        {
                            arr_64 [i_16] [i_13] = ((/* implicit */signed char) arr_10 [i_12] [i_13] [i_14] [i_16 + 1]);
                            var_34 = ((/* implicit */_Bool) (-(max((arr_55 [i_0 + 1] [i_16 - 1] [i_13]), (((/* implicit */unsigned long long int) arr_12 [i_16 - 1]))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) arr_49 [i_0])) ? (7117277596071749453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((var_10) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_20 [i_0] [(short)3] [(short)7] [i_0] [(short)3])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-88)) < (((/* implicit */int) var_4))))))) : (((/* implicit */int) max(((signed char)37), (var_11))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned char) (signed char)72);
    }
    var_38 = ((((/* implicit */int) var_6)) == (((/* implicit */int) var_2)));
}
