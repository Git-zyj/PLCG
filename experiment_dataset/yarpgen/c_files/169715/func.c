/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169715
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
    var_10 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -344591751)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)8] [i_0]);
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_2] [i_1])) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_4])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_16 [i_2] [i_1] [4U] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])), (142548142)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-78))))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_2])) >= (((((/* implicit */int) arr_7 [i_0])) | (var_9))))))));
                        arr_17 [(unsigned char)14] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((142548142) / (((/* implicit */int) (unsigned char)136))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)12606)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_0))) ? (arr_20 [(_Bool)1] [(unsigned char)9] [i_1] [i_2] [i_2] [i_2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_3 [i_0] [i_1] [i_7]))));
                        }
                        var_15 = ((/* implicit */signed char) arr_7 [4U]);
                        var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(_Bool)1] [i_1] [i_6] [(unsigned char)12] [i_1])) * (((/* implicit */int) (unsigned char)179)))))))) : (((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) (short)-12606))))))));
                        var_17 = ((/* implicit */int) var_0);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 142548142))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_1))));
}
