/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113552
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
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_10 [0ULL] [i_1] [(unsigned short)17] [(signed char)18] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((var_6), (((/* implicit */unsigned int) arr_7 [i_0] [i_2] [(unsigned char)20] [(_Bool)1]))))))));
                        var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (short)-16))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_1] [i_0]))) : (16296871728357775481ULL)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)92))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)216))))) ? (((((/* implicit */_Bool) arr_14 [17] [i_4] [17])) ? (16296871728357775481ULL) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) var_12)) : (var_10))))))) ? ((~((~(((/* implicit */int) arr_3 [i_5] [15ULL] [(unsigned char)22])))))) : ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_5] [6ULL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (unsigned char)232))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_21 [i_0] [(_Bool)1] [5] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (arr_22 [i_9 - 2] [i_8] [(signed char)18] [i_0])))))))) ? (((/* implicit */int) ((signed char) (unsigned char)242))) : ((((-(((/* implicit */int) (signed char)-79)))) / ((-(((/* implicit */int) var_5))))))));
                        arr_25 [(short)9] [(short)9] [i_0] [i_9] = ((/* implicit */int) arr_14 [i_0] [i_0] [i_7]);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (max((((/* implicit */long long int) ((3946112473U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76)))))), (arr_14 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (short)16)))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -4389209482240184135LL)) ? (0U) : (((/* implicit */unsigned int) -32))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_29 [i_10] = ((/* implicit */unsigned long long int) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
        arr_30 [i_10] = ((/* implicit */long long int) var_2);
        var_20 = ((/* implicit */long long int) (-(arr_21 [i_10] [i_10] [i_10] [i_10])));
    }
}
