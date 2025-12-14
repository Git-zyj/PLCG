/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144024
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            arr_5 [(unsigned short)5] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)149)) > ((+(max((((/* implicit */int) (signed char)125)), (arr_2 [(unsigned short)10])))))));
            var_19 = max((((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)61))))))), (max(((+(arr_0 [4LL]))), (((/* implicit */long long int) -496196691)))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) arr_3 [i_0] [(unsigned char)11] [i_0])))) : (((/* implicit */int) ((arr_8 [i_1]) != (arr_2 [i_3])))))) <= (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0]))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), ((unsigned short)12468)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((unsigned short) max((var_10), (((/* implicit */unsigned short) ((2993084125540677842ULL) < (arr_11 [3LL] [i_5 - 1])))))))));
                        arr_17 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_1 [4ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24139))) : (max((var_17), (((/* implicit */unsigned long long int) (unsigned short)53974)))))), (((/* implicit */unsigned long long int) (+(arr_8 [i_0]))))));
                        var_23 = (-(min((((/* implicit */unsigned long long int) max((arr_3 [2LL] [i_0] [i_4]), (arr_16 [i_4] [i_5] [i_4] [i_1] [i_0])))), (min((2026561697390318420ULL), (16102288386735904612ULL))))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
        {
            arr_20 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-((+(3504015712U)))))) != (((unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_6] [11])) / (((/* implicit */int) var_9)))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) arr_12 [i_0]);
                        arr_26 [i_8] [i_6] [i_7] [i_7] |= ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_18)))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned char)118)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) <= (((/* implicit */unsigned int) var_6)))))) : (((unsigned long long int) (~(-2786686297129323315LL))))));
                        arr_27 [i_0] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_0))))));
                        var_25 = ((/* implicit */unsigned short) ((signed char) arr_6 [i_0] [i_6] [i_7]));
                        arr_28 [i_0] [i_0] [7ULL] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)65535)), (2363571744222726091LL)));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4144085502U))))))))));
        }
        for (signed char i_9 = 3; i_9 < 11; i_9 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? ((+(arr_14 [(unsigned short)0] [i_9] [i_9 - 2] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_9])), ((unsigned short)1695)))))))) ? (9122057341878613699ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_29 [i_9] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)18789)))), ((~(((/* implicit */int) arr_30 [i_9 + 2])))))))))));
            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)33324))));
        }
        arr_33 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((arr_14 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (-5816368596620124988LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) max((-7253055886308859074LL), (arr_24 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_29 = ((/* implicit */unsigned short) ((var_5) >> ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    var_30 = ((/* implicit */unsigned short) (+((((+(var_17))) & ((-(3313954436476932238ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_10 = 4; i_10 < 22; i_10 += 4) 
    {
        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        {
                            arr_42 [i_11] = ((/* implicit */unsigned short) 2858645073288573661LL);
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)25929)), (var_3)))) ? (arr_41 [i_10] [i_11] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? ((+(((/* implicit */int) (unsigned short)60575)))) : (((/* implicit */int) var_9)))))));
                            arr_43 [i_10] [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_10] [3LL] [17] [i_11] [i_12])) ? (arr_41 [i_10] [i_12] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) (+(var_3)))) : (((((/* implicit */_Bool) (unsigned short)41396)) ? (var_17) : (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_40 [i_10] [i_11] [i_12] [i_11] [i_13])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10873))) != (var_16)))))))));
                            var_32 = ((/* implicit */signed char) (!(((((/* implicit */int) min((arr_36 [i_11] [20ULL] [i_12]), (((/* implicit */unsigned short) var_7))))) > (((/* implicit */int) arr_40 [i_13] [i_11] [i_11] [i_11] [i_10]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 22; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        {
                            arr_49 [i_10 - 4] [i_10] [(unsigned short)13] [i_11] = arr_45 [i_11];
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_38 [i_11])) ? (var_13) : (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_45 [i_11]))))))) ? (((/* implicit */int) ((signed char) var_14))) : ((-((+(((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41396))) : (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (var_14))))))))));
}
