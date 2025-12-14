/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1355
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) 1216705153U)) ? (((/* implicit */unsigned long long int) 16383U)) : (arr_0 [i_0] [i_0]));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(var_0)));
            arr_9 [i_0] = ((unsigned long long int) 4294950909U);
            var_10 = ((/* implicit */unsigned short) (-(((4294950890U) + (((/* implicit */unsigned int) -121377120))))));
        }
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 16388U)) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) / (arr_0 [i_2] [(signed char)9])))));
        arr_12 [(unsigned char)9] = ((/* implicit */unsigned char) var_2);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */int) (+(arr_2 [i_3])));
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
            {
                for (unsigned int i_6 = 4; i_6 < 14; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            var_12 += ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [(short)14] [i_5] [i_5] [i_5 - 1] [i_6])) ? ((+(4294950930U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            var_13 = arr_23 [i_4 - 1] [i_6] [i_6 - 1] [i_4];
                            var_14 -= ((unsigned long long int) arr_24 [i_3] [i_4 + 2] [i_6] [4ULL]);
                            arr_28 [i_4] = ((/* implicit */unsigned long long int) (-(((4294950904U) % (4294950882U)))));
                        }
                        arr_29 [i_4] = ((/* implicit */unsigned long long int) 16375U);
                        /* LoopSeq 1 */
                        for (long long int i_8 = 4; i_8 < 14; i_8 += 4) 
                        {
                            arr_32 [i_4] [(short)6] [i_4] = ((/* implicit */unsigned int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_4]);
                            var_15 = 18446744073709551602ULL;
                        }
                        arr_33 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) (+(arr_18 [i_4] [i_4 + 1] [(unsigned char)11]))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)10);
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 16365U)) ? (3027446576U) : (16390U))) <= (((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_20 [11LL] [i_9])), (arr_34 [i_9]))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        var_17 -= ((/* implicit */unsigned int) max((((((unsigned long long int) var_6)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [8ULL])) && (((/* implicit */_Bool) var_9)))))))), (((((/* implicit */_Bool) var_1)) ? ((-(5ULL))) : (((unsigned long long int) var_0))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            var_18 = ((/* implicit */long long int) 3808848224858071714ULL);
            arr_42 [i_10] [i_10] [i_10] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) arr_20 [i_10] [i_11])) : (((/* implicit */int) arr_16 [i_11] [i_10]))));
            var_19 = ((/* implicit */signed char) 1542545228);
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_45 [i_10] [5ULL] [i_12] [i_12] = ((/* implicit */unsigned long long int) 4294950909U);
                arr_46 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294950930U))));
                var_20 ^= ((/* implicit */int) 16392U);
                arr_47 [i_10] [i_12] [i_12] = ((/* implicit */int) ((unsigned char) ((4294950906U) / (((/* implicit */unsigned int) -158706159)))));
            }
            var_21 ^= ((((/* implicit */_Bool) arr_10 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_10 [i_10]));
        }
        for (unsigned int i_13 = 1; i_13 < 8; i_13 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) (-((-(28ULL)))))) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_41 [i_13] [i_13 - 1] [i_13 + 1])))))))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 1; i_14 < 9; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        {
                            arr_56 [2ULL] [(unsigned char)1] [2ULL] [i_15] [4ULL] [i_15] [i_15] = 11554740866715473963ULL;
                            arr_57 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned int) 158706160)) : (11U)));
                            var_23 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) ((arr_1 [i_10] [i_10]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10] [i_10] [i_16] [i_14] [0LL] [i_15] [i_16])))))) : (((/* implicit */int) arr_38 [i_10] [i_10]))))), (15698364677985667987ULL)));
                            var_24 = ((/* implicit */long long int) ((_Bool) ((unsigned char) arr_35 [i_14 - 1])));
                            arr_58 [i_14 + 1] [i_13] [8ULL] [i_15] [2ULL] [i_15] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_6), (arr_5 [i_10] [i_15] [i_16])))) : (min((((/* implicit */int) arr_16 [i_10] [i_13 + 2])), (939675451))))));
                        }
                    } 
                } 
            } 
            arr_59 [i_10] [i_13] = ((/* implicit */unsigned long long int) var_6);
            arr_60 [i_10] [i_10] = (+((((+(-2147483644))) / (((/* implicit */int) arr_5 [i_13 + 1] [i_10] [i_10])))));
        }
        for (unsigned int i_17 = 1; i_17 < 8; i_17 += 1) /* same iter space */
        {
            arr_63 [i_17 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned short) var_3)), ((unsigned short)24))))), (1729535001834216955LL)));
            arr_64 [i_10] [i_17 - 1] = ((/* implicit */int) var_6);
        }
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_26 = ((/* implicit */unsigned char) ((unsigned short) var_9));
}
