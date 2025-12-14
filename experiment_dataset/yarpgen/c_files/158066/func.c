/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158066
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-60)))) : (239202590836465138ULL)))) || (((/* implicit */_Bool) (signed char)-73)));
                    var_20 = ((/* implicit */unsigned char) min((arr_4 [i_2]), (arr_3 [i_0] [i_1])));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) min((arr_5 [i_1]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)188)))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(signed char)18] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [(_Bool)1] [(signed char)16] [i_2] [(signed char)16] [(unsigned char)15])) : (((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)12] [i_3] [i_3]))))) && (((/* implicit */_Bool) arr_8 [(_Bool)1] [1LL] [1LL] [(_Bool)1] [i_3]))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [18LL]))))) ? (((18207541482873086478ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(signed char)16] [i_4]))))) : (((/* implicit */unsigned long long int) -25LL))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_13)));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(signed char)19])) ^ (((/* implicit */int) arr_9 [(signed char)11] [i_1] [8ULL] [i_4]))))) ? (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) : (-4453140885856230543LL))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (-25LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)67)))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)126))) & (24LL)));
                    }
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_27 ^= ((/* implicit */signed char) arr_12 [i_0] [i_1] [(signed char)4]);
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_17))))))) ? (((/* implicit */int) ((signed char) arr_9 [i_6 + 3] [i_6 - 2] [2U] [2U]))) : (((/* implicit */int) arr_15 [i_1] [3LL]))));
                            var_29 = ((/* implicit */unsigned char) ((signed char) (signed char)59));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)55)) / (((/* implicit */int) (signed char)-67))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))))) ? (((/* implicit */int) max((var_7), (((/* implicit */signed char) var_6))))) : (((/* implicit */int) arr_6 [i_0] [8ULL] [(unsigned char)12] [8ULL]))));
                        }
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_2 [(unsigned char)7] [i_7 - 2] [14LL])) - (((/* implicit */int) arr_2 [(_Bool)1] [i_7 - 3] [(unsigned char)11])))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_17))) & (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((~(((((/* implicit */_Bool) 4446176192171634925ULL)) ? (((/* implicit */int) arr_16 [i_0] [(signed char)14] [(_Bool)1])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2])))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1520539453U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (9223372036854775798LL)))))))));
                            var_33 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) < (5360199302918865653ULL)))) > (((/* implicit */int) ((max((18207541482873086477ULL), (((/* implicit */unsigned long long int) (signed char)0)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2762679946U)))))))));
                        }
                        var_34 = ((/* implicit */_Bool) var_1);
                        var_35 ^= ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (5360199302918865641ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14000567881537916680ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_1] [4U] [i_5]))))))) + (((((/* implicit */_Bool) 239202590836465136ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55))) : (239202590836465138ULL)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) var_13);
                                var_37 ^= ((/* implicit */signed char) arr_20 [i_0] [(signed char)17] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_38 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) 9223372036854775804LL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_11 = 3; i_11 < 14; i_11 += 1) /* same iter space */
        {
            var_39 *= ((/* implicit */unsigned char) (signed char)123);
            var_40 = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_11 + 1] [(unsigned char)1] [i_10] [i_11 - 3] [i_11 - 3] [(signed char)13]));
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 27LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) : (239202590836465138ULL)));
            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_11 - 1] [i_11 - 3] [i_11 - 2])) | (((/* implicit */int) arr_22 [i_11 + 1] [i_11 + 1])))))));
        }
        for (long long int i_12 = 3; i_12 < 14; i_12 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */long long int) var_1);
            var_44 = max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_30 [i_12 - 1] [i_12] [i_12]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12] [15U] [11ULL] [i_10] [i_10])))))), (min((13086544770790685975ULL), (239202590836465138ULL))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2198090310U)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (unsigned char)254))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3016955235U)));
                        var_46 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_10] [i_10])) : (((/* implicit */int) ((unsigned char) 4453140885856230543LL)))));
                    }
                } 
            } 
            var_47 = arr_17 [(signed char)20] [i_10] [(signed char)5] [0LL];
        }
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (14000567881537916675ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-62)), (((((/* implicit */int) (signed char)60)) & (((/* implicit */int) (signed char)-67)))))))));
        var_49 = ((/* implicit */signed char) ((arr_24 [0ULL]) >> (((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) >= (-4453140885856230543LL))) ? (((unsigned int) (signed char)-79)) : (((552003112U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [(unsigned char)13] [i_10]))))))) - (4294967212U)))));
    }
    for (unsigned char i_16 = 1; i_16 < 13; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_17 = 1; i_17 < 13; i_17 += 1) 
        {
            for (signed char i_18 = 1; i_18 < 11; i_18 += 1) 
            {
                {
                    var_50 = ((/* implicit */unsigned int) -1965933532948878902LL);
                    var_51 = arr_12 [(unsigned char)15] [i_17] [i_18];
                    var_52 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 64512U)) ? (-4453140885856230543LL) : (((/* implicit */long long int) 171430080U))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (239202590836465138ULL)))));
                    var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_16 - 1] [i_16 - 1] [i_18] [i_17 - 1])))))) ? (4453140885856230543LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (signed char i_20 = 1; i_20 < 11; i_20 += 3) 
            {
                for (unsigned char i_21 = 0; i_21 < 14; i_21 += 4) 
                {
                    {
                        var_54 -= ((/* implicit */long long int) min((((/* implicit */unsigned char) ((signed char) max((arr_45 [i_16 - 1] [i_21]), (((/* implicit */unsigned long long int) arr_19 [(signed char)3] [(unsigned char)1] [i_19] [i_16 + 1])))))), (arr_26 [(signed char)3] [i_19])));
                        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) var_8))));
                    }
                } 
            } 
        } 
        var_56 = ((/* implicit */unsigned long long int) ((_Bool) var_11));
    }
    for (unsigned char i_22 = 4; i_22 < 7; i_22 += 2) 
    {
        var_57 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((171430080U) != (4123537216U))))) + ((((!(((/* implicit */_Bool) 24LL)))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [(unsigned char)0] [i_22] [i_22 + 2])))))))));
        var_58 = ((/* implicit */signed char) var_15);
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
        {
            for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) 
            {
                {
                    var_59 = ((/* implicit */signed char) (((-(48LL))) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)-18)) + (((/* implicit */int) arr_28 [i_22 - 2] [i_22 + 2])))))));
                    var_60 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_23] [(unsigned char)2] [19ULL] [19ULL] [i_23]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_49 [i_23] [(_Bool)1] [11U]))))));
                }
            } 
        } 
        var_61 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_22 - 3] [i_22 + 2] [i_22] [i_22 - 4])) ? (((/* implicit */int) arr_19 [i_22 - 3] [i_22 + 3] [i_22] [i_22 - 2])) : (((/* implicit */int) arr_19 [i_22 - 1] [i_22 - 3] [i_22] [i_22 - 3]))))) - ((+(var_11)))));
    }
    var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -6601453880744760862LL)))))))) : (((20ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131)))))));
    var_63 = ((/* implicit */unsigned char) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_12)))));
}
