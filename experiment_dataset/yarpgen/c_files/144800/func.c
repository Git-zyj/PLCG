/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144800
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (_Bool)0)))))))) ^ (1540136391U)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) var_5);
        var_19 = ((/* implicit */_Bool) ((((long long int) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0])))) ^ (((long long int) ((short) 665442482901032620ULL)))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (max(((signed char)0), (var_3)))))) ? ((-(((((/* implicit */_Bool) arr_1 [(unsigned char)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (23U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) arr_0 [i_0])) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74)))))))));
        arr_2 [(short)4] = ((/* implicit */int) ((short) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((arr_1 [i_0]) - (6834933491623748637ULL))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (short)-23292)) : (((/* implicit */int) (unsigned char)145)))))) + (((/* implicit */int) ((arr_1 [13]) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned char) var_4))))))))))))));
        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((_Bool) var_14))))));
        arr_6 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) < (min((arr_4 [i_1]), (((/* implicit */unsigned int) (signed char)-90)))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) ((unsigned int) (((~(((/* implicit */int) (unsigned char)1)))) == (((arr_8 [i_1] [i_2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))));
            var_24 += ((/* implicit */signed char) arr_5 [i_1] [i_1]);
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (max((((/* implicit */unsigned int) (unsigned char)198)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((short) (short)23291)), (((/* implicit */short) (signed char)-117))))))));
            var_26 = ((/* implicit */long long int) var_4);
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-23292)) : (((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
        {
            arr_14 [9ULL] [i_1] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 23U)) && (((/* implicit */_Bool) arr_4 [i_3 - 1]))))), (((((/* implicit */_Bool) 8550818476323659452ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1]))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_9 [i_1])), (max((((5659353506936665646LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) min((var_13), ((unsigned char)70)))))))))));
        }
        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                arr_21 [i_1] = ((/* implicit */long long int) arr_20 [i_1] [i_4 - 1] [i_1]);
                arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) arr_5 [6LL] [i_4 + 1])) : (((/* implicit */int) (short)-23292))));
            }
            for (int i_6 = 3; i_6 < 11; i_6 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_6 + 1] [i_6 - 2] [i_6 + 1])) & (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_11 [i_6 - 1] [i_6 + 1] [i_6 - 1]))))));
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((unsigned char) var_8)))));
            }
            arr_25 [(signed char)4] [(_Bool)0] [(_Bool)0] = ((/* implicit */short) min((8550818476323659437ULL), (((/* implicit */unsigned long long int) -9007199254740992LL))));
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((14385763866769711484ULL) >= (((/* implicit */unsigned long long int) (~(0LL))))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 2; i_8 < 11; i_8 += 1) 
            {
                var_31 = ((/* implicit */signed char) var_13);
                var_32 += (+(((/* implicit */int) var_13)));
                var_33 = ((/* implicit */signed char) ((unsigned long long int) var_1));
                var_34 = ((/* implicit */short) max((var_34), (var_2)));
                var_35 = ((/* implicit */unsigned char) ((((long long int) var_4)) ^ (((/* implicit */long long int) ((((/* implicit */int) var_13)) - (-1231186649))))));
            }
            var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)88))));
        }
    }
    for (short i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        var_37 = ((unsigned char) var_11);
        var_38 = ((/* implicit */_Bool) arr_0 [i_9]);
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)164), (((/* implicit */unsigned char) arr_32 [i_9 + 3]))))) ? (((/* implicit */int) arr_32 [i_9 + 3])) : ((+(((/* implicit */int) (unsigned char)167))))));
    }
    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((short) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)188)))))))))));
}
