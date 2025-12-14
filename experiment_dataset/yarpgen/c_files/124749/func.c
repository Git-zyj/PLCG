/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124749
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) var_3))));
    var_20 += ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_15)))) != (527348222)))), (max((var_10), (((((/* implicit */int) var_11)) | (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)0)), (15504140535865871209ULL))))));
                            arr_11 [i_3] [i_1] [14] [i_3] = ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (arr_10 [i_3])))) * (var_18))) != (((/* implicit */unsigned int) max((max((var_10), (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) (unsigned char)228)))))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) arr_10 [(unsigned short)6]))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-48)), (arr_5 [i_0] [i_1 + 1] [i_1])))))));
                arr_12 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) var_16);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) / (max((var_18), (arr_3 [i_1 + 1] [i_1 + 1])))));
                var_24 += ((/* implicit */signed char) (((~(var_17))) <= (((/* implicit */int) max((arr_4 [i_0] [(unsigned char)21] [i_1 + 1]), (arr_4 [i_0] [i_1] [i_1 + 1]))))));
            }
        } 
    } 
}
