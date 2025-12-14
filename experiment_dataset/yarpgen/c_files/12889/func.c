/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12889
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
    var_13 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned long long int) 89436787U)) : (7677502296740860860ULL)));
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1]))));
                        var_16 = ((/* implicit */unsigned long long int) (+(var_7)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                var_17 = ((/* implicit */unsigned short) arr_12 [i_5] [i_4] [i_4] [i_0]);
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [1])))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_19 = ((/* implicit */signed char) arr_19 [i_0] [i_4] [i_4] [i_4]);
                    var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_17 [i_0])))) ? ((~(var_4))) : (((((/* implicit */_Bool) var_12)) ? (var_4) : (var_9)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_6] [i_4] [i_4])) ^ (((/* implicit */int) arr_10 [i_6] [i_6] [i_5]))));
                    var_22 = (((!(((/* implicit */_Bool) arr_4 [6U] [i_6])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (arr_7 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [(unsigned short)1] [(unsigned short)1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                }
            }
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (var_4))))));
            var_24 = ((signed char) arr_3 [i_0]);
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (unsigned short)65535))));
            var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        }
    }
}
