/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169507
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_12 += ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_1] [i_1])))));
            var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)39269)) ? (((/* implicit */int) (short)5628)) : (((/* implicit */int) var_7)))) << ((((((+(((/* implicit */int) (short)-5628)))) + (5655))) - (10)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) (+(arr_1 [i_2])));
            var_15 += ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-5626)) + (((/* implicit */int) var_2)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_3)))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? ((((_Bool)1) ? (-1LL) : (34902897112121344LL))) : (arr_2 [i_0] [i_0] [12ULL])));
        }
        for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) -5130240845015011784LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_3])) < (((/* implicit */int) arr_9 [(_Bool)1]))))))));
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) : (arr_1 [i_3]))))));
            var_19 = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3074034600133006277LL)));
            var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_3])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 4] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) var_3))))));
        }
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-30)) / (((/* implicit */int) (signed char)26))));
            var_22 = ((/* implicit */_Bool) arr_9 [11]);
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (short i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_20 [i_4] [i_4 + 1] [i_5] [i_4 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0] [i_4] [i_4] [i_5] [i_6]))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_4]))));
                    }
                } 
            } 
            arr_21 [i_4] = ((/* implicit */long long int) (_Bool)1);
        }
    }
    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 4294967288LL)), (max((min((((/* implicit */unsigned long long int) arr_29 [i_9] [i_9] [i_9] [i_9])), (var_0))), (((/* implicit */unsigned long long int) arr_16 [i_10 - 1] [i_10] [i_10] [i_10 - 1]))))));
                            var_25 *= ((/* implicit */signed char) arr_4 [i_7]);
                            var_26 = ((/* implicit */int) arr_8 [i_10 - 1] [i_10 - 1]);
                        }
                        var_27 = (+(((/* implicit */int) (unsigned short)16384)));
                    }
                } 
            } 
        } 
        var_28 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_28 [i_7] [i_7] [i_7] [i_7]), (arr_28 [i_7] [i_7] [i_7] [i_7]))))) : (max((var_0), (((/* implicit */unsigned long long int) arr_28 [i_7] [i_7] [i_7] [i_7])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 2; i_12 < 10; i_12 += 4) 
    {
        for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            {
                var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_12] [i_12 + 1]))) ^ (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_13])))))) ? (((/* implicit */unsigned long long int) arr_14 [i_13])) : (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) -1196094674)) : (16140901064495857664ULL))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)166)))))))));
                var_30 += (!(((/* implicit */_Bool) max((((var_0) >> (0LL))), (max((((/* implicit */unsigned long long int) arr_2 [i_13] [1ULL] [i_12])), (arr_15 [i_13] [i_12] [i_12])))))));
                var_31 ^= min((max(((signed char)17), (((/* implicit */signed char) arr_7 [i_12 - 2] [i_12 + 3])))), (((/* implicit */signed char) (!(arr_7 [i_12 + 2] [i_12 + 2])))));
                var_32 = (!(((/* implicit */_Bool) var_8)));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) var_3);
    var_34 = ((/* implicit */signed char) 18446744073709551615ULL);
}
