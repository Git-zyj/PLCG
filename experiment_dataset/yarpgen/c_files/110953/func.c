/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110953
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) 0ULL);
        var_16 = (short)16128;
        var_17 = ((/* implicit */unsigned long long int) ((_Bool) var_10));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] &= ((/* implicit */int) (unsigned char)255);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_2 [i_1 + 1])));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_5))));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = arr_0 [i_2];
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) var_3);
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_8 [i_2])), (arr_13 [i_3] [i_2]))))));
            var_22 = ((/* implicit */signed char) var_0);
            var_23 += ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_3])), ((-(((/* implicit */int) (signed char)127))))));
        }
        for (int i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */short) (unsigned short)0);
                arr_18 [i_2] [i_5] [i_5] = ((/* implicit */signed char) var_13);
            }
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_7 = 4; i_7 < 16; i_7 += 4) 
                {
                    arr_25 [i_7] [i_6] [i_4] [i_2] = ((/* implicit */signed char) var_1);
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_1)) > (var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) : (arr_14 [i_7] [i_7] [i_7])))) ? (9223372036854775781LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-16130)), (8257536U)))))))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (-(var_12))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_13 [i_4] [i_4]))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~((-(var_5))))))));
                }
                for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_29 = ((/* implicit */long long int) arr_9 [i_2]);
                    arr_31 [i_9] = ((/* implicit */unsigned short) -19LL);
                }
                var_30 = ((/* implicit */short) 25165824);
            }
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_2))));
                arr_34 [i_2] [i_4 + 1] [i_10] [i_10] = ((/* implicit */signed char) (+((~(((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-16129))))))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    arr_39 [i_10] [i_4 - 2] [i_10] [i_11] [i_4] = ((/* implicit */long long int) var_13);
                    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) min((8257536U), (((/* implicit */unsigned int) arr_20 [0] [i_4 - 1] [i_4 - 1] [i_11 - 1])))))));
                }
            }
            var_33 = ((/* implicit */short) var_12);
            var_34 &= ((/* implicit */long long int) (_Bool)1);
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_38 [i_4] [(short)4] [(short)4] [i_2] [i_4]) & (((/* implicit */int) var_3)))), (((var_8) ^ (((/* implicit */int) var_3))))))) ? ((~((~(((/* implicit */int) arr_8 [i_2])))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1152921504606844928LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_0))));
            arr_43 [i_12] [i_2] [i_2] = ((/* implicit */int) (short)32762);
            var_37 -= ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_12])))) : (var_2)));
        }
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            arr_46 [i_13] [i_13] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)15))))));
            var_38 = ((/* implicit */unsigned short) (-(min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_24 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (-25165824)))))));
        }
        var_39 = ((/* implicit */unsigned char) 25165811);
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        var_40 = ((/* implicit */unsigned short) (+(var_8)));
        var_41 = (~(((/* implicit */int) arr_48 [i_14] [i_14])));
    }
    var_42 = ((int) (+(((/* implicit */int) max(((unsigned char)19), (var_13))))));
    var_43 = var_3;
    var_44 = ((/* implicit */short) (unsigned char)255);
}
