/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147620
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */int) var_5)), (var_2))))), (var_4)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((max((((6133976339231829875LL) / (-6133976339231829876LL))), (((/* implicit */long long int) (~(2147483641)))))) + (-6133976339231829886LL));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (arr_8 [2LL] [4LL])));
                        var_22 = ((/* implicit */int) -6133976339231829883LL);
                        var_23 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-32746))));
                        var_24 *= ((/* implicit */short) (((+(((arr_7 [i_0 - 1] [i_0] [i_2] [(unsigned char)1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) var_4))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_11))));
            /* LoopNest 2 */
            for (signed char i_4 = 3; i_4 < 22; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_1])), (((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */unsigned int) var_10)) : (4294967285U)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_15))))) : (min((6133976339231829875LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-56)))))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-27055)) : (((/* implicit */int) var_19))))) && (((/* implicit */_Bool) var_4))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)103)))) || (((/* implicit */_Bool) var_6))))))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_4] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) 17845459089635634960ULL))))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967285U))))), (arr_8 [i_5] [i_5])))) - (17585))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? ((+(10U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1])))))));
            arr_18 [(signed char)14] [i_1] = ((/* implicit */int) arr_0 [i_0]);
        }
        var_30 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 6133976339231829851LL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) ? (((min((((/* implicit */long long int) var_15)), (arr_13 [15ULL]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)27025)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)112)))));
        arr_19 [i_0] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))), (arr_14 [10] [i_0 - 1] [15]))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_31 = ((/* implicit */long long int) var_10);
                    var_32 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(var_3)))))) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-82)) | (((/* implicit */int) arr_11 [i_7] [i_7] [i_0] [i_7] [i_0]))))) ? (((/* implicit */int) ((_Bool) -15))) : ((+(arr_1 [i_6])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 3] [i_8])) / (((/* implicit */int) arr_10 [i_0 - 1] [16ULL] [i_0 + 1] [i_8 - 2]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 3] [i_7])) ? (((/* implicit */int) arr_15 [i_8 + 1] [i_8 + 1] [7LL] [i_0])) : (((/* implicit */int) arr_10 [i_0 + 2] [(signed char)22] [i_0 + 3] [i_8 - 2])))) : (((((/* implicit */_Bool) arr_16 [(short)12] [i_0] [i_0 + 1] [i_0 + 1] [i_7])) ? (((/* implicit */int) arr_15 [i_8] [i_8 + 1] [i_8 - 2] [i_6])) : (((/* implicit */int) var_5))))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((signed char) arr_26 [i_0] [i_6] [i_7] [i_8])))));
                        arr_28 [i_0] [i_6] [i_7] = ((/* implicit */int) (short)-27055);
                    }
                    for (int i_9 = 4; i_9 < 20; i_9 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (+((-2147483647 - 1)))))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (signed char)96))));
                        var_37 = ((/* implicit */long long int) arr_15 [i_0] [i_7] [i_7] [i_0 - 1]);
                        var_38 *= ((/* implicit */unsigned short) arr_27 [i_0 + 2] [i_9 + 1] [i_9] [i_9 - 4]);
                    }
                    var_39 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [13ULL] [i_6])) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)0))))))));
                }
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_13 [i_10])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_10] [i_10]))))))));
        var_41 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(var_7)))) ? (min((((/* implicit */unsigned long long int) (signed char)75)), (arr_6 [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))) << (((/* implicit */int) ((_Bool) var_15)))));
        var_42 *= ((/* implicit */signed char) arr_20 [16]);
        arr_33 [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_30 [(unsigned short)10] [18LL]))))))));
        var_43 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) ^ ((~(-6133976339231829882LL)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        for (unsigned char i_12 = 2; i_12 < 19; i_12 += 1) 
        {
            {
                var_44 ^= ((/* implicit */signed char) var_14);
                arr_39 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_45 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 4717642595171104055LL)) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_9)))))))) / (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (4294967271U))))))));
}
