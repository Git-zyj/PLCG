/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173057
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) (unsigned char)158);
                var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) (~(-1884040468)))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((-((~(((/* implicit */int) arr_2 [4U] [(unsigned char)14]))))))))));
                arr_4 [i_0] = ((/* implicit */_Bool) (-(((-1884040468) + (((((/* implicit */int) arr_1 [i_0])) + (1884040445)))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : ((~(-6688739651452074582LL)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_7 [14] = ((/* implicit */long long int) var_5);
        var_14 = ((/* implicit */long long int) ((signed char) var_9));
    }
    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_1 [i_3 + 1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_18 [i_3] [i_3] [(unsigned short)9] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_3 - 2]))));
                        var_16 = ((/* implicit */unsigned short) -1884040441);
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_22 [i_4] [6ULL] [i_6] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned short)0)))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1884040445))));
                        }
                        var_18 = ((/* implicit */unsigned int) ((arr_21 [i_3 - 3]) ? (arr_13 [i_3 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3 - 2])))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)150)) : (arr_10 [2LL]))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) (unsigned char)13)))));
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max(((unsigned char)13), ((unsigned char)7))))));
                        var_22 = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) var_9)) || ((_Bool)1))) ? (((/* implicit */int) ((unsigned short) (signed char)-62))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_17 [i_3 - 3] [i_9] [i_9] [i_3 - 3])))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            arr_38 [i_3] [i_8] [i_11] = ((/* implicit */unsigned int) arr_31 [i_3]);
                            var_24 ^= (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)211))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                for (int i_15 = 2; i_15 < 10; i_15 += 4) 
                {
                    {
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65032)) / (((/* implicit */int) ((_Bool) ((int) var_9))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (min(((!(((/* implicit */_Bool) arr_25 [i_15])))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_16 = 3; i_16 < 11; i_16 += 3) /* same iter space */
    {
        arr_49 [i_16] [i_16 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (1073741823LL)))) - (((int) (!(((/* implicit */_Bool) arr_36 [i_16] [i_16] [i_16] [i_16] [i_16])))))));
        var_27 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_26 [(signed char)0] [i_16 + 1])) : (((/* implicit */int) (signed char)-89))))) - (min((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), (var_9)))));
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
        arr_50 [i_16] = ((/* implicit */short) (((((+(((/* implicit */int) arr_2 [i_16] [(unsigned short)1])))) != (((/* implicit */int) ((((/* implicit */_Bool) 2042934838)) || (((/* implicit */_Bool) (unsigned short)10572))))))) ? (var_0) : (((/* implicit */int) (unsigned char)248))));
    }
    var_29 = ((/* implicit */signed char) (-((+((+(-1599678363)))))));
    /* LoopNest 2 */
    for (long long int i_17 = 0; i_17 < 13; i_17 += 4) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            {
                var_30 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_17] [i_17]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    var_31 ^= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_17] [i_17])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_6 [i_17])))));
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (unsigned char)128)))));
                                var_33 += ((/* implicit */long long int) ((unsigned long long int) arr_51 [i_17] [i_17]));
                                var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_21])) ? (((/* implicit */int) arr_58 [i_17])) : (var_7)));
                                arr_65 [i_18] [i_18] [i_19] [i_19] [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_18] [i_18] [i_18] [i_18] [(_Bool)1])) - ((-(((/* implicit */int) arr_61 [(unsigned short)0] [i_18] [(signed char)10] [i_20] [i_21]))))));
                            }
                        } 
                    } 
                    arr_66 [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                }
            }
        } 
    } 
}
