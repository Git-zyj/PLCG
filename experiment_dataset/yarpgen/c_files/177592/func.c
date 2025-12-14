/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177592
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)19893);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_17 [11LL] [(signed char)3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_2] [i_3 + 2]);
                                arr_18 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */_Bool) arr_2 [i_2 - 1]);
                                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)3))));
                                var_17 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) (unsigned char)3))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [2LL] [i_4 - 1] [i_0] [i_4] [i_0] [i_2 + 1] [i_0])) ? (arr_14 [i_4] [i_4 + 2] [i_4 + 2] [i_1] [i_3] [i_2 - 1] [i_1]) : (arr_14 [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 3] [i_2 - 1] [6U])))) >= ((~(-2430916513404122611LL))))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    }
    for (signed char i_5 = 4; i_5 < 14; i_5 += 4) 
    {
        arr_23 [i_5] = ((((/* implicit */unsigned long long int) -726708693)) / (17857577276015430815ULL));
        arr_24 [i_5] = ((/* implicit */int) ((((((((/* implicit */_Bool) (signed char)51)) || (((/* implicit */_Bool) 16011548849253175121ULL)))) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (13268325788144726869ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)-29)))))))) != ((+(((((/* implicit */_Bool) (short)-26217)) ? (12570535771871228620ULL) : (((/* implicit */unsigned long long int) arr_14 [i_5 + 1] [(signed char)0] [i_5] [i_5] [i_5 + 1] [i_5] [i_5]))))))));
        arr_25 [i_5] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_14))))));
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 4960326720107375171LL)) ? (((((4960326720107375171LL) != (9223372036854775799LL))) ? (((/* implicit */unsigned int) -69668709)) : (3302043774U))) : ((~(((unsigned int) (signed char)-62))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)444)) || (((/* implicit */_Bool) (signed char)127))))) > (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                } 
            } 
        } 
        arr_36 [i_6] [8U] |= ((/* implicit */unsigned long long int) max((arr_22 [i_6]), (((/* implicit */int) var_0))));
        var_21 |= ((/* implicit */unsigned char) (short)-2);
        arr_37 [i_6] = (((+(((/* implicit */int) arr_3 [i_6])))) & (((/* implicit */int) var_3)));
    }
    for (unsigned char i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)1159)) ? (-69668709) : (62433599))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_10 - 1] [i_10 + 2])))))));
        var_23 += ((/* implicit */signed char) (_Bool)0);
        /* LoopNest 2 */
        for (signed char i_11 = 4; i_11 < 24; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) | (-6071241976176766091LL))))))) + (((((((/* implicit */_Bool) 16556006841874591918ULL)) ? (((/* implicit */int) (unsigned short)12795)) : (((/* implicit */int) (signed char)-82)))) << (((max((-1735454879092420586LL), (var_13))) + (1735454879092420590LL)))))));
                    arr_47 [i_10] [i_10] [(unsigned char)12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 62433599))))) >= (((((/* implicit */_Bool) 1613792319U)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_6))));
    var_26 += var_14;
}
