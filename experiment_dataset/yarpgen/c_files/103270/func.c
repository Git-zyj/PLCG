/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103270
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
    var_19 = ((/* implicit */signed char) (+(((((((/* implicit */int) var_6)) < (((/* implicit */int) (signed char)75)))) ? (var_11) : (((/* implicit */unsigned long long int) var_18))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) var_15);
                    var_20 = ((/* implicit */unsigned short) var_14);
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [(unsigned short)12] [i_3])) / (((/* implicit */int) arr_0 [i_0] [(short)11]))))), (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-67), ((signed char)75)))))));
                        var_22 &= ((/* implicit */_Bool) (((_Bool)1) ? (2040438087U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-78)) / (((/* implicit */int) var_15))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                        var_24 = ((/* implicit */signed char) var_9);
                    }
                    for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) ((min(((-2147483647 - 1)), (((((/* implicit */int) (signed char)-85)) / (((/* implicit */int) (signed char)-1)))))) != (((/* implicit */int) (signed char)72))));
                        var_26 *= ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]))) & (((((/* implicit */long long int) var_1)) & (var_18)))))));
                        var_27 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]))))));
                        var_28 = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-68)), ((~(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)85)))))))));
                    }
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2] [17U] [i_0] [12] [i_0] [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (arr_5 [14U] [14U] [(unsigned char)0])))))) == (((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])) | (-4801254951030638112LL))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (unsigned char)124)) : (((((/* implicit */int) (unsigned short)3)) & (((/* implicit */int) (signed char)93)))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (long long int i_8 = 4; i_8 < 15; i_8 += 2) 
                {
                    {
                        arr_27 [i_7] [i_7] = ((/* implicit */short) (+((~(9223372036854775797LL)))));
                        var_31 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) | (var_4)))))));
                        var_32 = (+((~((~(((/* implicit */int) (signed char)-109)))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))) | (((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (unsigned short)57818)) : (((/* implicit */int) (short)32767))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
    {
        var_34 |= ((/* implicit */signed char) (-(((/* implicit */int) ((511U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
        arr_31 [i_9] = ((/* implicit */unsigned char) (short)-26);
        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) / ((-(((/* implicit */int) (short)-26))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) (~((-(var_16)))));
                    var_37 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_10)))));
                }
            } 
        } 
        arr_36 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_9 + 2] [i_9 - 2])) ? (var_14) : (var_14)))) | (var_8)));
    }
}
