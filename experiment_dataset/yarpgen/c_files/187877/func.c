/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187877
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
    var_13 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-27704)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-717))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25206))) : (-5LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((var_14), (arr_4 [i_0] [(unsigned short)15])));
                            var_15 = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned short i_5 = 4; i_5 < 22; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */short) ((((var_11) + (9223372036854775807LL))) << ((((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_9)))))) - (117)))));
                                var_17 = ((/* implicit */short) max((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1])), ((+(((/* implicit */int) (short)21672))))));
                                var_18 = ((/* implicit */short) ((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_4 + 2] [i_5 + 1])))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-27704)) : (((/* implicit */int) arr_8 [i_1] [i_4 + 1] [i_4 - 1] [i_5 + 1]))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5295)) ? (((/* implicit */int) (unsigned short)34993)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-27729)) : (((/* implicit */int) arr_7 [4LL] [i_1] [i_4] [i_5])))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_4 + 1] [i_0] [i_5 - 3] [i_6 - 2])) ? (((/* implicit */int) arr_10 [i_1] [i_4 + 1] [i_4] [i_5 - 4])) : (((/* implicit */int) arr_16 [i_0] [i_4 + 2] [i_4] [i_4] [i_6 + 3])))) : (((((/* implicit */int) (short)-21673)) | (((/* implicit */int) arr_5 [i_4 + 1]))))));
                                var_20 = ((/* implicit */short) min((var_20), ((short)27695)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_6);
}
