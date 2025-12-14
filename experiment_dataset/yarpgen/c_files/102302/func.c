/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102302
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) -608619777))))), (min((((/* implicit */unsigned long long int) (unsigned char)43)), (5307894380912955117ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_1 [5] [5]))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_9 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((6018665307244320131ULL), (arr_6 [(unsigned char)8] [i_2] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) / (5800724194090680305ULL))) : (min((15696159543779512007ULL), (((/* implicit */unsigned long long int) (unsigned short)41036)))))))));
                        var_16 *= ((max((min((arr_1 [i_0] [0]), (((/* implicit */unsigned long long int) (unsigned short)24499)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_3])) / (((/* implicit */int) (_Bool)1))))))) == (((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned char)3)), (574208952489738240ULL)))));
                        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_3 + 4] [i_3 + 1])) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_3 [i_3 + 3] [i_3 + 2] [i_3 + 1])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_17 = ((/* implicit */signed char) (unsigned char)48);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_4] [i_4])), (arr_11 [i_5 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 787683085U)) ? (((/* implicit */int) (unsigned short)13544)) : (((/* implicit */int) (unsigned char)134))))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)40266)), (arr_19 [i_4] [i_4] [i_6])))), (min((arr_1 [i_5] [13ULL]), (((/* implicit */unsigned long long int) (unsigned short)58429))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((min((max((((/* implicit */unsigned int) (unsigned short)24500)), (arr_19 [i_5] [i_5] [(unsigned short)6]))), (((/* implicit */unsigned int) (unsigned short)58429)))), (((/* implicit */unsigned int) (unsigned char)124)))))));
                var_20 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (unsigned short)2202)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)63333)) ? (arr_13 [i_5] [i_6]) : (((/* implicit */unsigned long long int) 7388441611460673783LL)))), (max((arr_15 [i_4]), (((/* implicit */unsigned long long int) arr_11 [i_4]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 787683085U)) || (((/* implicit */_Bool) arr_11 [i_4]))))), (arr_7 [i_5 - 1] [i_5 + 2])))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)13544)), (arr_16 [i_4])))))));
            }
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (min((arr_1 [i_5 + 1] [i_5 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 787683085U)) && (((/* implicit */_Bool) 574208952489738240ULL)))))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_22 [(signed char)10] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_7])) ? (((((/* implicit */int) (short)26895)) ^ (((/* implicit */int) (unsigned char)208)))) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (unsigned short)31)) : (-872906046)))));
            var_23 = ((/* implicit */short) (!(((((/* implicit */int) (signed char)-20)) == (((/* implicit */int) arr_5 [i_4]))))));
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            arr_25 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)64)))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_4])) & (arr_13 [12LL] [i_8]))))));
            arr_26 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17081)) - (((/* implicit */int) (unsigned char)120))))) ? ((+(((/* implicit */int) (signed char)31)))) : ((-(((/* implicit */int) (signed char)-72))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_8])) ? (((((/* implicit */_Bool) -979992096)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (short)32767))))));
        }
        var_26 &= ((/* implicit */unsigned char) arr_16 [4LL]);
        var_27 += ((/* implicit */unsigned char) min(((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)93)))))), (((/* implicit */int) min((arr_7 [1] [i_4]), (arr_7 [i_4] [i_4]))))));
        var_28 = ((/* implicit */short) max((min(((~(arr_20 [i_4] [6ULL]))), (((/* implicit */unsigned long long int) arr_0 [i_4])))), (max((((((/* implicit */_Bool) arr_23 [i_4])) ? (arr_13 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4]))))), (min((arr_20 [i_4] [i_4]), (((/* implicit */unsigned long long int) 0U))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            arr_31 [(unsigned short)10] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_4])));
            var_29 = ((/* implicit */unsigned char) -2245216090671355897LL);
        }
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) min((min((arr_14 [i_4]), (2418596976375186300LL))), (((/* implicit */long long int) min((arr_24 [i_4] [i_10]), (arr_24 [i_10] [i_4]))))));
            arr_36 [i_4] = ((/* implicit */signed char) min((min((min((arr_0 [i_4]), (((/* implicit */unsigned int) arr_17 [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) (unsigned short)9011)) ? (arr_30 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_16 [i_4]), (((/* implicit */unsigned long long int) 5971163568660186529LL))))))))));
        }
        for (unsigned int i_11 = 4; i_11 < 11; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (long long int i_13 = 1; i_13 < 12; i_13 += 3) 
                {
                    {
                        arr_47 [i_4] [i_4] [i_4] [i_12] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_34 [i_12]))));
                        arr_48 [i_4] [i_4] [i_11] [i_12] [i_12] [i_13] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-52)) + (((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_12])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_4] [(signed char)12] [i_4] [i_13])) ? (4398046511103LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_11] [i_12])))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_4] [i_12] [i_12])), (11520033269524220586ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_12] [i_11]))) : (((arr_6 [i_4] [i_12] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_12] [i_12] [i_4])))))))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_11 - 4] [i_12] [i_11])) || (((/* implicit */_Bool) arr_6 [i_11 - 2] [i_12] [i_11]))))), (max((arr_6 [i_11 + 1] [i_12] [i_12]), (arr_6 [i_11 + 2] [i_12] [i_11]))))))));
                    }
                } 
            } 
            arr_49 [i_4] [7ULL] = ((/* implicit */short) 10215167477079899447ULL);
            var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)25275)), ((~(5118938722685384476LL)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_14 = 4; i_14 < 24; i_14 += 3) 
    {
        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_50 [i_14]))));
        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)7106)) || (((/* implicit */_Bool) arr_50 [i_14])))) ? (((((/* implicit */_Bool) 9357827177975715439ULL)) ? (arr_51 [i_14] [5ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17082))))) : (((/* implicit */unsigned long long int) 2440039772U))));
        var_35 = ((/* implicit */unsigned int) ((arr_50 [i_14]) % (((((/* implicit */int) (unsigned short)41036)) * (((/* implicit */int) (_Bool)1))))));
    }
    var_36 = ((/* implicit */unsigned int) var_4);
}
