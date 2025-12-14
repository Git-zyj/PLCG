/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119779
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_4 [12LL] [3LL] [i_1] = ((/* implicit */short) ((unsigned int) var_10));
            var_19 = ((/* implicit */unsigned char) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        }
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            arr_8 [i_0] [2LL] = ((/* implicit */unsigned long long int) (signed char)-11);
            arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127)))))) : ((+(var_11)))))) <= (((var_12) ? (((/* implicit */long long int) var_16)) : (var_10)))));
        }
        var_20 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((var_16) >> (((((/* implicit */int) (unsigned short)9981)) - (9954)))))))));
        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_0 [i_0])))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) min((((long long int) arr_7 [i_3] [i_3])), (((/* implicit */long long int) var_14))));
            var_23 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) arr_12 [i_3] [i_4])));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (long long int i_7 = 3; i_7 < 17; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((arr_11 [i_4 - 2]) >= (arr_11 [i_4 - 2])))), (((((((/* implicit */_Bool) 16777215ULL)) ? (arr_7 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                            arr_21 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((arr_0 [i_7]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))));
                            arr_22 [i_3] [i_4] [i_3] [i_6] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9392)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_6 [i_5] [i_4 + 1] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3])) && (((/* implicit */_Bool) arr_3 [i_3] [(unsigned char)4] [i_7]))))))));
                            var_27 = ((/* implicit */long long int) ((min((((12159929486064390816ULL) * (((/* implicit */unsigned long long int) arr_7 [i_3] [i_4])))), (((/* implicit */unsigned long long int) ((985738892U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_6] [i_6])))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((210642244006439238ULL), (((/* implicit */unsigned long long int) arr_5 [i_4]))))) ? ((~(((/* implicit */int) (unsigned short)5722)))) : (((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [i_3] [i_6])))))));
                        }
                        var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((unsigned char) 2147483647)), ((unsigned char)106)))), ((((!(((/* implicit */_Bool) arr_5 [(signed char)6])))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_14 [i_3] [i_4] [i_4 + 2] [i_4]))))));
                    }
                } 
            } 
        }
        arr_23 [i_3] = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_18 [i_3]))));
        arr_24 [i_3] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)172)), (min((arr_20 [i_3] [i_3] [i_3] [1] [i_3]), (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3])))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_7 [i_3] [(unsigned short)14])))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) ((unsigned char) var_13)))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 4; i_8 < 10; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 3]))) : (((unsigned int) (unsigned short)20))));
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [11ULL])) ? (arr_2 [i_8 - 3] [i_8 + 2] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [i_8 + 2] [i_8] [i_9 + 3])))));
                    arr_34 [i_8 - 1] [i_8 - 1] [i_8] = (!(((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52340))))));
                }
            } 
        } 
        arr_35 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_8 - 2] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((arr_3 [i_8] [i_8] [i_8]) >> (((var_11) + (471164988)))))));
        var_32 = ((/* implicit */long long int) (unsigned char)209);
        var_33 = ((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_8] [i_8 + 1]))));
        var_34 = ((/* implicit */unsigned char) arr_18 [i_8]);
    }
    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        var_35 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4464447632082804750LL)))) ? (((/* implicit */unsigned long long int) arr_36 [i_11])) : ((~(var_4))))) * (var_17)));
        arr_39 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)24576)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_11] [i_11] [i_11] [i_11]))) : (((((/* implicit */_Bool) var_14)) ? (arr_13 [i_11]) : (((/* implicit */long long int) arr_36 [i_11])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            var_36 = (+(((/* implicit */int) (unsigned char)47)));
            /* LoopNest 2 */
            for (long long int i_13 = 2; i_13 < 11; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        arr_48 [i_11] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((long long int) (unsigned char)45))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3521)) ? (((/* implicit */int) arr_44 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned char)8))))) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        var_37 = ((/* implicit */signed char) var_16);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                        {
                            arr_51 [i_11] [i_13] [i_14] [i_14] [i_13] [1LL] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (short)2047)))));
                            var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [(signed char)4] [i_11] [i_15] [i_15]))));
                        }
                    }
                } 
            } 
        }
    }
    var_39 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned int) (+(852642426))))));
    var_40 = ((/* implicit */unsigned short) (+((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_3)))))));
    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_17) >> (((7895506356748898533LL) - (7895506356748898518LL)))))))) : (var_4)));
}
