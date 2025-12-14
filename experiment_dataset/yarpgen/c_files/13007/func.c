/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13007
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 3188706168391414275ULL))));
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_12)))))) : (((-8881588193447830543LL) / (((/* implicit */long long int) var_6)))))) * (((/* implicit */long long int) var_7))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8881588193447830545LL)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned short)35531))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) (short)-16285))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16280))) + (var_18))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) ((unsigned short) var_12))) ? (max((var_18), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0 + 2])))))));
        var_22 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)152))))) : (arr_3 [i_1 - 2])));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1])) / (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_2 - 1] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) ((2804970636U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-5100)))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                arr_16 [i_2] [7LL] = ((/* implicit */unsigned char) (unsigned short)18423);
                var_24 = ((/* implicit */long long int) min((var_24), (var_15)));
            }
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2 + 1])) / (((/* implicit */int) arr_1 [i_2 - 1]))));
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) arr_3 [i_2 + 1]);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8; i_6 += 3) 
            {
                for (int i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */int) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) (short)16263)))));
                        arr_23 [i_2 + 1] [i_2 - 2] [i_2 + 1] = ((arr_22 [i_7] [i_7] [i_6 - 2] [i_2 - 2]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)152))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_28 [i_2 - 2] = arr_10 [i_5] [i_8];
                            arr_29 [(signed char)8] [i_5] [i_6 - 2] [i_7 - 1] [i_8] [(signed char)6] = ((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */int) (unsigned short)47113)) : (((/* implicit */int) arr_19 [8] [i_6 - 1] [i_6 - 2])));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) > (((/* implicit */int) (!((_Bool)0))))));
                            arr_33 [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) arr_32 [i_9]));
                        }
                        var_29 = ((/* implicit */unsigned long long int) (unsigned short)11992);
                    }
                } 
            } 
            arr_34 [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8881588193447830542LL)) ? (-1916016085) : (arr_24 [i_5] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1])));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_2 - 2] [i_2] [i_2])) ? (var_7) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)32378))))));
            var_31 = ((/* implicit */short) (+(1573695237U)));
        }
        for (short i_10 = 4; i_10 < 9; i_10 += 3) 
        {
            var_32 += ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) > (((/* implicit */int) ((unsigned short) var_13)))));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_42 [i_11] [i_10] [i_2 - 1] = ((/* implicit */unsigned int) var_7);
                arr_43 [i_2 + 1] = ((/* implicit */unsigned char) -1916016085);
            }
            for (unsigned int i_12 = 2; i_12 < 9; i_12 += 1) 
            {
                arr_48 [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)7)) ? (var_10) : (((/* implicit */int) arr_15 [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10 - 2]))));
                var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)33158))));
                arr_49 [i_2 - 2] [i_10] [i_12 - 1] = arr_10 [i_2 - 2] [8LL];
                var_34 = ((/* implicit */unsigned int) ((var_16) ? (3519730562385282078ULL) : (((/* implicit */unsigned long long int) arr_22 [i_2 - 1] [i_10] [i_12 - 1] [9]))));
            }
            var_35 = ((/* implicit */unsigned long long int) arr_24 [i_2 - 1] [i_10] [i_2] [i_10 - 4] [i_2 + 1] [i_2] [i_10 + 1]);
            arr_50 [i_10] [(unsigned char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1095)) && (((/* implicit */_Bool) 7472408541783985228LL))));
        }
        for (unsigned short i_13 = 4; i_13 < 8; i_13 += 1) 
        {
            arr_53 [0ULL] [(signed char)4] [i_13 - 4] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [3ULL] [i_13 - 2]))));
            arr_54 [i_13 + 1] = ((/* implicit */int) arr_18 [i_13 - 3] [(unsigned short)5] [i_2 + 1]);
        }
    }
    var_36 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_17)))) ? (((/* implicit */int) (unsigned short)36385)) : (((/* implicit */int) ((unsigned char) var_18)))))));
    var_37 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_13))))));
}
