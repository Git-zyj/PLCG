/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16719
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_4 [i_0]);
                    arr_7 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(_Bool)1] [i_0] [i_2] [i_3] [8ULL] = arr_3 [i_4] [i_0] [i_1];
                                arr_13 [i_0] [i_3] [i_3] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((((/* implicit */short) var_9)), (arr_1 [i_0])))), (var_14))), (var_0)));
                                var_16 |= ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                    arr_14 [i_1] [(short)0] &= ((/* implicit */short) arr_11 [i_2] [i_2] [i_2] [i_1 + 1] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)));
                        arr_18 [6] [i_5] [i_2] [i_1 - 1] [6] [6] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(var_7)))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) (~(var_1))))))));
                        arr_19 [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1139651414)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (var_1))) : (min((((/* implicit */int) var_9)), (-1107528134)))))), (min((((/* implicit */long long int) arr_0 [(unsigned short)12])), (min((((/* implicit */long long int) arr_0 [(_Bool)1])), (var_14)))))));
                        arr_20 [i_0] [i_1 - 2] [i_1] [i_0] [(short)0] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_5] [i_1]))) == (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_14)) ? (arr_6 [(short)9] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_5])))))))));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        arr_24 [i_1] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_11))), (((int) var_1))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */int) (_Bool)1)))), (-1139651415))))));
                        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-15670))))), (arr_2 [(_Bool)1])))) ? (((/* implicit */int) ((short) (short)15668))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [(unsigned char)1] [i_1 - 2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)97))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((max((min((((/* implicit */int) var_2)), (var_3))), (((/* implicit */int) max(((unsigned char)62), (((/* implicit */unsigned char) var_9))))))) + (((/* implicit */int) ((var_11) != (var_13))))));
    var_20 = ((/* implicit */unsigned int) ((unsigned char) ((long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_4))))));
    var_21 &= ((/* implicit */unsigned char) (short)-29037);
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 14; i_7 += 1) 
    {
        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 4) 
        {
            {
                arr_33 [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_15 [i_7] [i_7] [i_8] [i_7] [i_8])), (var_6)))))))));
                var_22 -= ((/* implicit */short) (~(var_12)));
            }
        } 
    } 
}
