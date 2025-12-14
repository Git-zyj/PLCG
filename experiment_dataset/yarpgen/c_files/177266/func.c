/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177266
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
    var_14 = (~(max((max((12182886027513825304ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_9))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_2]);
                    var_15 += ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))) : (1179806761U)))) && (arr_5 [i_0])))), (((unsigned short) ((1U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 += ((/* implicit */long long int) max((((unsigned char) 1618655319)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -12LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (3383886190550544999ULL)))) || (var_1))))));
                        arr_10 [i_1] = ((/* implicit */_Bool) ((min((((/* implicit */int) var_0)), (arr_3 [i_0] [i_2] [i_2]))) + (((((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) var_1))))));
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)36)) ? (3850185119541817309LL) : (6488889164989717283LL)));
                    }
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        var_18 += ((/* implicit */signed char) ((int) max((((/* implicit */unsigned short) (signed char)-38)), (arr_7 [i_4 - 1] [i_4 - 1] [i_0] [2U] [i_4 - 1] [i_4]))));
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(max((var_2), (((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2])), (arr_3 [i_0] [i_1] [1LL])))))))))));
                            arr_17 [i_1] = ((((((arr_3 [i_2] [5LL] [i_2]) < (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_9 [i_0] [i_0] [i_0] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) : ((+(12182886027513825313ULL))))) >= (((/* implicit */unsigned long long int) max(((-(1864057209754327731LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6488889164989717269LL)) ? (arr_3 [i_0] [i_2] [i_0]) : (((/* implicit */int) var_9)))))))));
                        }
                        for (short i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            arr_20 [i_1] [i_1] [i_4] [i_6 - 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)5] [i_0] [(signed char)5] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [0U] [i_4])) : (((/* implicit */int) arr_5 [i_4]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6 + 3] [i_4 + 1] [i_4])) && ((_Bool)1))))) : (var_4)));
                            var_20 = ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (var_12))))) : (((27ULL) | (((/* implicit */unsigned long long int) -1618655337)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)22779)) || (((/* implicit */_Bool) -1LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) (signed char)51))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)65528)))))))));
                            arr_21 [i_6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) (signed char)-38)), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) % (-1023155466516786367LL)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    var_21 += ((/* implicit */unsigned short) 12759122850058412270ULL);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 9; i_11 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 6488889164989717283LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-3850185119541817310LL)))))) ? (min((((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (unsigned char)248))))), (arr_33 [i_11 - 1] [i_10 - 1] [(signed char)8] [i_10] [i_10] [i_10 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                                arr_35 [i_7] [i_10] [i_7] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((arr_30 [i_7] [i_8] [i_9] [i_7] [i_10 - 1] [i_9]) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? ((~(((/* implicit */int) arr_7 [i_7 - 2] [i_7 + 1] [i_11] [i_9] [i_10 - 1] [i_11 + 1])))) : (max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (arr_33 [i_7] [i_8] [i_9] [i_7] [i_10] [i_11 + 1])))), ((-(((/* implicit */int) var_5))))))));
                                var_23 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 3383886190550545006ULL)))));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (15062857883159006616ULL)));
                            }
                        } 
                    } 
                    arr_36 [i_7] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_13 [i_7 - 2] [i_8] [i_8] [i_8] [6ULL] [i_9] [i_7])) : (3383886190550544992ULL))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            for (long long int i_13 = 2; i_13 < 10; i_13 += 2) 
            {
                for (unsigned int i_14 = 2; i_14 < 8; i_14 += 3) 
                {
                    {
                        arr_47 [i_7] [i_7 - 1] = 2096896;
                        arr_48 [(unsigned char)2] [i_12] [i_13] [i_7 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_13 - 2] [i_7] [i_13])) ? (arr_2 [i_13 - 1] [i_13] [i_13]) : (arr_2 [i_13 - 1] [i_13] [i_13])))) ? (min((((/* implicit */unsigned long long int) ((1618655346) >> (((((/* implicit */int) arr_42 [8ULL] [8ULL] [i_13 + 1])) + (75)))))), (((((/* implicit */_Bool) (short)32754)) ? (14865457530316073562ULL) : (3383886190550544975ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_34 [i_13 - 2] [i_7 + 1] [i_13] [i_13 - 2] [i_13])) - (219))))))));
                    }
                } 
            } 
        } 
        arr_49 [i_7] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_37 [i_7] [i_7])) ? (arr_13 [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7]) : (((/* implicit */int) var_12)))), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_8 [i_7] [(signed char)0] [i_7 + 1])))), ((+(((/* implicit */int) (signed char)127))))))));
    }
}
