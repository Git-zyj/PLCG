/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111507
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) ((((/* implicit */int) (short)-32761)) == (((/* implicit */int) (signed char)-110))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) < (var_15)))));
                            arr_12 [i_0] [i_1 + 1] [(unsigned char)5] [i_2] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((arr_5 [i_0] [i_3]) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) % (16990669438811114351ULL)))) ? (max((((/* implicit */int) (signed char)106)), (arr_9 [i_0] [(signed char)1] [(signed char)1] [i_3]))) : (((/* implicit */int) var_12)))) - (848204208)))))) : (((/* implicit */unsigned short) ((arr_5 [i_0] [i_3]) >> (((((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) % (16990669438811114351ULL)))) ? (max((((/* implicit */int) (signed char)106)), (arr_9 [i_0] [(signed char)1] [(signed char)1] [i_3]))) : (((/* implicit */int) var_12)))) - (848204208))) + (415255848))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_2))))) ? (((int) (unsigned short)8191)) : (((/* implicit */int) arr_8 [i_0 + 3] [i_1] [i_0 + 3] [i_1 + 1])))) & (((/* implicit */int) var_12))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (~(((unsigned long long int) max((var_6), (((/* implicit */unsigned short) var_9)))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned short)2047))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 3; i_8 < 8; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_15)) | (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (var_8))))));
                                arr_33 [i_1] [i_1] [i_0] [i_8 - 3] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_29 [i_0] [i_7] [i_7] [i_8 - 2] [6])))), (((((/* implicit */_Bool) (unsigned short)28725)) || (((/* implicit */_Bool) 1959205473U))))));
                                var_22 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((int) (short)-32759))));
                                arr_34 [i_0] [(unsigned char)3] [i_0] [i_8] [i_9] = arr_14 [i_8] [i_1 + 2] [i_1 + 2] [i_0 + 2];
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 1; i_10 < 8; i_10 += 2) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_10 + 2] [i_0] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)139)))) < (((((/* implicit */int) var_17)) - (var_10)))))), (arr_0 [i_0 + 1] [i_1])));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5553)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755))) : (arr_1 [i_0] [(signed char)7])));
                        var_24 = ((/* implicit */unsigned int) var_0);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_10))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */int) var_18)) : (var_10)));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_12 = 1; i_12 < 6; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) (+(arr_26 [(unsigned short)4] [i_0] [i_0] [i_1 + 2])));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22498)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_45 [(unsigned char)2] [i_0] = ((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_0] [(signed char)7]);
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_11] [i_0])) : (var_3)));
                            arr_46 [i_0] [i_1] [i_7] [0] [i_0] = ((/* implicit */unsigned short) var_13);
                        }
                        arr_47 [7ULL] [(unsigned short)1] [(signed char)8] [(unsigned short)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) var_5))));
                    }
                }
                /* LoopNest 3 */
                for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) arr_53 [i_0]);
                                arr_56 [i_15] [i_0] [i_13] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_0 + 2] [i_0 - 2] [i_1 + 2] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-111)), ((unsigned short)126)));
    /* LoopNest 2 */
    for (signed char i_16 = 1; i_16 < 14; i_16 += 4) 
    {
        for (signed char i_17 = 3; i_17 < 12; i_17 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_18 = 4; i_18 < 11; i_18 += 3) 
                {
                    for (int i_19 = 1; i_19 < 14; i_19 += 1) 
                    {
                        for (unsigned long long int i_20 = 2; i_20 < 13; i_20 += 4) 
                        {
                            {
                                var_31 = min((((/* implicit */int) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (short)-12734)))))))), (((((/* implicit */_Bool) max(((short)32761), (((/* implicit */short) arr_68 [i_20] [(signed char)2] [i_18] [(_Bool)1] [i_17 - 1] [i_16]))))) ? (-1441536378) : ((~(((/* implicit */int) (short)-32762)))))));
                                arr_70 [i_16] [i_17] [i_18] [i_18] [i_20 + 2] [i_19] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))));
                                var_32 = ((/* implicit */unsigned char) (+((~((+(((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_61 [i_16 + 1] [i_16 + 1])) && (((/* implicit */_Bool) 888593549)))) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_17))));
            }
        } 
    } 
}
