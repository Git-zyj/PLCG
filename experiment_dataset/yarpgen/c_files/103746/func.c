/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103746
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) -664347408);
        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((unsigned long long int) (short)30354)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned long long int) var_0))));
        var_13 = ((/* implicit */unsigned short) arr_1 [(_Bool)1]);
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) > (max((max((var_2), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)30354)))))))));
        var_15 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned long long int) (short)-30354)), (((unsigned long long int) var_11)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 - 1]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 7; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_18 [i_1] [i_1] [(_Bool)1] [i_3] [4ULL] [i_3] = ((signed char) (+(6677831537603833263LL)));
                            arr_19 [i_1] [i_2 - 1] [i_3] [(signed char)4] |= ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                        }
                    } 
                } 
                arr_20 [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_0 [i_1]))))));
                arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_0 [i_3]);
                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_25 [i_6] [i_2 + 1] [i_2 + 1] = ((/* implicit */_Bool) (~((-(5571537575082306973LL)))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) var_10)) : (var_11)))) ? (arr_4 [i_2] [i_2 - 1]) : ((~(6000661429940733728ULL)))));
                arr_26 [i_1] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_6] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)127)) % (((/* implicit */int) arr_16 [i_1] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))));
            }
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                arr_31 [i_1] [i_1] [i_2] [i_7] = ((/* implicit */unsigned int) ((signed char) (-(-6677831537603833276LL))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_1)) : (((long long int) var_0))));
            }
            arr_32 [(short)2] [i_2] [i_2 - 1] = ((/* implicit */long long int) ((arr_29 [i_2 + 1] [i_2 + 1] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        }
        arr_33 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)8] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [4LL]))) : (-8383893352692739699LL)))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((5571537575082306973LL) > (((/* implicit */long long int) var_11)))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30354)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (5571537575082306973LL)))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_9))), (((/* implicit */long long int) ((((/* implicit */int) (short)30354)) == (((/* implicit */int) (unsigned char)244))))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)45016)))), (max((((/* implicit */int) var_6)), (var_0))))))));
    /* LoopSeq 3 */
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_22 = (~((-(7275506927904447676LL))));
        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_8]))))) % ((-(((/* implicit */int) (unsigned char)184))))));
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
        {
            arr_40 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_36 [i_8] [i_9]);
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_36 [i_9] [i_9]), (((/* implicit */unsigned int) var_0))))) ? ((-((-(((/* implicit */int) arr_37 [i_8])))))) : (min(((~(((/* implicit */int) (short)-27144)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5219))) != (arr_1 [i_9]))))))));
        }
        for (int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
        {
            arr_44 [i_8] [i_10] [i_8] = ((/* implicit */unsigned long long int) arr_38 [12ULL] [12ULL]);
            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((2147483647) >= (((/* implicit */int) (short)-4805)))))));
            var_26 ^= max(((~(((/* implicit */int) var_3)))), (((((/* implicit */int) ((var_1) < (((/* implicit */int) (unsigned char)33))))) % ((+(arr_39 [i_8] [i_10]))))));
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 2147483639)), (arr_43 [i_8] [i_10]))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)30)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_36 [i_8] [(short)7])))));
            var_28 = ((((/* implicit */_Bool) (~(min((5796919566100049083ULL), (((/* implicit */unsigned long long int) (unsigned char)152))))))) ? (arr_0 [i_10]) : (((/* implicit */long long int) var_5)));
        }
    }
    for (int i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((long long int) var_2))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6604626306677040113LL)) ? (17298809990742848506ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (signed char)-72)) ? (5007073659134974325ULL) : (((/* implicit */unsigned long long int) arr_46 [i_11]))))))));
        arr_47 [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((max((((/* implicit */int) (short)-30358)), (var_11))) | ((~(var_0))))))));
        var_30 = ((/* implicit */signed char) ((max((arr_1 [i_11]), (arr_1 [i_11]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11])))));
    }
    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        arr_51 [i_12] [i_12] = ((/* implicit */unsigned char) min((16133512650960353914ULL), (((/* implicit */unsigned long long int) (unsigned char)80))));
        var_31 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_50 [i_12])) ? (((/* implicit */int) max(((unsigned char)33), (((/* implicit */unsigned char) var_6))))) : ((~(((/* implicit */int) arr_48 [i_12] [i_12]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        arr_56 [21ULL] = ((/* implicit */long long int) ((unsigned short) 6863315680601295709LL));
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                {
                    arr_63 [i_15] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_64 [i_15] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-15)) ^ (((/* implicit */int) (short)-16450))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-6)))))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) -7275506927904447677LL))))))));
                }
            } 
        } 
    }
}
