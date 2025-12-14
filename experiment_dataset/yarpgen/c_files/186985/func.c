/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186985
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-58)))) ? ((+((~(-746460121))))) : (((1189318648) | (-746460121)))));
                    var_20 = ((/* implicit */unsigned long long int) (+((-((+(187473584)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_14)) <= (var_18))) && (((/* implicit */_Bool) (+(arr_1 [i_0])))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_4 [18] [18] [i_0]) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))) : ((-(18446744073709551615ULL))))))))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [3])) ? (2114153666) : (((/* implicit */int) (signed char)127))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3])))))));
        var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) 6472400502557667688ULL)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (short)-25214))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_25 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_18)) ? (4263638319800948260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_16))))))));
            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_5 [i_4] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) & (var_11))))));
            var_27 |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_10)))))));
            var_28 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_8 [i_4])) ^ (((/* implicit */int) (short)12347))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)10))))) ? (((((/* implicit */_Bool) arr_3 [i_5])) ? (1936855828093544742ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 9434445315751463914ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (140737219919872ULL)))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (short)3315)))))));
        }
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_31 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1864748024)) ? (1202436743) : (823334279))) <= (((((/* implicit */_Bool) 1223261804)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_2))))));
        /* LoopSeq 4 */
        for (int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_6])) && (((/* implicit */_Bool) var_0)))) && ((!(((/* implicit */_Bool) arr_9 [i_6] [i_7]))))));
            var_33 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) >= (((/* implicit */int) (short)16768)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_7] [i_6])) : (((/* implicit */int) arr_0 [i_6])))))));
            var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(-360331150))))));
            var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-15927))));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
        {
            var_36 = ((((/* implicit */int) (signed char)66)) ^ (((631117128) ^ (1223261804))));
            var_37 = ((/* implicit */short) (+(((arr_1 [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8])))))));
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15)))))) ? (((((/* implicit */_Bool) arr_4 [i_6] [i_8] [i_6])) ? (var_14) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) arr_6 [i_8])) ^ (arr_17 [i_6] [i_6] [i_6])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1042348023))))))))));
            var_40 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : (var_9)))));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1864748024)) ? (0) : (-1287705419)))) ? (((/* implicit */int) ((((/* implicit */int) (short)32748)) == (arr_20 [i_10] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_10]))))))))));
            var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-14)) : (arr_9 [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_10] [i_6])) || (((/* implicit */_Bool) arr_1 [i_6]))))) : ((+(((/* implicit */int) (short)0))))));
            var_43 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_23 [i_10])))) ? ((-(1502945211889770772ULL))) : (((((/* implicit */_Bool) (short)32748)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13)))))));
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_44 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)24647)) ? (arr_5 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_6] [i_10] [i_11]))))))));
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)82)) ? (278427885) : (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-25))))));
                            var_46 = ((/* implicit */int) (((-(197743915974323669ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13])))))))));
                            var_47 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) / (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_12 [i_6]))))));
                        }
                        for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            var_48 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6])) << (((arr_1 [i_14]) - (9262660902410679396ULL))))))));
                            var_49 += (-(((((/* implicit */_Bool) arr_19 [i_10] [i_12])) ? (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_5 [i_10] [i_10]))));
                        }
                        for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)-23))));
                            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_6] [i_6])) + (((/* implicit */int) arr_30 [i_15] [i_12] [i_11 + 1]))))) ? ((-(((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) -8)) ? (((/* implicit */int) (signed char)-71)) : (1299976142)))));
                            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2147483647)))) ? (((((/* implicit */_Bool) (signed char)-78)) ? (arr_2 [i_11]) : (arr_13 [i_6] [i_12] [(signed char)5]))) : (((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))));
                        }
                    }
                } 
            } 
            var_53 &= (-(((((/* implicit */_Bool) arr_21 [i_10])) ? (arr_13 [i_6] [(signed char)9] [i_10]) : (((/* implicit */int) (short)24647)))));
        }
    }
    var_54 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((var_5) != (var_11))))))));
    var_55 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_18) : (32736ULL)))))))));
}
