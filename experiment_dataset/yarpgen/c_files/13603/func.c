/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13603
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (var_7)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 19; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_12))));
                    arr_13 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2 - 1] [i_4 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_4 - 1])))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_11 [i_2] [i_4]), (((/* implicit */long long int) arr_6 [i_2 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((-1822849554), (1822849553))))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_10)))))));
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((~(((((/* implicit */int) arr_10 [i_4] [i_4])) >> (((var_7) - (4139802485U))))))) > (((((/* implicit */_Bool) var_12)) ? (((int) (short)28672)) : (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) var_9))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_2] [i_2])))) ? (((/* implicit */unsigned int) var_5)) : (min((((/* implicit */unsigned int) ((arr_7 [i_2]) / (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_12)) : (var_6)))))));
        arr_15 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2]))) & (arr_7 [i_2])));
    }
    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned char) max((((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (arr_11 [i_5] [i_5]) : (((/* implicit */long long int) arr_9 [i_5] [i_5])))), (((/* implicit */long long int) arr_12 [i_5] [i_5] [i_5])))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((var_1) ? (var_3) : (((/* implicit */unsigned long long int) var_6))))))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) max(((~(((unsigned int) var_6)))), (((/* implicit */unsigned int) (-((~(var_8))))))));
            var_21 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_3 [i_5 + 1])))), (((/* implicit */int) arr_0 [i_6]))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5] [(unsigned char)10] [i_6])) ^ (arr_7 [i_5]))))))) ? (max((((unsigned int) -460662711)), (((/* implicit */unsigned int) max((var_9), ((unsigned char)112)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) ((_Bool) arr_6 [16]))) : (((int) var_3)))))));
            var_23 ^= min(((-(((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (var_3) : (var_3))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((((/* implicit */int) arr_12 [(unsigned char)4] [6LL] [(unsigned char)4])) * (((/* implicit */int) min(((short)32759), (((/* implicit */short) (unsigned char)25))))))))))));
            arr_22 [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_5 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28673)) ? (2115029082) : (1822849541)))))), (((/* implicit */unsigned long long int) ((var_7) % (((var_6) - (((/* implicit */unsigned int) 1822849549)))))))));
        }
        var_25 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) max(((unsigned short)48674), (((/* implicit */unsigned short) (short)-23416))))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5] [i_5])))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 4) /* same iter space */
    {
        arr_26 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_8 + 2])) ? (((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28432)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)31))))) : (var_3)));
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 8; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 4) 
                {
                    {
                        arr_35 [i_9] = ((/* implicit */unsigned char) (-(3106075299U)));
                        var_27 = ((var_1) ? (arr_33 [i_8 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (arr_33 [i_8 + 1] [i_9 - 1] [i_9 - 1] [i_9]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        {
                            arr_43 [i_8] [i_9] [i_12] [i_13] [(short)0] [i_14] = ((/* implicit */unsigned char) arr_9 [i_8 - 1] [i_9 - 1]);
                            arr_44 [i_8] [i_8] [i_9] [i_9] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_9] [i_8 + 3]) : (((/* implicit */long long int) var_5))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_8 + 3] [i_12 + 2])) ? (((/* implicit */int) arr_10 [i_9 + 1] [i_14])) : ((+(((/* implicit */int) (short)0))))));
                            var_29 -= ((/* implicit */long long int) arr_40 [i_8] [i_8] [i_8] [i_8]);
                        }
                    } 
                } 
            } 
            arr_45 [i_8 + 3] [i_9] [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_9 [i_8] [i_9])) ? (var_8) : (((/* implicit */int) var_10))))));
            var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_4 [i_8] [i_8] [i_8]))))));
        }
        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_39 [i_8] [i_8 - 1] [i_8] [i_8 + 2]))));
    }
    var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) : (min((var_6), (((/* implicit */unsigned int) var_9))))))) ? ((+(((((/* implicit */int) var_10)) - (var_5))))) : ((-(((/* implicit */int) var_10)))));
}
