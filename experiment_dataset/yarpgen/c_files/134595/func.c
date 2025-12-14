/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134595
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) * (((/* implicit */int) (signed char)-34)))))));
                var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)33))))))) ? (min((arr_0 [i_1 + 2] [i_1 + 2]), (((/* implicit */long long int) (unsigned char)0)))) : (((((/* implicit */_Bool) var_2)) ? ((+(2074202359318517014LL))) : (-2074202359318517026LL)))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */long long int) var_11)) : (min((1704495538015409134LL), (((/* implicit */long long int) arr_3 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) arr_13 [i_5] [i_4] [i_2] [i_2]);
                        var_23 = ((/* implicit */signed char) ((unsigned char) ((arr_1 [i_4 - 2]) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned char)237)))))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */_Bool) (signed char)33);
        arr_19 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4142280979U)) ? (((((/* implicit */_Bool) -2074202359318517014LL)) ? (((/* implicit */unsigned long long int) ((long long int) 2074202359318517026LL))) : (((arr_2 [i_2]) << (((arr_9 [(_Bool)0]) - (144449855U))))))) : (((min((var_8), (((/* implicit */unsigned long long int) var_16)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [13] [i_2])))))));
    }
    var_24 = ((/* implicit */unsigned char) min(((short)-1588), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] [(unsigned short)10] = ((/* implicit */unsigned char) arr_3 [i_6]);
        arr_24 [i_6] = min((var_7), (((/* implicit */unsigned int) arr_1 [i_6])));
        var_25 = ((/* implicit */unsigned int) (-(((min((((/* implicit */long long int) (unsigned short)21906)), (1704495538015409134LL))) - (((-1704495538015409139LL) + (((/* implicit */long long int) 3080620002U))))))));
        arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned short)43639))))) ? (((((/* implicit */_Bool) (signed char)109)) ? (4142280976U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_6])), (arr_3 [i_6])))))))) && (((((/* implicit */_Bool) min((arr_22 [i_6]), (((/* implicit */long long int) 152686320U))))) && (((((/* implicit */_Bool) arr_22 [i_6])) && (((/* implicit */_Bool) (signed char)-110))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_7] [(signed char)4] [i_7])) - (((/* implicit */int) ((((/* implicit */int) (signed char)33)) != ((+(((/* implicit */int) arr_20 [15U])))))))));
        var_27 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)43615))));
    }
}
