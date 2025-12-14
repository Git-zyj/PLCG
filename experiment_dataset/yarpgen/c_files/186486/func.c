/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186486
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) var_2);
        var_21 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -520831851752930331LL)) ? (-520831851752930329LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_19)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (unsigned short)10123)))));
        var_23 -= ((-520831851752930329LL) / (((/* implicit */long long int) ((/* implicit */int) var_19))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_19)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)18456)) >= (((/* implicit */int) (unsigned short)55412)))))));
    }
    for (int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) ((((((-520831851752930330LL) >= (var_16))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned short)64479)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)175)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -520831851752930332LL)))))));
            arr_10 [i_2] [(signed char)15] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((var_15) + (2147483647))) << (((((/* implicit */int) var_4)) - (16024)))))) : (((var_16) | (((/* implicit */long long int) ((/* implicit */int) var_19))))))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10124))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967294U))))) - (10101U)))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-9174)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_19)) || ((!(((/* implicit */_Bool) var_15)))))))) : ((((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) (signed char)-101)) ? (1140309652U) : (((/* implicit */unsigned int) -1776512978)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) var_12)) : (-89134536)))))))))));
                            var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 520831851752930332LL)) ? (((/* implicit */int) (short)32767)) : (0)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_7 = 3; i_7 < 22; i_7 += 4) 
        {
            var_28 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-20239)) + (2147483647))) >> (((var_16) - (3128059080938218355LL)))));
            var_29 = ((/* implicit */int) -520831851752930332LL);
            var_30 = ((/* implicit */signed char) (unsigned char)64);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_25 [i_8] = ((/* implicit */signed char) (-(((1U) >> (((((/* implicit */int) (signed char)-19)) + (44)))))));
            var_31 = ((/* implicit */unsigned char) ((short) -520831851752930329LL));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) / (2743459671U)));
                var_33 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) ^ (570486589722084902ULL));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_5)) : (((531298650) << (((563526486) - (563526486))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        arr_35 [i_11] [i_10] [i_2] [i_2] = ((/* implicit */signed char) var_8);
                        arr_36 [i_2] [14U] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-60))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_6)) : (var_11))))));
                    }
                    arr_37 [i_11] [i_10] [i_9] [(_Bool)1] = ((/* implicit */long long int) (unsigned char)0);
                    arr_38 [i_2 - 1] [i_9] [i_10] [i_10] [i_10] [i_11] = ((/* implicit */short) ((520831851752930332LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))));
                    var_35 = ((/* implicit */_Bool) -520831851752930332LL);
                }
                for (long long int i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
                {
                    arr_42 [i_10] = ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (long long int i_14 = 2; i_14 < 21; i_14 += 2) 
                    {
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -520831851752930335LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)62))))) : (((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                        arr_46 [i_2] [i_9] [i_10] [i_13] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                        var_37 = ((/* implicit */short) (-(((var_16) >> (((((/* implicit */int) var_9)) - (100)))))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) 5U))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) > (4294967290U))))));
                        var_39 = ((/* implicit */unsigned short) -1794562954);
                    }
                }
            }
            var_40 = ((/* implicit */unsigned int) (signed char)-78);
            arr_47 [i_2] [i_2] [(short)15] = ((((/* implicit */int) var_14)) >> (((((((/* implicit */int) (signed char)112)) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_9)))) + (6394))))) - (29360121))));
            /* LoopNest 3 */
            for (unsigned char i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                for (unsigned int i_16 = 2; i_16 < 22; i_16 += 4) 
                {
                    for (unsigned int i_17 = 4; i_17 < 22; i_17 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) var_19)))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) var_1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -520831851752930332LL)))))))));
                            var_42 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (short)26061)))), (var_6)));
                            var_43 = ((/* implicit */unsigned char) var_4);
                            arr_57 [i_2] [i_15] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
            } 
        }
        arr_58 [i_2 - 1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_8))))) : (((/* implicit */int) (signed char)60))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-9074772487871562973LL) <= (var_16))))) & (((((/* implicit */_Bool) var_11)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) : (((var_11) % (((/* implicit */long long int) 5U)))));
    }
    for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        var_44 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)254))))) + (((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_0))))))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        var_45 = ((/* implicit */unsigned long long int) var_3);
    }
    var_46 = ((var_6) > (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_14)))))));
    var_47 ^= ((/* implicit */unsigned char) -4485001865454775714LL);
}
