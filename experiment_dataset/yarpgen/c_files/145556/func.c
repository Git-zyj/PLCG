/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145556
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)62672)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_15 = arr_1 [i_0];
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_0] [i_2] [i_3] = arr_3 [(_Bool)1] [i_1] [i_0];
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (short)3658);
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_2 - 1] [i_3])) << (((((/* implicit */int) var_9)) - (22666))))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_3])) ? (((/* implicit */int) arr_9 [i_3] [(unsigned short)12] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_15 [i_4]), (arr_15 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))) : (23ULL)));
        arr_17 [i_4 - 1] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 5818805874918930241ULL)) ? ((-(((/* implicit */int) arr_0 [i_4])))) : (min((((/* implicit */int) (unsigned short)72)), (2118608263))))), (((/* implicit */int) var_0))));
        arr_18 [i_4] = ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_4 + 1]))) ? (((((/* implicit */_Bool) 3689743734651359959ULL)) ? (((/* implicit */int) (short)-5293)) : (((/* implicit */int) (unsigned short)65490)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_4])), (arr_5 [i_4 - 1])))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_17 = ((/* implicit */long long int) var_12);
            var_18 -= max((min((((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1] [(unsigned short)2])), (((((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (short)-2709)) : (((/* implicit */int) (short)-2683)))))), ((+(((/* implicit */int) var_1)))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((int) arr_21 [i_6] [i_6])) & (((/* implicit */int) arr_0 [i_4]))))) == (((long long int) var_13))));
                            arr_32 [i_7] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 3])) ? (arr_27 [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 3] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8] [(unsigned short)2] [i_8 + 3] [i_8 - 1] [i_8 + 2])))))) ? (max(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1])))) : (((max((var_4), (((/* implicit */int) var_12)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4])) && (((/* implicit */_Bool) 16176055953122454271ULL)))))))));
                        }
                    } 
                } 
            } 
        }
        arr_33 [i_4] [i_4] = ((/* implicit */signed char) 2019219768);
    }
    for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 2) 
        {
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
            {
                for (unsigned short i_12 = 3; i_12 < 13; i_12 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) ((unsigned long long int) var_8));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_26 [10] [i_11] [i_10] [10]))));
                        arr_43 [i_12] [i_12] = ((/* implicit */unsigned long long int) (+(max(((+(5848991670923358164LL))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-2722)))))))));
                        var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_9 - 1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    {
                        var_22 |= ((/* implicit */short) ((((/* implicit */int) max((arr_28 [i_9] [i_13] [i_14] [i_15] [i_13] [i_15]), ((short)-3659)))) ^ (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_37 [i_15])) ? (((/* implicit */int) arr_29 [i_9 + 1] [i_15] [(unsigned short)2] [i_15])) : (((/* implicit */int) var_5))))))));
                        var_23 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        } 
        arr_52 [i_9 + 1] = ((/* implicit */unsigned long long int) var_13);
        var_24 += ((/* implicit */_Bool) 7324313175142053843LL);
    }
}
