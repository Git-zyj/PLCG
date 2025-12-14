/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184929
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
    var_11 += (unsigned short)43947;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_0 [(_Bool)1]))));
        var_13 -= ((/* implicit */short) (unsigned short)64180);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) var_10);
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 - 2] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)1355)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) (unsigned short)19664)))) : ((~(((/* implicit */int) var_6))))));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] = ((arr_2 [i_2]) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2] [i_0])) == (((/* implicit */int) (unsigned short)64316))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))))));
            var_15 ^= ((/* implicit */short) (unsigned short)1337);
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_16 &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 2844937703082414827ULL))))));
            arr_13 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)45872))));
        }
        var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0 - 1]))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */int) (~(max((arr_11 [i_4] [i_4] [i_4]), (arr_11 [(_Bool)1] [i_4] [i_4])))));
        arr_19 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_4]))))) ? ((+(2480062019U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_4] [(short)3])))))))) ? (((/* implicit */int) min((arr_17 [6] [6]), (((/* implicit */unsigned short) arr_7 [i_4] [i_4] [i_4]))))) : (((/* implicit */int) arr_4 [i_4] [i_4]))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_18 ^= ((/* implicit */int) arr_10 [(unsigned char)8]);
                            var_19 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_4 [i_8] [3U]))))));
                            var_20 *= ((/* implicit */unsigned int) (signed char)-106);
                            arr_29 [i_7] = (!(((arr_2 [i_4]) || (arr_2 [i_4]))));
                        }
                        for (int i_9 = 2; i_9 < 7; i_9 += 2) 
                        {
                            arr_33 [i_4] [i_5] [(unsigned short)8] [(_Bool)1] [i_9] = ((/* implicit */unsigned short) (((+(arr_20 [i_7] [i_5]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4]))))) == (((/* implicit */int) var_4))))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (_Bool)0))));
                            arr_34 [i_4] [i_5] [i_6] [i_7] [i_9] [(unsigned short)7] = ((unsigned long long int) (!(arr_7 [i_4] [(unsigned short)9] [i_9 + 2])));
                            arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_9 - 2] [i_6] [i_4])))))));
                        }
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_39 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_4] [(_Bool)1])) ? (min(((((_Bool)0) ? (536870912U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))), (((((/* implicit */_Bool) (short)11859)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10]))) : (3758096383U))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)19677)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_38 [i_4] [(_Bool)1] [i_4] [i_4] [i_4] [i_4])))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)19672), (((/* implicit */unsigned short) var_10)))))))) * (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_4] [i_4] [i_5] [i_7] [i_10] [i_7]))))) * (2480062011U))))))));
                            arr_40 [i_10] [(unsigned short)1] [i_6] [i_5] [i_4] [(unsigned short)9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_10] [i_10] [i_6] [i_6] [i_5] [i_4]))))) ? (((arr_20 [i_4] [i_4]) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_14 [i_6] [i_5])) & (7883499264777802623LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)64180))))));
                        }
                        arr_41 [i_4] [i_4] [i_4] [2U] = ((/* implicit */_Bool) min((((((unsigned long long int) arr_2 [i_6])) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_30 [i_4] [i_5] [i_5] [i_7] [(_Bool)1] [(short)3]))))))), (((((/* implicit */unsigned long long int) var_0)) / (arr_20 [i_7] [i_5])))));
                        arr_42 [i_7] [i_7] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */short) arr_12 [i_5]);
                    }
                } 
            } 
            arr_43 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) ((1111915951U) * (1814905277U))))) / ((-(arr_27 [i_5] [(unsigned char)0] [i_5] [(_Bool)1] [i_4])))));
        }
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        arr_46 [i_11] = ((((/* implicit */_Bool) ((int) arr_44 [i_11] [i_11]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_11] [i_11])) ? (((/* implicit */int) arr_44 [i_11] [i_11])) : (((/* implicit */int) arr_44 [i_11] [i_11]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) + (8609575169837331953ULL))));
        arr_47 [i_11] [i_11] = ((/* implicit */int) arr_44 [i_11] [i_11]);
    }
}
