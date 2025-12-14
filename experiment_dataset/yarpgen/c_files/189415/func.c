/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189415
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_19 = arr_0 [i_0];
        var_20 *= ((/* implicit */_Bool) var_11);
        var_21 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 3; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_22 |= ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_16)))), (((/* implicit */int) ((_Bool) arr_5 [i_1 - 1])))));
                        arr_14 [i_4] [i_2] [22U] [i_2 + 1] = ((/* implicit */long long int) max((((unsigned long long int) max((var_0), (((/* implicit */unsigned long long int) -7))))), (arr_9 [(_Bool)1] [i_3 - 1] [i_3 - 1])));
                    }
                    /* vectorizable */
                    for (short i_5 = 3; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_19 [(unsigned short)1] [21LL] [(short)11] [(signed char)18] [i_5 + 3] = ((/* implicit */unsigned char) ((((var_0) >> (((var_17) - (1325018459U))))) ^ (((8258297379348286720ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                        var_23 = ((/* implicit */long long int) ((((_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [(_Bool)1]))) : (arr_16 [i_2 + 3] [i_3 + 2] [i_3 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 3])));
                        var_24 -= ((/* implicit */long long int) (-(((((/* implicit */int) arr_10 [8U] [(signed char)18] [(_Bool)1])) & (((/* implicit */int) var_14))))));
                        arr_20 [i_1 + 2] [(_Bool)1] [3U] [i_5] [14LL] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10610))))) ? (((/* implicit */unsigned long long int) (+(var_3)))) : (10188446694361264895ULL));
                        arr_21 [i_1 + 2] [i_1 - 2] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) var_13)) + (((long long int) var_7))));
                    }
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_4))));
                    var_26 = ((/* implicit */long long int) ((unsigned int) arr_7 [i_1 - 2]));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_3 [i_1 - 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (10188446694361264896ULL))))) >= ((~(8258297379348286701ULL))))))));
            var_28 = ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_15)))) + (2147483647))) << (((((/* implicit */int) var_1)) - (20613)))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_26 [(short)15] [17U] = ((/* implicit */unsigned short) (-(((unsigned long long int) var_10))));
            arr_27 [16LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 10188446694361264909ULL)))) < (((((/* implicit */_Bool) var_8)) ? (8258297379348286701ULL) : (((/* implicit */unsigned long long int) 1072398480U))))));
            var_29 = ((/* implicit */_Bool) ((unsigned short) var_4));
        }
        arr_28 [(unsigned char)21] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (-1)));
        var_30 = ((/* implicit */_Bool) ((int) max(((~(((/* implicit */int) var_11)))), (1244275745))));
    }
    for (signed char i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 3; i_9 < 22; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    arr_37 [2] [(_Bool)1] [6LL] [i_8] = ((/* implicit */_Bool) ((long long int) ((8258297379348286698ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32640))))));
                    var_31 = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [9LL] [i_9 - 1]))) > (var_17)))) - (((/* implicit */int) arr_10 [(short)11] [3LL] [i_10])))), ((-(arr_3 [i_8 + 1])))));
                }
            } 
        } 
        arr_38 [i_8] = ((/* implicit */short) ((var_2) ? (((((/* implicit */int) (signed char)64)) ^ (((/* implicit */int) ((var_8) != (3222568816U)))))) : (((/* implicit */int) min((arr_33 [i_8] [i_8 - 1] [i_8 - 1]), (arr_33 [i_8] [0LL] [i_8]))))));
    }
    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_0))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        arr_41 [3LL] = ((/* implicit */unsigned int) var_12);
        var_33 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_11] [18LL])) - (((/* implicit */int) arr_29 [i_11] [i_11]))));
    }
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        arr_44 [(signed char)12] [i_12] = arr_3 [(signed char)5];
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_10 [i_12] [i_12] [i_12]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_13 = 2; i_13 < 15; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_15 = 2; i_15 < 15; i_15 += 3) 
                {
                    var_35 |= ((/* implicit */_Bool) arr_35 [i_12] [i_14] [i_13] [i_12]);
                    var_36 -= ((/* implicit */short) ((unsigned char) var_8));
                    var_37 ^= (-(var_17));
                }
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (unsigned short)30047))));
                        arr_58 [i_13 - 2] [i_13 - 2] [i_14] [i_16] [i_13 - 2] [i_14] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_32 [13] [(_Bool)0])))) < (((/* implicit */int) arr_5 [i_13 - 1]))));
                        var_39 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_12] [i_12] [1U] [(_Bool)1] [i_12])) && (((/* implicit */_Bool) var_0)))))));
                    }
                    var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_13 - 2])) || (((/* implicit */_Bool) 3708171436816269975ULL))));
                }
                arr_59 [9ULL] [(_Bool)1] [i_14] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_13] [i_14] [i_13 + 1] [(unsigned short)9])) ? (((/* implicit */unsigned int) (+(arr_15 [i_12] [i_13] [i_14])))) : ((+(arr_7 [(unsigned short)20])))));
            }
            for (long long int i_18 = 2; i_18 < 14; i_18 += 3) 
            {
                var_41 = ((((/* implicit */_Bool) (-(0LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_3)))));
                var_42 = ((/* implicit */_Bool) max((var_42), (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_8))))));
                var_43 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) > (arr_9 [(_Bool)1] [i_13 - 1] [i_18 + 1]))));
            }
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                for (short i_20 = 3; i_20 < 14; i_20 += 3) 
                {
                    {
                        var_44 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_12] [i_19] [(_Bool)1])) ? (((10188446694361264887ULL) - (((/* implicit */unsigned long long int) 264241152U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2863)))));
                        var_45 ^= ((/* implicit */_Bool) (short)1337);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_21 = 0; i_21 < 16; i_21 += 3) 
        {
            var_46 = ((/* implicit */_Bool) var_0);
            arr_71 [i_21] = ((/* implicit */signed char) var_6);
            var_47 += ((/* implicit */short) ((_Bool) arr_11 [i_12]));
            /* LoopSeq 2 */
            for (unsigned char i_22 = 1; i_22 < 15; i_22 += 2) /* same iter space */
            {
                var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) var_7))));
                arr_74 [i_21] [i_22 - 1] [13] = ((/* implicit */unsigned int) -8LL);
            }
            for (unsigned char i_23 = 1; i_23 < 15; i_23 += 2) /* same iter space */
            {
                arr_77 [i_21] [i_21] = ((/* implicit */signed char) ((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (var_17)));
                var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((arr_60 [i_23] [i_23 + 1] [i_23 + 1]) + ((~(((/* implicit */int) arr_55 [i_23])))))))));
                var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) var_12))));
            }
        }
    }
    for (int i_24 = 0; i_24 < 21; i_24 += 4) 
    {
        arr_80 [i_24] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_2)), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))))), (arr_33 [i_24] [(short)18] [i_24])))));
        var_51 -= ((/* implicit */_Bool) (unsigned short)52244);
    }
    for (long long int i_25 = 0; i_25 < 23; i_25 += 2) 
    {
        arr_83 [i_25] [i_25] = ((/* implicit */unsigned short) var_15);
        arr_84 [20U] [(unsigned short)15] = ((/* implicit */unsigned long long int) arr_32 [i_25] [12LL]);
        var_52 = ((/* implicit */short) (-(arr_6 [17])));
    }
}
