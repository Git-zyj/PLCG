/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17103
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = 478035216;
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), ((+(-478035205)))))) ? (-1182991363) : (((/* implicit */int) arr_0 [i_0]))));
        var_20 = ((/* implicit */int) var_10);
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_21 *= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_13) : (arr_4 [i_1])))) ? (((/* implicit */int) ((var_9) == (((/* implicit */int) arr_1 [i_1]))))) : (var_1))));
        arr_5 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */long long int) 1182991356))))) ? ((~(var_17))) : (((/* implicit */long long int) var_13)))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))) - (min((var_12), (((/* implicit */long long int) arr_4 [i_1]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-116)), (-478035206)))) != (6U)))) % (((/* implicit */int) (unsigned char)34))));
                    var_23 = ((/* implicit */long long int) var_5);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                    {
                        var_24 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (4838677662967633493ULL));
                        arr_26 [i_2] [i_5] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))) : (var_4))) * (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_18 [i_2] [i_2] [i_2])), (var_17))), (((var_10) + (((/* implicit */long long int) var_9)))))))));
                        var_25 = max(((~(((/* implicit */int) var_8)))), ((-(((/* implicit */int) arr_19 [i_2] [i_5] [i_6])))));
                    }
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) var_12);
                            var_27 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (min((var_15), (((/* implicit */unsigned long long int) var_7)))))) | (((/* implicit */unsigned long long int) ((int) 1182991333)))));
                        }
                        var_28 = ((/* implicit */long long int) (+(var_4)));
                        var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (718545894U)));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_30 -= ((/* implicit */long long int) ((var_6) + (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                        arr_34 [i_2] [i_2] [i_6] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_5] [i_2]))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) 134217728))));
                        var_32 = ((/* implicit */long long int) (signed char)14);
                    }
                    arr_35 [i_2] [i_5] [i_2] [i_2] |= ((/* implicit */_Bool) 718545894U);
                    arr_36 [i_2] [i_2] [i_6] = (-(2251662374731776ULL));
                    arr_37 [i_2] [i_2] [i_5] [i_6] |= ((/* implicit */long long int) ((((int) min((var_0), (var_0)))) <= (max((((/* implicit */int) arr_19 [(unsigned char)4] [(unsigned char)4] [i_6])), (max((((/* implicit */int) var_16)), (var_6)))))));
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-478035217), (var_9))))))), ((((!(((/* implicit */_Bool) arr_20 [i_2] [15] [i_2])))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((int) -1182991367)))))));
        var_34 -= ((/* implicit */unsigned short) ((277076930199552LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514)))));
    }
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) ((3576421401U) ^ (((/* implicit */unsigned int) 884583796))));
        var_36 = (-(((/* implicit */int) (unsigned short)36)));
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_37 = var_0;
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_7) & (((/* implicit */long long int) arr_16 [i_14] [i_12])))) >> ((((~(var_2))) + (5190251472188568604LL)))))) ? (((/* implicit */unsigned long long int) ((max((var_7), (((/* implicit */long long int) var_9)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65508))) | (var_4))) ^ (((/* implicit */unsigned long long int) ((int) 478035221))))))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -478035191)) ? (-3913053584166954387LL) : (18014398492704768LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_27 [i_12] [i_14] [i_14] [i_12])))) : (((/* implicit */int) ((_Bool) arr_48 [i_11] [i_12] [i_13] [i_14])))));
                        var_40 = ((/* implicit */short) arr_32 [(unsigned short)14] [(unsigned short)14] [i_13] [i_14] [i_11]);
                        var_41 = ((/* implicit */int) max((max((var_4), (((/* implicit */unsigned long long int) ((var_13) + (((/* implicit */int) arr_10 [16LL] [i_12]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (var_7)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 928052182U)) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_14] [i_13] [(short)13] [i_11]))))))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((unsigned short) var_10);
}
