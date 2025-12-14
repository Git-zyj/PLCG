/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170314
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-62), (var_14)))) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (unsigned char)234))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2124917083U)), (max((var_3), (((/* implicit */long long int) (short)11062))))))) : (arr_7 [i_2] [i_2] [i_1] [i_0]));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-11050))));
                    arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_6 [i_0] [i_2] [i_2] [i_2 - 1]), ((unsigned char)43)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3]);
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_3] [i_3]), ((short)126)))) ? ((+(((/* implicit */int) (unsigned short)21618)))) : (((((/* implicit */int) (unsigned char)174)) << (((/* implicit */int) (unsigned char)13))))))) ? (((max((((/* implicit */int) var_12)), (var_5))) ^ (((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) var_15))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_29 [i_4] [i_5] [i_4] [i_7] [i_8] = ((/* implicit */_Bool) (unsigned short)65535);
                            arr_30 [i_8] [i_7] [i_6] [i_7] [i_4] = ((unsigned char) arr_18 [i_4 + 2] [i_6] [i_5 - 1]);
                            arr_31 [i_4] [i_7] [i_6] [i_5] [i_4] = ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)11071)));
                            arr_32 [i_8] [i_7] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((arr_16 [i_4 + 1] [i_5 + 2]) ? (arr_7 [i_4] [i_5] [i_4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5551)))));
                            arr_33 [i_4] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
            } 
            arr_34 [12ULL] [i_4] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (short)11053)) << (((/* implicit */int) (unsigned char)7))));
            arr_35 [i_4] [i_4] [i_5] = ((/* implicit */signed char) arr_1 [i_4 - 1]);
            arr_36 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)25)) < (((/* implicit */int) var_4))));
        }
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            arr_40 [i_4] [i_4] [i_4] = ((((((/* implicit */unsigned long long int) 127109349)) + (9065611733688993059ULL))) >> (((((((/* implicit */int) arr_11 [i_4])) << (((arr_37 [i_4] [i_9]) - (3257846093909127429ULL))))) - (118))));
            arr_41 [i_4] [i_9] = ((/* implicit */unsigned char) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4] [i_4 + 2] [i_4])))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        arr_46 [i_4] [i_9] [i_4] [i_11] = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_24 [i_4] [i_9])) > (arr_17 [i_4])))));
                        arr_47 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 268435455))));
                        arr_48 [i_4] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10] [i_11]))) | (arr_44 [i_11] [i_11] [i_10] [i_10] [i_9] [i_4])))));
                    }
                } 
            } 
            arr_49 [i_9] [(signed char)8] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_9] [i_4] [i_4 + 1])) && (((/* implicit */_Bool) var_13))));
        }
        arr_50 [i_4] = ((/* implicit */signed char) ((_Bool) arr_26 [i_4 - 2]));
        arr_51 [i_4] [i_4] = ((/* implicit */unsigned char) 268435455);
    }
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
}
