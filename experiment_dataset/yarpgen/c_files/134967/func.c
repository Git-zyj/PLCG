/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134967
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
    var_17 &= ((/* implicit */unsigned short) ((var_12) >= (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned long long int) -1LL)) : ((+(var_12)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) arr_0 [i_0]))))) ? (max((((/* implicit */long long int) ((var_13) ? (var_6) : (arr_3 [i_1] [i_1])))), ((~(-2918566458503190936LL))))) : (((((/* implicit */_Bool) ((int) 1045278807U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (((long long int) arr_2 [i_0] [i_0]))))));
            arr_4 [i_1] [i_1] = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (214084386U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [(signed char)5])) || ((!(((/* implicit */_Bool) var_14)))))))));
            var_19 += ((/* implicit */int) ((((max((((/* implicit */long long int) arr_2 [i_0] [i_1])), (-6882688898321252490LL))) + (((/* implicit */long long int) (~(var_0)))))) == (((/* implicit */long long int) max((arr_3 [i_0] [i_0]), (((/* implicit */int) ((signed char) var_2))))))));
            arr_5 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) var_15))), ((+(72057594021150720ULL)))));
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) && (((/* implicit */_Bool) arr_8 [12LL] [12LL]))))), (arr_3 [i_0] [(unsigned char)15]))) == (((arr_6 [i_0] [i_2] [i_2]) & (((/* implicit */int) arr_1 [i_0]))))));
            var_20 = ((/* implicit */int) (_Bool)1);
        }
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            arr_12 [i_0] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_11)), (var_3))))), (((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_9))))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) >= (arr_8 [i_0] [i_3]))))))));
            var_21 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [3] [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) arr_11 [i_0] [13ULL])))) < (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55738))) : (10796158584516199419ULL))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (536870911ULL) : (((/* implicit */unsigned long long int) arr_8 [(unsigned char)9] [14]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                arr_16 [(_Bool)1] [i_3] [i_4 - 1] [i_4 + 1] = ((((((long long int) var_12)) * (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-3567181996659563718LL))))) << ((((~(402653184))) + (402653216))));
                var_22 = ((/* implicit */int) max((var_22), (min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))), ((~(((((/* implicit */int) arr_10 [i_0] [i_3] [i_0])) & (((/* implicit */int) var_7))))))))));
                var_23 -= ((/* implicit */unsigned short) max((((long long int) arr_3 [i_4 + 2] [i_4 + 2])), (((/* implicit */long long int) ((((/* implicit */_Bool) 402653184)) || (((/* implicit */_Bool) (signed char)112)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned short i_6 = 4; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [2ULL] [12LL] [i_6 - 3] [12LL] [i_0] [i_4 - 1] [2ULL])) && (((/* implicit */_Bool) min((-402653184), (((/* implicit */int) var_13)))))))) != (((/* implicit */int) var_5))));
                            var_25 &= arr_7 [i_0] [i_3];
                            arr_21 [i_6] [i_5] [i_4 - 1] [i_3] [i_6] &= ((/* implicit */unsigned short) ((arr_8 [i_4 - 1] [i_6 + 2]) % (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_1 [i_6 - 2]))));
                            var_27 = ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_4] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) arr_6 [i_4 + 2] [i_4 + 1] [(unsigned short)13])) : (arr_19 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_3] [(signed char)13] [(signed char)13])));
                        }
                    } 
                } 
            }
        }
        var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) - (77)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-112))))) + (min((var_4), (((/* implicit */unsigned long long int) var_6))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_29 = ((/* implicit */signed char) -1899594512);
        var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))) | (((/* implicit */int) var_7))));
    }
    /* LoopSeq 3 */
    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        arr_26 [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) min((arr_18 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */signed char) var_8))))) * (((/* implicit */int) var_7)))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_25 [i_8]) + (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_8]) > (-402653184)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(unsigned short)9] [(unsigned short)9] [i_8] [i_8] [i_8] [i_8] [i_8])) || (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 3786292371903358692ULL))))))) : ((~(((/* implicit */int) ((unsigned char) var_14)))))));
        var_32 += ((/* implicit */int) ((((/* implicit */long long int) arr_3 [3LL] [i_8])) > (max((((/* implicit */long long int) arr_13 [i_8])), (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))));
        /* LoopNest 2 */
        for (signed char i_9 = 4; i_9 < 8; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    var_33 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_8] [i_9 - 2] [i_9 - 3] [i_9 - 4] [i_10])) ? (arr_17 [9] [i_8] [i_9 - 2] [i_9 - 3] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))))));
                    arr_33 [i_8] [6ULL] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)112)) ? (min((((/* implicit */int) ((((/* implicit */int) arr_28 [i_8] [i_9 - 4] [i_10])) != (((/* implicit */int) (signed char)58))))), (((int) arr_19 [(_Bool)1] [i_8] [i_9] [7ULL] [i_8] [(signed char)4] [i_10])))) : (((/* implicit */int) arr_14 [i_8]))));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (max((arr_6 [i_11] [i_11] [i_11]), (((/* implicit */int) arr_34 [2ULL] [(signed char)2])))) : ((+(((/* implicit */int) (unsigned short)2047))))));
        arr_36 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_15)) << (((/* implicit */int) var_13))))))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11] [i_11])))));
        arr_37 [i_11] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_20 [i_11] [i_11] [(signed char)8] [i_11])));
    }
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
    {
        var_35 = max((((/* implicit */unsigned long long int) min(((+(arr_13 [i_12]))), (((/* implicit */int) (unsigned short)60949))))), (((((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) ? (3786292371903358692ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
        var_36 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_12]))))) & (arr_39 [i_12]))) / (((/* implicit */unsigned long long int) (-(min((arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */long long int) 2147483647)))))))));
        var_37 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)112)) || (((/* implicit */_Bool) arr_7 [i_12] [i_12])))))) >= (((((/* implicit */unsigned int) var_6)) - (var_0))))))));
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((var_9) != (((/* implicit */long long int) ((((/* implicit */int) var_11)) % (-402653185)))))))));
    }
}
