/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117775
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 3] [(_Bool)1]))));
        var_17 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_0 + 3] [(short)8])) ? (arr_1 [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3] [8ULL]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)7)))))));
        var_18 |= 13369137956342063936ULL;
    }
    for (int i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_19 += ((/* implicit */short) (+(max((((/* implicit */int) ((short) arr_0 [i_1] [0ULL]))), ((~(((/* implicit */int) (_Bool)0))))))));
        var_20 = ((/* implicit */int) (~((+((+(arr_2 [i_1])))))));
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1 + 2] [6ULL])) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (((/* implicit */long long int) arr_0 [i_1] [(unsigned char)8]))))) ? (((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) 2000997002U)) : (17296481966932529683ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(unsigned char)4]))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (max((14558291010879364915ULL), (((/* implicit */unsigned long long int) arr_3 [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (6108036254009764959ULL)));
                var_23 |= 35184372088831ULL;
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) 1971063153)) ? (5077606117367487679ULL) : (((/* implicit */unsigned long long int) var_12)))), (((((/* implicit */_Bool) var_8)) ? (1150262106777021933ULL) : (((/* implicit */unsigned long long int) arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1] [i_1])))))) / (max((((/* implicit */unsigned long long int) var_15)), (max((var_10), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 1]))))))));
                            arr_16 [i_3] [i_3] [i_3 - 2] [i_4 + 2] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)0)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (536870911ULL) : (((/* implicit */unsigned long long int) 8363844439449568943LL))))))));
                            var_24 -= ((max((((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [i_2] [i_3] [i_4 + 1] [i_4 - 1] [i_1] [i_4])), (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8363844439449568943LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) 536870923ULL))))))));
                            var_26 = ((/* implicit */short) max((((long long int) arr_17 [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 2])), ((-(arr_18 [i_3 - 3] [i_3 - 2] [i_3 - 1] [i_3 - 3])))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_20 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))));
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_1] [i_2])) ? (arr_2 [i_2]) : (max((14558291010879364915ULL), (((/* implicit */unsigned long long int) arr_25 [i_1] [i_8 + 1] [i_1 + 3]))))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) var_3)) : (6566781807804091130ULL)))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0)))))) ? (max((((/* implicit */long long int) var_1)), (arr_1 [i_1 + 2]))) : (((long long int) var_8))));
            }
            for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((int) max(((-(arr_29 [i_1] [i_1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2])) ? (arr_3 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 3]))))))))))));
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((var_14), (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) (short)-15603)) ? (((/* implicit */unsigned long long int) arr_32 [i_1 - 1] [i_2] [i_1] [i_10])) : (var_14))))))));
                        }
                    } 
                } 
                arr_33 [i_1] [i_1 + 3] [i_1 + 3] [i_2] |= ((/* implicit */unsigned short) ((unsigned long long int) max((((((/* implicit */_Bool) (short)27035)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10))), (max((var_8), (((/* implicit */unsigned long long int) arr_30 [i_2] [i_2] [i_2] [i_2])))))));
            }
            arr_34 [i_1] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? ((~(arr_3 [i_1]))) : (max((((/* implicit */long long int) arr_31 [i_1] [i_2] [i_2] [i_1] [i_1 - 1] [i_1])), (arr_3 [i_1 - 1])))));
        }
        var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_1 + 3] [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_18 [i_1] [i_1 + 1] [i_1] [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 3])))))) + (((((/* implicit */_Bool) arr_25 [i_1] [i_1 - 1] [i_1 + 2])) ? (arr_27 [i_1 + 3] [i_1 + 2] [4LL] [i_1 + 3]) : (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1 - 1] [i_1]))))));
    }
    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) var_0))));
    var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_7))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12338707819699786656ULL)) ? (12363712761060281275ULL) : (6566781807804091140ULL))))))));
}
