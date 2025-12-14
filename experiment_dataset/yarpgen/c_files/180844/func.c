/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180844
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (((~(((var_4) << (((970038066) - (970038010))))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -970038066)) || (((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) var_1)) : (((970038066) << (((((/* implicit */int) var_10)) - (110)))))))))))));
    var_13 = ((/* implicit */long long int) (unsigned char)1);
    var_14 = max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))))), (var_6));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) arr_2 [i_1 - 2]));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) ((int) arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]));
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? ((~(970038066))) : (((/* implicit */int) arr_10 [i_1 + 4] [i_1 + 3] [i_1 - 2] [i_1 + 4] [i_1 - 1] [i_1 + 2]))));
                    var_17 = ((/* implicit */long long int) ((((_Bool) -970038067)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) var_4))))) : (((((/* implicit */int) arr_9 [(unsigned char)1] [i_0] [i_0] [(unsigned char)1] [i_2] [i_3])) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [16U] [i_1 + 2] [16U] [i_1]))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */unsigned long long int) -970038066)) ^ (18446744073709551590ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                    var_19 = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                }
                for (signed char i_4 = 4; i_4 < 22; i_4 += 4) /* same iter space */
                {
                    arr_16 [i_1] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 970038066)) && (((/* implicit */_Bool) arr_2 [i_2]))))) >> (((((/* implicit */int) arr_11 [i_0] [i_1 + 1] [(unsigned char)3] [i_4 - 3])) - (108)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) ((int) arr_17 [i_0] [10LL] [21] [i_0]));
                        arr_19 [i_1] [i_0] [(unsigned char)13] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_2] [i_2]);
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 18446744073709551590ULL)))) * (((((/* implicit */_Bool) 1839240222U)) ? (((/* implicit */unsigned int) 970038065)) : (1855999847U)))));
                        var_22 = ((/* implicit */unsigned int) var_9);
                    }
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [(signed char)2] [i_2] [i_4] [i_1] = ((/* implicit */unsigned char) ((((arr_2 [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [3ULL] [i_0] [i_0] [i_0]))))) ? (((arr_6 [i_0] [i_1] [i_1]) % (((/* implicit */long long int) 3867890736U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 2] [i_4 - 4])))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_4 [i_0] [i_2] [i_7]))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_0] [i_0] [11U] [i_4] [i_7]))))) | (((long long int) arr_13 [i_0] [i_0]))));
                    }
                    var_25 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_2] [i_1] [(signed char)18] [i_1])) ? (0U) : (((/* implicit */unsigned int) -970038055)))));
                }
                for (signed char i_8 = 4; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    var_26 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_8 + 1] [i_1 - 2])) ^ (((/* implicit */int) arr_14 [i_8 - 2] [i_1 + 3]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_9)) + (((/* implicit */int) (short)-31420)))));
                        var_28 = ((/* implicit */short) arr_22 [i_1] [i_1] [i_1] [8LL] [i_1 - 2] [i_8 + 1]);
                    }
                }
            }
            var_29 = ((/* implicit */signed char) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        /* LoopSeq 1 */
        for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_12 [(unsigned char)5] [i_10 + 4] [i_10 - 1] [i_10 - 1] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11] [i_11] [20ULL] [i_10] [i_0] [i_0]))) : (arr_29 [i_0] [i_11 + 3]))));
                arr_38 [i_0] [14U] [i_0] &= ((/* implicit */unsigned char) ((_Bool) ((int) arr_30 [i_0] [(unsigned short)19] [(unsigned short)19] [(unsigned short)19] [i_0] [i_0])));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_11] [i_0] [i_0] [i_10]))));
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) arr_11 [3U] [i_10] [3U] [i_11 + 2]))));
            }
            arr_39 [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_10]))));
            var_33 = ((/* implicit */long long int) var_4);
            var_34 |= ((/* implicit */unsigned int) var_6);
        }
    }
    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 3) 
    {
        arr_43 [i_12 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned short)16114))) ? (max((((((/* implicit */_Bool) var_5)) ? (arr_41 [i_12] [i_12]) : (arr_41 [i_12 + 2] [23]))), (arr_41 [12U] [21U]))) : (max((((/* implicit */int) ((unsigned char) arr_40 [i_12 + 2]))), ((+(((/* implicit */int) (_Bool)1))))))));
        arr_44 [i_12] = arr_42 [i_12 + 1];
        var_35 = ((/* implicit */_Bool) min((((long long int) ((arr_40 [i_12]) / (((/* implicit */long long int) ((/* implicit */int) arr_42 [17U])))))), (min((arr_40 [i_12 - 1]), (((/* implicit */long long int) arr_41 [i_12 + 1] [i_12 + 1]))))));
        var_36 *= ((/* implicit */unsigned char) ((unsigned int) arr_41 [i_12] [i_12]));
    }
    for (unsigned int i_13 = 3; i_13 < 12; i_13 += 1) 
    {
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_13 + 1] [i_13 - 2]), (arr_11 [i_13 - 3] [i_13 + 2] [i_13 + 2] [i_13 + 1])))) ? (min((10U), (((427076564U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_13] [i_13 + 1] [i_13 + 4] [i_13] [i_13]), (arr_23 [i_13] [i_13] [i_13 - 2] [i_13 - 2] [i_13])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            arr_50 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_13] [i_13] [20U] [i_14] [20U] [i_14])) ? (arr_33 [i_13] [i_14]) : (((/* implicit */int) (unsigned char)32))))) ? (((unsigned int) arr_42 [i_14])) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13 + 4] [i_13 + 4] [i_13] [i_13 + 4] [i_13]))) | (arr_49 [11LL])))));
            arr_51 [i_14] = ((/* implicit */signed char) 4294967285U);
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_13 - 3] [17U] [17U] [i_13 + 3] [i_13 + 2] [i_13 + 2])) * (((/* implicit */int) arr_18 [3LL] [14] [i_14] [i_14] [i_14]))));
            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_0))) : (((unsigned long long int) (short)31420))));
            var_40 |= ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_2))));
        }
        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_4 [i_13] [i_13] [i_13]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_13] [(_Bool)1] [(_Bool)1] [i_13] [i_13] [i_13])))))) ? (arr_6 [i_13] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_28 [i_13 + 4] [i_13 + 4] [(unsigned char)6] [i_13])), (arr_8 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13]))))))), (((/* implicit */long long int) arr_12 [(unsigned char)16] [i_13] [i_13] [i_13 - 2] [4] [i_13 + 1])))))));
    }
}
