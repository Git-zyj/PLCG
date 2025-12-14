/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117892
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
    var_19 = ((/* implicit */unsigned short) var_7);
    var_20 -= ((/* implicit */unsigned int) (_Bool)1);
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) < (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */_Bool) arr_0 [5] [5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))), (min(((-(((/* implicit */int) (unsigned short)10251)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-83))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) arr_5 [i_0] [i_1]);
                            var_23 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) (short)-12102)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [(unsigned short)12])))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (!((_Bool)0)))))), (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned short)40616))))));
                var_25 *= ((/* implicit */short) arr_5 [i_0] [i_0]);
                var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) <= (((/* implicit */int) var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : ((((_Bool)1) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)31)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (unsigned short)51644);
}
