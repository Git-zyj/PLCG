/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14859
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) -854209499)), (11008245885003584599ULL)));
        var_12 += ((/* implicit */long long int) ((unsigned short) ((int) arr_3 [0U])));
        arr_4 [(_Bool)1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) (unsigned short)1041);
            var_14 = ((/* implicit */unsigned int) ((unsigned short) var_5));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_10))))) | (239789131U)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11008245885003584599ULL)) ? (7438498188705967018ULL) : (((/* implicit */unsigned long long int) -8602482329876032629LL))));
            var_17 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))));
            var_18 = ((/* implicit */unsigned int) ((long long int) ((arr_1 [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_9))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)6)) ^ (((/* implicit */int) (_Bool)1))));
                arr_14 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) + (var_5))) | (((/* implicit */int) var_1))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
                {
                    arr_21 [i_1] [i_1] = ((/* implicit */int) arr_16 [(unsigned short)0]);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6])))) + (2147483647))) >> (((/* implicit */int) var_10))));
                        var_21 = 616976214U;
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8] [i_6 - 1] [i_6 - 1])) ? (12031480928673336774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_23 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (656237202) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_1])))));
                    }
                }
                for (int i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) var_6);
                    var_25 = ((/* implicit */unsigned long long int) var_3);
                }
                for (int i_10 = 1; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    var_26 = (!(((/* implicit */_Bool) arr_15 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                    arr_32 [i_10] [i_5] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((unsigned int) arr_30 [i_3] [i_5])) < (((/* implicit */unsigned int) ((var_10) ? (var_5) : (((/* implicit */int) (unsigned char)202)))))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) var_8))));
                }
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_1] [i_3]) : (arr_6 [(unsigned char)14] [i_3])));
            }
            for (int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                var_29 = ((/* implicit */int) ((arr_29 [i_1] [i_3] [i_3] [i_11] [i_1] [i_11]) >= (365997750)));
                arr_37 [i_1] [i_3] [i_11] = ((/* implicit */short) arr_17 [i_1] [i_3] [i_11] [i_11]);
                var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((((/* implicit */_Bool) 768620525U)) ? (((/* implicit */long long int) 1690201341U)) : (-7678762848197651435LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                var_31 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1] [i_12]))));
            var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_12])) ? (16310782163750380788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_12] [i_12] [i_12] [i_1] [i_12] [i_12] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [(short)6] [i_12] [i_1] [(short)6]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_10 [i_12])))));
        }
        arr_41 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_1] [i_1]));
        var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) 2793432034U)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) (short)6051)) - (6049)))));
        var_35 = ((/* implicit */unsigned short) ((unsigned int) 11630840769115541256ULL));
        arr_42 [i_1] = ((/* implicit */unsigned char) (+(var_7)));
    }
    var_36 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned long long int) var_9))));
}
