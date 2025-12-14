/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148658
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
    var_18 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) var_0);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1 - 1]))) * (var_4)));
                        arr_14 [i_0] [12LL] [i_1] [5LL] [i_2] = ((/* implicit */unsigned long long int) ((arr_7 [i_1]) ^ (arr_7 [i_1])));
                        arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((-393158344625603462LL) != (((/* implicit */long long int) (-(2791551854U))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_18 [i_4] [i_4] [i_0] = ((/* implicit */signed char) arr_13 [i_4]);
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [3LL] [i_0] [(unsigned char)17])) + (((/* implicit */int) var_1))))) + (2791551854U)));
        }
        arr_20 [i_0] = ((/* implicit */unsigned char) var_15);
        arr_21 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_17 [i_0] [i_0])));
    }
    for (unsigned short i_5 = 2; i_5 < 23; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */_Bool) var_12);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */signed char) var_16)), (arr_22 [i_5])))), (var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [7U])) * (((/* implicit */int) arr_23 [i_5 - 1] [i_5]))))) ? (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_5 - 1] [i_5])) / (((/* implicit */int) arr_22 [i_5 + 1]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_22 [i_5 + 1])), ((+(var_12))))))));
        var_22 = ((/* implicit */unsigned long long int) arr_22 [i_5 + 1]);
        arr_25 [i_5] = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) arr_23 [i_5] [i_5 + 1]))))))));
        arr_26 [i_5 + 1] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)231)))))))) : (((/* implicit */int) max((arr_22 [i_5 + 1]), (arr_22 [i_5 + 1]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (unsigned short i_8 = 2; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_36 [i_6] [i_6] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(-3497845124711876435LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-21062))))) : (max((((/* implicit */unsigned long long int) var_5)), (arr_33 [i_6] [i_6] [i_8 + 1])))));
                    arr_37 [i_6] [i_8 + 1] [i_8] = ((/* implicit */unsigned short) arr_27 [i_6]);
                    arr_38 [i_6] [i_6] [i_7] [(signed char)2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)13003)), ((unsigned short)24847)));
                    var_23 = ((min((1503415442U), (arr_35 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_7]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((1503415442U), (((/* implicit */unsigned int) (_Bool)1))))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_32 [i_6] [i_6]), (arr_32 [i_6] [i_6])))), ((((_Bool)0) ? (2791551839U) : (2791551869U)))));
        arr_39 [i_6] = ((/* implicit */_Bool) ((var_16) ? (1503415441U) : (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6]))) * (arr_35 [16LL] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned int) arr_22 [i_6]))))));
    }
    var_25 = ((/* implicit */unsigned char) var_15);
}
