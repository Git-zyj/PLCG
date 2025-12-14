/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164643
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
    var_13 = ((/* implicit */long long int) 1979591203);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) 1979591203);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1979591208) : (-1979591203)));
            var_15 = ((/* implicit */long long int) 0ULL);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 += ((/* implicit */long long int) arr_3 [0] [i_1 - 1] [i_1]);
                arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) != (((/* implicit */int) arr_0 [i_0] [(signed char)14])))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])))));
            }
            for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) >= (arr_10 [i_0] [i_3 + 2] [i_3 + 1])));
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)18))));
                    var_19 += ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)2606))));
                }
                for (signed char i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13010311092214800704ULL)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) arr_0 [i_1 + 1] [i_5 - 3]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_1] [i_3] [i_5] [i_6] [i_1] = ((/* implicit */long long int) var_2);
                        arr_21 [i_0] [i_1] [i_3] [i_0] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_3] [10ULL])) : (((/* implicit */int) arr_1 [i_3 + 3] [i_1])))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 3] [i_1 + 1] [i_3 + 1]))) ^ (arr_7 [i_0] [i_0] [(_Bool)1] [i_0])));
                    }
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_5] [i_3] [i_1] [i_1 + 2] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_23 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_3] [i_0]))));
                        var_24 = ((/* implicit */signed char) ((arr_7 [i_3 + 2] [i_3] [18LL] [i_5 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5)) || (((/* implicit */_Bool) arr_1 [i_3 - 1] [i_5 - 2]))));
                    }
                }
                for (int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_1]))));
                    arr_28 [i_0] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) (-(arr_7 [i_1 + 2] [i_3] [(unsigned short)17] [i_8])));
                    arr_29 [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_27 [i_0] [i_1] [i_3] [i_8] [(_Bool)1]))))));
                }
                for (int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                {
                    arr_32 [(unsigned short)6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((13010311092214800704ULL) >> (((((/* implicit */int) (short)-1)) + (28)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((arr_12 [i_0]) & (((/* implicit */unsigned long long int) arr_26 [i_1 + 1] [(unsigned char)2] [i_0] [i_1 + 2] [i_3 - 2]))));
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(unsigned short)10] [i_9])) >> (((12279835233317456003ULL) - (12279835233317455985ULL))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_38 [i_0] = arr_34 [i_1] [i_1 - 1];
                        var_28 ^= ((/* implicit */unsigned long long int) (+(4294967295U)));
                        var_29 = ((/* implicit */unsigned char) ((unsigned short) arr_36 [i_3 + 3] [i_3 + 1] [i_3] [i_3] [i_3 + 2]));
                    }
                    arr_39 [i_0] [i_1] [i_1] [i_1] [i_0] [(signed char)15] = ((/* implicit */unsigned short) arr_15 [i_3] [i_3] [i_3 + 3] [i_3 - 2] [i_3]);
                }
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)736))))) | (arr_7 [i_0] [i_12] [i_12] [i_12]))))));
            arr_42 [i_0] [i_12] = ((/* implicit */unsigned int) arr_2 [i_12]);
            arr_43 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_11 [i_0] [i_12])) == (((/* implicit */int) arr_35 [i_0])));
            var_31 ^= ((/* implicit */long long int) (short)-31654);
        }
    }
    /* vectorizable */
    for (signed char i_13 = 1; i_13 < 10; i_13 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) 6166908840392095612ULL);
        arr_46 [i_13 + 3] [i_13 + 3] = ((/* implicit */unsigned short) -1979591204);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        for (unsigned char i_15 = 2; i_15 < 13; i_15 += 3) 
        {
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                {
                    var_33 += ((/* implicit */unsigned long long int) 2103034633);
                    var_34 ^= ((/* implicit */_Bool) ((((-2205898214353072884LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2174495840592999707LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3138))) : (4294967295U)))) ? (((/* implicit */int) arr_50 [i_14])) : ((~(((/* implicit */int) (unsigned short)363)))))))));
                    arr_53 [i_14] [i_16] [i_16] [i_16] = ((/* implicit */long long int) (-((+(1979591203)))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_56 [i_17] = arr_25 [(unsigned short)4] [i_17] [i_16] [i_17] [i_14];
                        var_35 *= (unsigned char)0;
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_36 [i_17] [i_16] [i_16] [i_15 + 1] [i_14]))))) != (((/* implicit */int) (short)-32760))))) > (((/* implicit */int) arr_14 [i_17] [i_15]))));
                        var_37 = ((/* implicit */unsigned short) arr_10 [i_17] [i_16] [i_17]);
                    }
                }
            } 
        } 
    } 
}
