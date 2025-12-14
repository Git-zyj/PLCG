/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113891
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
    var_15 = var_0;
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3714087995910530283LL)) ? (9223372036854775790LL) : (-9223372036854775790LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)-22))))) : (((long long int) 2147483636)))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-42)), (var_7)))))))));
    var_17 = ((/* implicit */_Bool) var_9);
    var_18 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */long long int) var_13))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (arr_0 [(unsigned char)11])));
        arr_2 [8U] = ((/* implicit */long long int) ((((/* implicit */int) (short)-7)) + (((((/* implicit */_Bool) var_4)) ? (2147483636) : (((/* implicit */int) (unsigned short)0))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (808409587U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = var_0;
    }
    for (unsigned char i_1 = 4; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((long long int) arr_8 [i_4])) % (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (arr_10 [i_4]))))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) arr_11 [i_2])) : (arr_6 [i_1 + 1] [i_2])))) ? (((((/* implicit */_Bool) 9223372036854775790LL)) ? (((/* implicit */long long int) arr_6 [i_1] [i_1])) : (6983242007699972198LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) < (0ULL)))))))));
                        arr_15 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_13 [i_1] [i_3])), (682494297))), (((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_1])) + (var_11)))) ? ((-(var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 523113041U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (arr_0 [1U]))))))));
                        arr_16 [i_3] [(unsigned char)8] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_10 [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) >> (((max((((/* implicit */unsigned long long int) (signed char)-48)), (max((((/* implicit */unsigned long long int) var_12)), (var_10))))) - (18446744073709551514ULL)))));
                        var_22 &= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) || (((/* implicit */_Bool) arr_1 [i_1 - 1]))))), (arr_6 [i_1 - 1] [i_4])));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1])) : (min((arr_1 [i_1]), (((/* implicit */int) (signed char)101)))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [15LL])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_9)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) 
        {
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max(((signed char)94), (((/* implicit */signed char) arr_22 [i_5])))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_13 [i_5] [i_5])))))))) ? (((((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_11 [i_5])))) + (((/* implicit */int) arr_18 [(_Bool)1])))) : (((/* implicit */int) arr_12 [i_6] [i_6 + 1] [(unsigned char)4]))));
            arr_24 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 1])), ((+(((/* implicit */int) arr_8 [1ULL]))))))) ? (((arr_5 [i_5] [i_6 - 1]) ? (((/* implicit */int) arr_5 [i_5] [i_6 - 1])) : (((/* implicit */int) arr_5 [i_5] [i_6 - 1])))) : (((((/* implicit */_Bool) max((arr_18 [i_5]), ((short)18861)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_6] [i_5]))))));
            var_23 ^= ((/* implicit */int) arr_13 [i_6 - 1] [(signed char)2]);
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned char)255))) > (((/* implicit */int) ((signed char) (unsigned char)174)))))) >> (((((/* implicit */int) (unsigned short)49777)) - (49777)))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_6 [i_5] [(unsigned char)1])), ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -5389807677149992862LL)) : (var_10))))))))));
            }
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        {
                            arr_41 [i_5] [i_9] [i_5] = ((/* implicit */_Bool) arr_36 [i_10] [i_8] [i_9] [i_10] [i_11]);
                            arr_42 [i_5] [i_9] [i_5] [i_5] = ((((((/* implicit */_Bool) min(((signed char)-101), (((/* implicit */signed char) arr_22 [0U]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_38 [i_5] [i_5] [i_10] [i_5])) + (((/* implicit */int) var_6)))))) >= (min((((((/* implicit */_Bool) -6165017293673619845LL)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (signed char)-41)))), (var_5))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    {
                        arr_48 [i_5] [i_5] [i_12] [i_13] = arr_39 [i_13] [i_8] [i_13] [i_5] [i_5] [i_12] [i_5];
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((((/* implicit */long long int) arr_31 [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) ((arr_22 [i_5]) ? (1924537888611380229LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-2873917105863218773LL) > (arr_21 [1] [i_8] [(unsigned char)1]))))) : (((long long int) 1541201611U)))))))));
                        var_27 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_29 [i_5] [5ULL])))) >= (arr_1 [i_5])));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                {
                    var_28 -= ((/* implicit */unsigned short) ((max((72057594037919744ULL), (((/* implicit */unsigned long long int) 9223372036854775790LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [1LL] [i_14] [i_15])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        arr_59 [i_16] [i_5] [i_5] [i_5] = ((/* implicit */int) 2753765683U);
                        arr_60 [i_5] [i_5] [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned short) 9852065566612638583ULL))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_38 [i_5] [i_5] [i_15] [i_5])) : (((/* implicit */int) arr_36 [i_16] [(unsigned short)10] [i_15] [i_14] [i_16])))))) | (((arr_1 [i_14]) ^ (((/* implicit */int) ((unsigned short) arr_18 [(short)15])))))));
                    }
                    for (int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        arr_63 [16LL] [i_14] [i_15] [i_5] = max((((/* implicit */unsigned int) ((((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) <= (2886935130U)))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) max((arr_45 [i_5] [i_15] [i_5]), (((/* implicit */unsigned long long int) 9223372036854775766LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32520)))))) : (((unsigned int) arr_31 [i_5] [i_14] [i_15])))));
                        /* LoopSeq 2 */
                        for (int i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 6ULL)))))) * ((+(18374686479671631871ULL)))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_14] [i_5] [i_18])) ? (arr_27 [i_5] [i_5] [i_5]) : (arr_27 [i_17] [i_5] [i_5])))) ? (min((arr_27 [i_5] [i_5] [i_5]), (arr_27 [i_18] [i_5] [11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_27 [i_18] [i_5] [i_15]))))))));
                            arr_67 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_13)), (arr_12 [i_18] [i_17] [i_5])))) ? (((/* implicit */unsigned long long int) max((var_11), (arr_56 [i_5] [i_5] [i_14] [i_15] [i_17] [i_18])))) : (((unsigned long long int) 2068026672))))) ? (max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) arr_65 [i_18] [i_17] [(signed char)15] [i_14] [i_5] [i_5])), (8646911284551352320ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((-7828103419584431557LL), (-9223372036854775800LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_5] [i_5] [i_5] [i_5]))) : (936558172U)))))))));
                            arr_68 [i_18] [i_17] [i_5] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1055237944U)) ? (((/* implicit */int) arr_50 [i_15] [(unsigned char)16])) : (((/* implicit */int) (signed char)35))));
                            arr_69 [(_Bool)1] [i_5] [i_5] [i_17] [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (_Bool)1)))))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            arr_72 [i_5] = ((/* implicit */signed char) ((long long int) arr_65 [i_5] [i_14] [i_15] [i_17] [i_19] [i_14]));
                            var_31 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) arr_34 [i_5] [14LL] [i_15] [i_5] [i_19]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_5] [i_5] [i_5] [(signed char)19] [i_19]))) : (arr_45 [i_5] [i_14] [i_5]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_54 [i_5] [(unsigned short)16])) ? (1055237959U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_32 [i_17] [i_17] [i_15] [i_17])))))))));
                        }
                    }
                    arr_73 [i_5] [i_5] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_5] [i_5] [i_5])) + (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_58 [i_5] [i_15] [i_14] [11U] [i_5])) : (((/* implicit */int) arr_65 [i_5] [i_14] [i_5] [i_14] [i_15] [i_14]))))))) ? (((/* implicit */int) ((unsigned char) min((arr_6 [(short)10] [i_14]), (((/* implicit */int) arr_64 [i_5] [i_5] [(signed char)13] [i_5] [i_5])))))) : (max((((/* implicit */int) arr_62 [i_5] [i_14] [i_15] [i_15])), (((((/* implicit */_Bool) arr_39 [i_15] [i_14] [i_5] [i_5] [i_5] [i_15] [i_5])) ? (((/* implicit */int) arr_57 [i_5] [i_14] [(unsigned char)0] [i_14] [i_14])) : (((/* implicit */int) arr_8 [i_5]))))))));
                }
            } 
        } 
        arr_74 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_13);
        var_32 = ((/* implicit */signed char) (short)-1);
    }
    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        var_33 = ((/* implicit */signed char) ((unsigned char) ((_Bool) arr_75 [i_20] [i_20])));
        arr_78 [i_20] [i_20] = ((/* implicit */unsigned int) var_6);
    }
}
