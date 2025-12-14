/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117732
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 241833402U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max(((short)32746), (((/* implicit */short) arr_1 [i_0] [5]))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (arr_4 [i_3] [i_2 + 2] [i_3]) : (arr_4 [i_3] [i_2 + 2] [i_3])))) ? (((arr_4 [i_3] [i_2 + 2] [10U]) & (arr_4 [i_0] [i_2 - 1] [i_3]))) : (min((arr_4 [i_3] [i_2 + 1] [i_3]), (arr_4 [i_0] [i_2 + 1] [i_2])))));
                        arr_9 [i_3] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((min(((_Bool)1), (arr_7 [(signed char)1] [8ULL] [(unsigned char)7] [i_3]))) ? (((/* implicit */int) max(((signed char)-5), (((/* implicit */signed char) arr_0 [2U]))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), (max((((((/* implicit */_Bool) (signed char)-18)) ? (2429717652U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned int) (unsigned char)58))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */long long int) ((((arr_6 [i_0] [8U] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [2]))) < (2199022993408ULL))))))) - (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)96)), (max((((/* implicit */int) (_Bool)1)), (872075924))))))));
        arr_10 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0]))))) : ((+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~((~(((/* implicit */int) (signed char)-112))))))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16427)) ? (min((((/* implicit */long long int) (-2147483647 - 1))), (arr_13 [i_4 - 1] [i_4]))) : (((/* implicit */long long int) ((arr_12 [i_4] [i_4]) | (((/* implicit */int) (_Bool)1)))))))) ? (max((arr_12 [i_4 + 1] [(unsigned short)11]), (arr_12 [i_4 - 1] [i_4 + 2]))) : (((((/* implicit */_Bool) 9171385756233005270LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_16 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-27357), (((/* implicit */short) (unsigned char)144))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_17 [i_7] [i_7] [(_Bool)1] [9LL])))) : (((arr_18 [i_7]) ? (arr_15 [(_Bool)1] [15] [15]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 + 2] [i_5] [i_4 + 2])))))))) ? (((/* implicit */int) (unsigned char)44)) : ((~(((((/* implicit */int) arr_14 [i_5] [i_6] [i_8])) & (((/* implicit */int) (unsigned short)28852)))))));
                            arr_22 [i_7] = ((/* implicit */int) arr_18 [i_4]);
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) >> (((((/* implicit */int) (short)2459)) - (2453)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_5] [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_17 [i_6 - 3] [i_4 + 1] [i_4 + 1] [10LL]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 2] [i_4] [2LL] [i_4 - 1] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29788))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_17 [(unsigned short)13] [(unsigned short)13] [i_6] [i_7])) >> (((9223372036854775807LL) - (9223372036854775803LL)))))) : ((-(-9171385756233005270LL)))))));
                            var_18 |= min((((((/* implicit */_Bool) -1424708600)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)79))))) : ((~((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((1542187546U), (2979269705U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_6 - 1] [i_7]))))) : (((/* implicit */int) (_Bool)0))))));
                        }
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_23 [i_4 + 2] [i_5]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((11396003962251399385ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2463)))))) & (((((/* implicit */_Bool) (signed char)90)) ? (arr_23 [i_6 - 2] [i_9]) : (((/* implicit */int) (signed char)126))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [14U] [i_7] [14U])) ? (arr_23 [i_4 - 1] [10]) : (((/* implicit */int) (unsigned short)55486))))) ? (((/* implicit */unsigned long long int) min((arr_15 [i_4] [i_5] [i_6]), (((/* implicit */long long int) (_Bool)1))))) : (arr_20 [i_4 + 1] [i_5] [i_5] [i_5] [i_5])))));
                            arr_25 [i_5] [12LL] [i_6] [i_7] [i_6] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 16))) ? ((+(((/* implicit */int) (short)3994)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)144)), ((short)-2455))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_14 [7LL] [i_5] [i_6 + 1])) : (((/* implicit */int) (short)23960))))) ? (13131871938827672740ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5]))) < (arr_16 [i_4] [i_6] [i_7] [i_9])))))))));
                            arr_26 [16LL] [i_5] [i_6] [i_7] [16LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4 + 2] [8ULL])) ? (-2305843009213693952LL) : (((/* implicit */long long int) arr_23 [i_4 - 1] [i_6 + 1]))))) ? (((((((/* implicit */_Bool) arr_14 [11LL] [i_7] [(unsigned char)15])) ? (arr_20 [i_9] [i_5] [i_6] [i_5] [i_4]) : (arr_20 [i_4] [i_6] [(short)10] [i_6] [i_9]))) >> (((((arr_17 [i_4 + 2] [i_5] [i_6 - 1] [6ULL]) ? (arr_16 [i_7] [i_6] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 + 1]))))) - (273047986833499350ULL))))) : (((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_5]))));
                            arr_27 [i_9] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [i_9])) : (((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */int) max((arr_14 [11ULL] [i_4 + 1] [i_6]), (arr_14 [i_4] [i_4 + 1] [(signed char)4])))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_14 [i_4 + 2] [i_4 - 1] [9U])) : (((/* implicit */int) arr_14 [i_4 + 2] [i_4 - 1] [i_4 + 2]))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)4)) ? (9171385756233005270LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))))) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9])))))) ? (max((((/* implicit */long long int) arr_14 [i_6] [i_6] [i_6 - 3])), (((((/* implicit */_Bool) -1331120843179317660LL)) ? (arr_13 [2ULL] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41362)) ? (((/* implicit */unsigned int) -1432712)) : (1068142364U))))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            arr_31 [(_Bool)1] [i_5] [(short)5] = ((/* implicit */int) ((min(((+(9171385756233005270LL))), ((+(-4406485061274564147LL))))) < (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24174)) ? (2876334446U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28803)))))) : (max((arr_21 [i_10] [i_4 + 1] [i_7] [4LL] [i_5] [i_4 + 1]), (((/* implicit */long long int) (_Bool)0))))))));
                            var_21 = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)0))))));
                            var_22 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (-(2147483645)))), (((arr_29 [8LL] [i_7] [i_6 - 1] [4] [i_5] [4]) >> (((((/* implicit */int) (signed char)-123)) + (132))))))), (((/* implicit */unsigned int) min((min((arr_19 [i_4] [i_5] [i_4] [(_Bool)1]), (((/* implicit */int) arr_28 [i_4] [i_5] [i_6] [i_7] [i_4])))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)41362)))))))));
                            arr_32 [(_Bool)1] [i_5] [(_Bool)1] [i_7] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2146601625)) < (((((/* implicit */_Bool) 5198250001830835576ULL)) ? (arr_16 [i_7] [i_6 - 1] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1016)))))));
                        }
                        for (int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [2LL] [i_5] [i_5] [i_5] [(signed char)9] [(unsigned short)9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-27655)), (arr_16 [i_11] [1U] [10] [5LL])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) arr_28 [i_11] [i_4] [1LL] [i_4] [i_4])) : (((/* implicit */int) arr_28 [10] [(_Bool)1] [4U] [5LL] [(unsigned char)6]))))) : (((((/* implicit */_Bool) (short)-23960)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24166))) : (4248290015U)))))) : ((~((~(2932150620424848233ULL)))))));
                            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_15 [i_4 + 2] [i_4 + 2] [(_Bool)1])))) ? (7002612509954751794LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)83)) | (2146601625))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_30 [i_4 - 1] [i_4 + 2] [i_6 - 3]) < (((/* implicit */unsigned long long int) min((-1547806046), (-13)))))))) : (((((/* implicit */_Bool) min((arr_20 [i_4] [i_4 + 1] [6U] [i_4] [i_4]), (arr_30 [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) (unsigned short)45657)) ? (((/* implicit */long long int) 4294967295U)) : (-5917298562996608241LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -3826874796826749936LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [(_Bool)0] [i_6] [14LL] [14LL])))))))));
                        }
                        arr_35 [i_4] [i_4] [i_4] [9LL] [i_4] [i_4 - 1] = ((/* implicit */int) arr_29 [7U] [4U] [i_5] [4LL] [i_5] [i_4]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 2) /* same iter space */
    {
        arr_38 [(unsigned short)6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24173)) ? (((/* implicit */int) arr_24 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 2] [2] [3U])) : (((/* implicit */int) arr_24 [i_12 - 1] [i_12] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 + 1]))));
        var_25 = ((((/* implicit */_Bool) arr_13 [i_12 + 1] [i_12])) ? (arr_15 [i_12 + 1] [i_12 - 1] [i_12 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_12 - 1]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        arr_41 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_13] [12] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) arr_15 [i_13] [6LL] [(_Bool)1])) : (14251616107230461499ULL)))) ? (((((/* implicit */_Bool) arr_23 [i_13] [(unsigned char)5])) ? (arr_37 [i_13]) : (2146601636))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_33 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
        arr_42 [i_13] = ((/* implicit */_Bool) ((arr_39 [i_13]) ? (7002612509954751794LL) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13])))));
    }
}
