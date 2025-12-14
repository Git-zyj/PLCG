/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117535
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (unsigned short)9089);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((720554213U), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) >> (((-552049140) + (552049147))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_19 [(unsigned char)1] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */int) (~(max((((var_5) ? (arr_16 [i_4] [i_2] [9] [i_2 + 1] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [(unsigned char)7] [i_3] [i_4] [i_2] [12])) ? (((/* implicit */int) arr_8 [i_0] [i_2] [(short)10])) : (((/* implicit */int) arr_8 [i_4 - 1] [i_3] [i_1])))))))));
                                var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (5558691201809081293LL) : (312525877482097564LL))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)))) || (((/* implicit */_Bool) max((2150291759U), (((/* implicit */unsigned int) var_7)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) (_Bool)1)));
                            var_18 = ((long long int) arr_29 [i_5] [i_8] [i_5] [i_5]);
                            var_19 = ((/* implicit */unsigned short) (~(((var_14) + (var_6)))));
                        }
                    } 
                } 
                arr_32 [i_6] [i_6] [i_6] [(short)13] = ((/* implicit */short) (+(-5558691201809081294LL)));
            }
            var_20 = ((/* implicit */long long int) arr_30 [(unsigned char)8] [(unsigned char)8]);
            var_21 = (-(var_0));
            arr_33 [i_6] [i_5] = ((/* implicit */signed char) var_14);
            /* LoopNest 2 */
            for (short i_10 = 1; i_10 < 13; i_10 += 1) 
            {
                for (long long int i_11 = 2; i_11 < 13; i_11 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned int) var_10));
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11 + 1] [i_5] [i_5] [i_5])))))));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))))));
        var_25 &= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_20 [i_5]))))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                for (unsigned short i_15 = 2; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_26 = ((/* implicit */signed char) arr_29 [i_15 - 2] [i_13] [i_15 - 2] [i_15 - 1]);
                        var_27 = ((/* implicit */int) min((var_27), ((-(((/* implicit */int) arr_37 [i_13] [i_14] [i_13]))))));
                        arr_50 [i_12] [i_13] [i_14] [i_15 + 1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)9115))))));
                        arr_51 [(short)14] [i_14] [8LL] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) arr_28 [i_15 + 1] [i_15] [i_15 - 2] [i_15] [i_15]))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_12] [i_12] [i_12])) >> ((((+(arr_36 [i_12] [i_12] [i_12] [12LL]))) - (3944639818577294742LL)))));
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 15; i_16 += 3) 
        {
            for (signed char i_17 = 1; i_17 < 12; i_17 += 3) 
            {
                for (short i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    {
                        var_29 |= (+(var_13));
                        arr_62 [i_18] [i_17] [i_16] [i_12] [i_12] = ((/* implicit */unsigned char) ((unsigned int) var_13));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) ((((var_6) + (((int) (short)21154)))) + (((/* implicit */int) (short)9127))));
    var_31 = ((/* implicit */short) (+(var_10)));
    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) + ((+(min((((/* implicit */long long int) var_2)), (var_10))))))))));
}
