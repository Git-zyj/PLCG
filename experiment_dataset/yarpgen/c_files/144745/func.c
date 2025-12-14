/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144745
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_3);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((max((max((((/* implicit */long long int) arr_0 [i_1])), (var_18))), (((/* implicit */long long int) (signed char)-49)))) & (((/* implicit */long long int) arr_0 [i_1])))))));
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_2] [i_2 + 3] [i_2]), (arr_4 [i_2] [i_2 + 2] [i_2])))) ? (((unsigned int) 1992040179U)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_0 [i_1])))) ? ((+(((/* implicit */int) (signed char)48)))) : (((/* implicit */int) arr_4 [i_2 + 3] [i_2 + 2] [i_2])))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */short) var_0);
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) arr_4 [i_3] [10LL] [i_3]);
        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((var_4) >> (((/* implicit */int) (signed char)44)))) << (((((/* implicit */int) arr_4 [i_3] [i_3] [i_3])) + (168))))) : (max((var_17), (((/* implicit */long long int) (!(arr_5 [i_3] [(signed char)4] [(signed char)4] [i_3]))))))));
    }
    for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 1) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (signed char)-32))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4627253483270728667ULL), (((/* implicit */unsigned long long int) 656913670U))))) ? (((/* implicit */int) ((arr_13 [i_4]) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [(unsigned short)18] [(unsigned short)18])))))))) : (max((((((/* implicit */int) (signed char)59)) * (((/* implicit */int) (unsigned short)34965)))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)33927))))))));
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_19 [i_4] [i_5] [10U] [i_5] = ((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) << ((((((+(((/* implicit */int) arr_11 [i_6 + 3] [i_5 + 1])))) + (84))) - (36)))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned long long int) (signed char)-108)), (4627253483270728669ULL))));
                                arr_24 [i_5] = ((/* implicit */_Bool) var_17);
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) % (1700985371U))), (((/* implicit */unsigned int) max((arr_23 [i_7] [i_6] [i_7]), (var_11))))))), (var_3))))));
                                arr_25 [i_4] [i_5] [i_6 - 2] [i_7] [i_4] [i_5] = arr_15 [i_5] [i_5];
                            }
                        } 
                    } 
                    arr_26 [i_5] [i_5] [i_5] = ((/* implicit */short) max(((signed char)51), ((signed char)48)));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                arr_32 [i_5] = ((/* implicit */short) var_12);
                                arr_33 [i_5] [i_6] [i_5] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) max((arr_17 [i_4] [i_5 + 2] [i_4] [i_9]), (((/* implicit */short) (signed char)-52))))) : (((/* implicit */int) arr_20 [i_4] [i_5 - 2] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (((long long int) max((arr_20 [i_4] [i_5] [i_6]), (((/* implicit */unsigned char) (signed char)-45))))));
                            }
                        } 
                    } 
                    arr_34 [i_4] [i_6] [(_Bool)1] &= ((/* implicit */unsigned long long int) max((-1545221304), (((/* implicit */int) (unsigned short)22784))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_11 = 3; i_11 < 24; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                {
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_18 [(unsigned short)0] [i_11 - 3] [i_4 - 4] [i_11 - 3])))) ? (((((/* implicit */unsigned long long int) arr_38 [i_4 - 4])) | (arr_18 [i_4] [i_11 - 3] [i_4 + 1] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) <= (arr_18 [i_4] [i_11 + 1] [i_4 - 1] [i_4 - 1]))))))))));
                    var_29 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((arr_39 [i_11] [i_11] [i_11]), (2147483647)))) ? (((/* implicit */unsigned int) ((arr_29 [24ULL] [i_11] [24] [i_12] [i_12]) | (((/* implicit */int) var_15))))) : (2593981925U)))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_13 = 1; i_13 < 24; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                {
                    arr_48 [i_13] = ((/* implicit */signed char) arr_42 [i_13] [i_13 + 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_30 += ((/* implicit */unsigned char) arr_38 [i_15]);
                        var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 12763306416344463732ULL)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (signed char)-46))))))) : (max((((((/* implicit */_Bool) 1152921504606781440LL)) ? (arr_36 [i_15] [i_15] [i_14]) : (((/* implicit */unsigned long long int) 2110551654)))), (((/* implicit */unsigned long long int) (signed char)-49))))));
                        arr_52 [i_13] [i_14] [i_15] [i_16] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_49 [i_16] [(signed char)10] [i_15] [i_14] [i_14] [i_13])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) arr_47 [i_13] [i_14] [i_14])))))));
                        var_32 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)51)), (arr_16 [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_46 [i_13 - 1])))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_13 [i_13 - 1]))));
                            var_34 = ((var_18) <= (((/* implicit */long long int) ((arr_29 [i_13] [i_18] [i_13] [i_17] [i_13]) + (((/* implicit */int) (unsigned short)22))))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_18 [i_18] [i_15] [i_14] [i_13]))))) <= (((/* implicit */int) arr_17 [(unsigned short)15] [i_15] [i_14] [i_13 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_13] [i_14] [i_15])))))) : (((((/* implicit */_Bool) ((signed char) 9517223101156989073ULL))) ? ((+(arr_55 [i_13] [i_17] [i_17] [i_15] [i_14] [i_13]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_47 [i_18] [i_18] [i_15])) : (((/* implicit */int) (signed char)-52))))))))))));
                            arr_57 [i_13] [i_18] [i_13] [i_13] [8] |= var_11;
                            var_36 = ((/* implicit */unsigned char) ((((_Bool) (!(((/* implicit */_Bool) var_7))))) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned short)14336))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)19))))) : (((unsigned int) 4294967294U)))) : ((-(arr_55 [i_13 + 1] [i_13] [i_13] [i_13] [i_13] [4LL])))));
                        }
                        arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) (short)3163);
                        arr_59 [i_13] [i_14] [i_13] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) (signed char)32))))) < (6350605900784664311LL)));
                        var_37 = ((/* implicit */short) var_8);
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */unsigned long long int) 820482391U)) : (13819490590438822921ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 13819490590438822921ULL)) && (((/* implicit */_Bool) arr_13 [(_Bool)1]))))), (arr_30 [i_13] [i_13]))))));
    }
}
