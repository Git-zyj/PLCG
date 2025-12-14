/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162928
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)16)));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((signed char) -1LL)), (((/* implicit */signed char) ((((/* implicit */int) (short)14487)) > (2083266523)))))))) + (arr_5 [i_1] [i_1])));
                var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_9)) * (((/* implicit */int) (short)3211))))))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-93)), ((short)-14511))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))) < (((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (min((((/* implicit */long long int) (_Bool)1)), (arr_9 [i_2] [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_7 [i_2 + 2])))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((unsigned char) ((short) arr_7 [i_2 + 2])));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            arr_19 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((long long int) (short)-14488))))));
                            var_16 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (arr_18 [i_2] [i_2] [i_2] [i_5] [i_6]))))) : (((var_6) ? (arr_15 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_3] [i_2] [i_5] [i_6 + 1]))))))));
                            arr_20 [i_6 + 1] [i_3] [i_4] [i_3] [(signed char)11] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-1));
                        }
                        arr_21 [i_2] [(unsigned char)4] [i_4] [i_2] [i_2] [i_4] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_17 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 3])))))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-14)) > (((/* implicit */int) (unsigned short)65533)))))));
                        var_17 = ((/* implicit */unsigned int) arr_16 [i_2 + 2] [i_2 + 2] [i_3] [i_2 + 2] [i_5]);
                    }
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_2 - 1])) == (((/* implicit */int) ((unsigned char) arr_14 [i_2] [i_3] [i_4] [i_2])))))) < (((/* implicit */int) ((_Bool) arr_12 [i_2] [i_2])))));
                    arr_22 [i_2 + 3] [i_2] [i_4] [i_2 + 3] = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    } 
}
