/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11894
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [(unsigned char)4])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [17] = ((/* implicit */signed char) (-(max((max((9708609203889414816ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) max((var_7), (var_0))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((var_4), (((/* implicit */unsigned int) var_2)))) : (min((var_4), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)65529), (((/* implicit */unsigned short) arr_0 [i_0]))))) >> (((/* implicit */int) var_3))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_10 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14384299209622430667ULL)))) ? (((/* implicit */int) (unsigned char)199)) : ((-(((/* implicit */int) (unsigned char)156))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_20 [i_2 + 1] [i_3] [i_2 + 1] [i_1] [i_1] [i_1] = ((/* implicit */short) min(((+(((/* implicit */int) arr_8 [i_1])))), ((+(((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_4 - 2]))))));
                        arr_21 [i_1] [i_2 + 1] [i_2] [(short)4] [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (+(max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31917)))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_25 [i_1] [i_2] [i_3] [i_4] [(_Bool)1] [i_4 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_3))) ? (var_4) : (((/* implicit */unsigned int) (-(var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_1))))));
                            arr_26 [i_1] [i_2] [i_3] [i_4 + 2] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (var_8)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_31 [i_6] [i_4 - 1] [i_3] [i_2 + 3] [i_1] = ((/* implicit */signed char) arr_12 [i_1]);
                            arr_32 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) arr_24 [i_2 + 3]))))))), (((unsigned int) arr_7 [i_2 + 3]))));
                            arr_33 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1]))) : (arr_17 [i_1] [i_1] [i_1] [i_1])))))) || (((/* implicit */_Bool) arr_30 [i_1] [i_2] [i_1] [i_4] [i_1]))));
                            arr_34 [i_6] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_3] [i_4 - 3] [i_4 - 3])) ? (((max((var_6), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_1] [i_2])) : (var_2)))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) var_9)))))));
                        }
                        arr_35 [i_1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1269820414U)) : (18446744073709551615ULL)));
                    }
                } 
            } 
        } 
        arr_36 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (-(var_2))))) ? (((unsigned long long int) arr_18 [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]))))) >> (((/* implicit */int) (unsigned short)19)))))));
        arr_37 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_5))))), ((-(max((((/* implicit */unsigned long long int) arr_14 [8U] [i_1] [i_1])), (arr_11 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 24; i_8 += 1) 
            {
                {
                    arr_44 [i_8] = (+((+(((/* implicit */int) arr_18 [i_8 + 1])))));
                    arr_45 [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_1]))))), (min((arr_28 [9ULL]), (arr_40 [i_1] [i_1])))))));
                    arr_46 [i_1] = var_7;
                    arr_47 [i_8] [i_8] [i_8] [i_8 + 1] = ((/* implicit */_Bool) (-(min((var_6), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65523)))))))));
                    arr_48 [4] [i_7] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))))))));
                }
            } 
        } 
    }
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_2)) : (var_4)))))));
}
