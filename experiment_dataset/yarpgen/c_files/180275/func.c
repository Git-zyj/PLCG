/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180275
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [15ULL]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) <= (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (4924107728626516611ULL))), (((/* implicit */unsigned long long int) ((3972477876320214809ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1 - 1]);
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-108)) ^ (-1358241025)));
            var_16 = ((/* implicit */int) (!(((((/* implicit */int) var_10)) == (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)10]))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1 - 1]))));
        }
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 15211877593058026481ULL)) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 + 1]))));
            arr_10 [i_2 - 1] [(unsigned short)12] [i_2] = ((/* implicit */signed char) ((int) var_8));
            var_17 |= ((/* implicit */unsigned short) 3234866480651525135ULL);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_18 = 329032015;
                            arr_17 [i_0] [i_0] [i_3] [i_3] [10ULL] [0ULL] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_13 [i_3] [i_3] [i_4 + 1]))) ? (((unsigned long long int) arr_13 [i_3] [i_3] [i_4 - 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [14ULL] [i_4 + 2])) << (((((/* implicit */int) arr_13 [i_0] [i_3] [i_4 - 1])) - (51))))))));
                            var_19 = ((/* implicit */int) ((min((arr_8 [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned long long int) (signed char)127)))) > (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19108))) : (arr_8 [i_2 - 1] [i_2 - 1])))));
                        }
                        for (int i_6 = 4; i_6 < 15; i_6 += 4) 
                        {
                            var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)0))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10443690295869296548ULL)))))));
                            var_21 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2 + 2] [i_6 + 1])), (0ULL)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_23 [10ULL] [i_2] [i_3] [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) (signed char)-53)))))))), (17758119586415289725ULL)));
                            var_22 &= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_19 [i_2 + 2]))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), ((~((~(arr_18 [i_0] [i_2] [i_3] [i_4 + 3] [i_0])))))));
                            var_24 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)81))))) && (((/* implicit */_Bool) arr_11 [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) (-((-(arr_21 [i_0] [i_2] [i_3] [i_4 + 2] [i_4] [i_8])))));
                            var_26 &= ((/* implicit */int) ((unsigned long long int) var_11));
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((-1358240999) <= ((+(((/* implicit */int) arr_11 [i_4 + 1])))))))));
                        arr_28 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_15 [i_0] [i_2 + 2] [i_0] [i_4] [15ULL])))))) ? ((~(((2435385018509692197ULL) >> (((-2147483620) - (-2147483626))))))) : (((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4] [7] [(signed char)8] [i_4 + 2] [i_2 + 2])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_4] [i_4 + 3] [i_4 + 3] [i_2 - 1]))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_27 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))))))))));
        }
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            arr_31 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_0] [(signed char)0] [i_9] [i_9] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44342))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (11409433826760311866ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9] [i_9])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9])));
            var_29 *= ((/* implicit */int) min((arr_3 [i_9]), (((/* implicit */unsigned long long int) max(((signed char)-127), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0] [(unsigned short)4] [i_9] [(unsigned short)4]))))))))));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            arr_44 [i_11] [14] [i_14] [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) ((unsigned char) 0ULL));
                            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) arr_24 [i_13] [i_12] [i_11] [i_10]))));
                            var_31 = ((/* implicit */unsigned long long int) ((signed char) arr_8 [2ULL] [2ULL]));
                            var_32 = ((/* implicit */unsigned char) (-(arr_21 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            arr_47 [i_10] [i_10] [i_10] [i_10] = ((arr_12 [i_10] [i_11] [i_12] [i_15]) & (18446744073709551615ULL));
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (((+(var_12))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_10])))))))))));
                            var_34 |= ((/* implicit */signed char) ((arr_38 [i_10] [i_10] [i_10] [i_10]) >> (((arr_32 [i_10]) - (345787627)))));
                            var_35 = ((/* implicit */unsigned short) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_11] [i_12] [(signed char)15] [i_15])))));
                            arr_48 [i_10] [i_11] [i_13] [i_15] = ((/* implicit */unsigned long long int) arr_20 [i_10] [i_11] [i_10] [i_10] [i_10] [i_11]);
                        }
                    }
                } 
            } 
            var_36 = ((((/* implicit */_Bool) arr_11 [i_10])) ? (((/* implicit */int) arr_11 [i_11])) : (((/* implicit */int) arr_11 [i_11])));
        }
        for (int i_16 = 1; i_16 < 14; i_16 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_51 [i_16] [i_16] [i_16 + 2]))))), (0ULL)));
            var_38 = (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) var_6)) ? (arr_22 [i_10] [i_10] [i_16] [i_10] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_10] [i_16 + 1] [i_16] [i_10] [i_16 + 1]))))) : ((-(var_3))))));
            arr_52 [i_16 - 1] [i_16] [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_16] [i_16 - 1])) ^ (((/* implicit */int) (unsigned short)37319)))));
            var_39 = arr_30 [i_16 + 1] [i_10];
        }
        for (int i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            arr_55 [i_10] [i_17] = ((/* implicit */signed char) ((min(((~(7037310246949239749ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1335731784586585080ULL)) ? (((/* implicit */int) (signed char)-58)) : (arr_32 [i_10])))))) >> (((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)57))))), (((unsigned long long int) (signed char)-72)))) - (18446744073709551527ULL)))));
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(11876029173405222136ULL)))) ? (arr_53 [(unsigned short)1] [i_17] [i_17]) : (((unsigned long long int) var_12))));
            var_41 *= (signed char)(-127 - 1);
        }
        for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 2) 
        {
            arr_59 [i_10] [i_10] &= ((/* implicit */unsigned long long int) ((unsigned short) (~(min((((/* implicit */unsigned long long int) arr_42 [i_10] [i_10] [i_10])), (var_3))))));
            arr_60 [i_10] [i_18] [1ULL] = ((/* implicit */signed char) ((unsigned char) (unsigned char)224));
        }
        arr_61 [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [i_10] [i_10])) + (((/* implicit */int) (unsigned char)192))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) : (7037310246949239749ULL));
    }
    var_42 = var_1;
    var_43 = ((/* implicit */unsigned long long int) max((var_43), ((~((-(9679701702894141474ULL)))))));
}
