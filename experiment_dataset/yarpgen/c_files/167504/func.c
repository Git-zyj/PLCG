/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167504
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_1)))))) ? ((~((~(((/* implicit */int) (unsigned short)40887)))))) : (((/* implicit */int) ((unsigned char) arr_5 [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned long long int) ((unsigned short) var_3))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            {
                arr_12 [i_2] = min((((/* implicit */unsigned short) arr_9 [i_2])), ((unsigned short)13124));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    var_17 |= ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_10 [(unsigned short)22] [i_2 + 1])) == (((/* implicit */int) arr_10 [14ULL] [i_2 + 1]))))));
                    arr_15 [i_2] = ((/* implicit */_Bool) (~(((max((arr_7 [i_2]), (((/* implicit */long long int) arr_11 [i_2])))) % (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) / (((1189014800621217441ULL) / (((/* implicit */unsigned long long int) 2786870986U))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(min((((/* implicit */int) max(((unsigned short)13124), (((/* implicit */unsigned short) (signed char)-109))))), (((((/* implicit */int) arr_11 [i_5])) / (((/* implicit */int) (_Bool)1)))))))))));
                                arr_21 [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)52414)) ? (((unsigned long long int) arr_14 [i_2] [(_Bool)1] [i_4] [i_4 - 1])) : (((((/* implicit */_Bool) var_11)) ? (arr_19 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_2 + 1] [i_5] [i_3 + 1])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
