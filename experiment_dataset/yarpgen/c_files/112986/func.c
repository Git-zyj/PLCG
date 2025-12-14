/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112986
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [8] [i_2] &= ((/* implicit */unsigned char) arr_5 [i_0]);
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (1200148588) : (((/* implicit */int) (unsigned char)199))));
                        arr_10 [i_1] [i_1] [i_2] = ((signed char) arr_4 [i_1] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_13 [6] [i_1 - 1] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((long long int) 1764585542))));
                        var_18 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) << (((arr_5 [i_1]) - (396630908)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) << (((((arr_5 [i_1]) - (396630908))) + (1505739971))))));
                    }
                    arr_14 [i_0] [i_1 - 1] [i_0] [i_0] |= ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) (signed char)-81)))))));
        var_20 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
        arr_15 [i_0] = (-(723885895));
        var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (unsigned short)47081)))))));
    }
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_18 [i_5] = (+(var_5));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)15)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)3)) ^ (((/* implicit */int) arr_16 [i_5])))))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16))))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) arr_7 [(signed char)2] [i_6] [(_Bool)1]);
        arr_23 [i_6] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (unsigned short)47053)) | (((((/* implicit */int) arr_11 [i_6] [i_6] [i_6])) + (((/* implicit */int) (signed char)-60)))))));
    }
    for (signed char i_7 = 1; i_7 < 12; i_7 += 1) 
    {
        var_23 = ((/* implicit */signed char) arr_24 [i_7 + 3] [i_7]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 3; i_10 < 14; i_10 += 1) 
                {
                    {
                        arr_36 [i_7] [(unsigned short)11] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_10 - 3]))));
                        arr_37 [i_7] [(unsigned short)8] [(unsigned short)8] [i_10] [i_10] = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)47056))))));
                    }
                } 
            } 
            arr_38 [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)18454)) % (((/* implicit */int) (short)-32755))))));
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 11; i_11 += 3) 
        {
            var_24 = ((/* implicit */int) (signed char)121);
            arr_43 [i_7] = ((/* implicit */unsigned long long int) (unsigned char)99);
        }
    }
    /* LoopSeq 1 */
    for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    {
                        arr_52 [i_12] [i_13] [i_12] [(short)13] [(unsigned char)7] = ((/* implicit */unsigned long long int) arr_44 [i_12] [i_13]);
                        arr_53 [i_12] [i_12] [i_13] [i_14] [i_12] [12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_12] [i_12] [i_14] [4]))) ^ (arr_48 [i_13] [i_12])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (int i_18 = 3; i_18 < 18; i_18 += 4) 
                {
                    for (signed char i_19 = 2; i_19 < 19; i_19 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((3706202081742217694LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47076))))))));
                            var_26 = ((((/* implicit */_Bool) -1819243510)) ? (((/* implicit */int) max((arr_60 [i_19 - 2] [i_19 + 1] [i_19]), (((/* implicit */unsigned char) var_15))))) : (((/* implicit */int) arr_63 [i_12] [i_17] [i_16])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) 
            {
                for (unsigned short i_21 = 2; i_21 < 19; i_21 += 4) 
                {
                    {
                        var_27 = ((/* implicit */int) (unsigned short)47081);
                        var_28 ^= ((/* implicit */signed char) max(((short)32122), (((/* implicit */short) (_Bool)1))));
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_21] [(_Bool)1] [i_21]))) * (((((/* implicit */_Bool) (unsigned short)18483)) ? (7651843226605478880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))))))) || (((((/* implicit */_Bool) arr_71 [i_12] [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) (unsigned short)8397))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_63 [16] [(unsigned short)17] [11LL])) : (-1939568647)));
        }
        for (int i_22 = 0; i_22 < 20; i_22 += 1) /* same iter space */
        {
            arr_75 [i_12] [i_12] = ((((((((int) (-2147483647 - 1))) + (2147483647))) + (2147483647))) << (((arr_48 [i_12] [i_12]) - (6561133845080384951ULL))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44993)) ? (((/* implicit */int) (unsigned short)47104)) : (((/* implicit */int) (unsigned short)18459))));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 20; i_23 += 1) /* same iter space */
        {
            arr_79 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_70 [i_12] [i_12] [i_12] [i_12])) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))) : (arr_65 [i_12] [i_12])));
            arr_80 [i_12] [i_12] = ((/* implicit */unsigned char) arr_50 [6] [i_23] [i_12] [i_23] [6]);
        }
        arr_81 [i_12] [i_12] = ((/* implicit */unsigned short) arr_71 [i_12] [i_12] [i_12] [i_12]);
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_67 [i_12]))));
    }
}
