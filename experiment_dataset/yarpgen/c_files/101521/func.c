/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101521
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16079))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_0 [(unsigned char)19]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-116))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_2 [7ULL]), ((short)16075)))))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2306525835912267111LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_3))))), (((var_6) ? (4817100207440692331ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_4 + 3])), (arr_10 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))) : ((~(-906743570))))))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */short) arr_1 [i_3])), ((short)17868))))) : (((/* implicit */int) max((arr_8 [i_4 + 4] [i_4 + 3] [i_4 - 1] [i_4 + 4] [i_4 - 1] [i_4 + 3]), (((/* implicit */unsigned char) arr_12 [i_4 - 1] [i_1] [i_4 + 3] [i_1] [i_4 - 1])))))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max(((~(arr_5 [i_4 + 2] [i_3] [i_2]))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [16ULL] [i_3] [i_3] [16ULL] [(signed char)20])), (((((/* implicit */_Bool) 3296074488U)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (1766586213)))))))))));
                        }
                    } 
                } 
            } 
            var_16 -= ((/* implicit */short) ((max((((/* implicit */unsigned int) ((signed char) 906743569))), (4294967292U))) | (max((((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_0 [(unsigned char)11]) : (arr_5 [i_0] [(_Bool)1] [(unsigned short)10]))), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) arr_12 [i_0] [i_5] [i_5 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_5 - 1] [i_5 + 1] [i_5]))));
            arr_17 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 + 1]))) | (arr_5 [i_5 - 1] [i_5] [i_0])));
            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5 + 1]))));
        }
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-109)))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [2] [2]))))), (((((/* implicit */_Bool) (short)9197)) ? (3794926880U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))))))) : (((/* implicit */unsigned int) min((arr_19 [i_0] [i_6 - 1]), (((/* implicit */int) arr_16 [12LL])))))));
            var_20 -= ((/* implicit */_Bool) var_4);
            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [(unsigned char)6] [(unsigned char)6])), (var_0)))) ? (arr_7 [i_6 - 1]) : (((/* implicit */int) arr_8 [i_6 + 1] [8LL] [i_6] [i_6 + 1] [i_6] [i_6 - 1]))))), (((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned int) arr_18 [i_0] [i_6]))))));
            var_22 = ((/* implicit */short) (+(max((((/* implicit */long long int) arr_2 [i_0])), (min((var_10), (((/* implicit */long long int) arr_7 [(_Bool)1]))))))));
            var_23 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_3))))));
        }
        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
        {
            arr_24 [i_7 + 1] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_11 [i_7] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) | (((/* implicit */unsigned long long int) var_10))))) ? (((arr_20 [i_7 + 1] [i_7 + 1] [i_7 - 1]) + (arr_0 [i_7 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (arr_0 [i_7 - 1]) : (arr_0 [i_7 + 1])))));
            arr_25 [i_0] [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_6 [i_7 + 1] [i_7] [i_7 - 1] [i_7])))))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1024)) && (((/* implicit */_Bool) arr_6 [i_8] [i_8] [(_Bool)1] [i_7]))))))))) ? (max((var_7), (((/* implicit */unsigned long long int) -683017641)))) : (((/* implicit */unsigned long long int) 8701967777031942217LL))));
                var_25 -= ((/* implicit */unsigned short) min((((/* implicit */int) ((arr_11 [(_Bool)1] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(short)2] [(short)2] [i_8] [i_7])))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_8])) && (((/* implicit */_Bool) 12357894326061182161ULL)))))))));
                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [16U] [16U] [(short)2])) ? (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [2ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7 + 1] [20U] [i_7 + 1] [20U] [i_7 + 1])))))) ? (((/* implicit */unsigned int) min((max((((/* implicit */int) arr_2 [i_0])), (1787827620))), (((/* implicit */int) arr_27 [i_7 - 1] [i_8]))))) : (arr_20 [i_0] [i_0] [i_8])));
            }
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) << (((/* implicit */int) (!(((/* implicit */_Bool) -8701967777031942217LL)))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_7] [i_0])))) && (((/* implicit */_Bool) arr_15 [i_0] [i_0]))))))));
                var_28 = ((/* implicit */signed char) arr_1 [i_0]);
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_7])) ? (6767014860730469208ULL) : (var_7))), (((/* implicit */unsigned long long int) arr_31 [i_7 - 1] [i_9])))))));
            }
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
        }
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))))) ? ((~(arr_19 [i_0] [(unsigned char)0]))) : ((((+(((/* implicit */int) (short)16079)))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [18U] [i_0] [i_0])) && (((/* implicit */_Bool) 6088849747648369455ULL)))))))));
    }
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 401972338U)) * (var_9))), (((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (var_11) : (((/* implicit */unsigned long long int) 906743569))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-98))))) : (((((/* implicit */_Bool) var_2)) ? (12357894326061182157ULL) : (((/* implicit */unsigned long long int) var_2)))))) : (min((((/* implicit */unsigned long long int) min((var_2), (var_10)))), (((var_11) >> (((/* implicit */int) var_1))))))));
    var_33 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))));
    var_34 = ((/* implicit */short) ((var_6) ? (max((((/* implicit */unsigned long long int) ((var_4) >= (((/* implicit */unsigned long long int) var_2))))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) -6884083037162451801LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
}
