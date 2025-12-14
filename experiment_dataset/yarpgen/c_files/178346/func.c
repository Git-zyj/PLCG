/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178346
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
    var_14 &= ((/* implicit */unsigned long long int) var_2);
    var_15 = ((/* implicit */unsigned int) max((((((unsigned long long int) var_0)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_7)))))))), ((_Bool)1)));
    var_16 ^= ((/* implicit */int) min((var_5), (((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_1)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) (((_Bool)1) ? (328941187U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) var_11);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [9U] [i_3])) << (((var_5) - (12555822050884726706ULL))))))));
                        var_19 = ((/* implicit */short) ((unsigned long long int) arr_2 [i_0 + 3] [i_0]));
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-1))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) & (246922203)));
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65529))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [3LL] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (420424324)));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)156)))))));
                        var_24 &= (_Bool)1;
                    }
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (4503324749463552ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)117))))))) : (min((10191270635912261707ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) > (arr_12 [i_5 - 1] [i_1] [i_2] [i_5 - 1] [i_0]))))))));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)218))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | ((-(((((/* implicit */_Bool) 4503324749463527ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_18 [i_0])))))));
                            var_29 = ((/* implicit */_Bool) ((unsigned long long int) (+((+(var_4))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_5 + 1] [i_5 + 1] [i_7 + 1] = ((/* implicit */signed char) ((8255473437797289907ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            var_30 = ((/* implicit */int) arr_2 [i_0 + 1] [i_0]);
                        }
                        arr_25 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((signed char) ((signed char) (_Bool)1)));
                        arr_26 [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32762)) ? (min((max((arr_5 [i_0] [(short)3]), (((/* implicit */unsigned int) (signed char)-1)))), (((/* implicit */unsigned int) var_9)))) : (((0U) << (((((unsigned int) (signed char)-8)) - (4294967261U)))))));
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0U)))))))));
                    }
                    arr_27 [i_0] [i_1] = ((/* implicit */int) 18446744073709551609ULL);
                    var_32 = ((/* implicit */signed char) ((unsigned char) ((short) max(((unsigned char)22), (((/* implicit */unsigned char) (signed char)-8))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
        {
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)15337))))))))));
            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((0U) / (((/* implicit */unsigned int) 2080374784)))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (_Bool)1))));
                        var_36 = ((/* implicit */short) 0U);
                        var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15255)) ? (((425593985U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)62378)));
                    }
                } 
            } 
        }
    }
}
