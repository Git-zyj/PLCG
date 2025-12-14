/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149825
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
    var_16 = ((/* implicit */short) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (var_5)))) % ((-(((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 1498922136U))));
        arr_4 [i_0] = arr_0 [i_0] [i_0];
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)187));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 1])) - (((/* implicit */int) arr_1 [(unsigned char)8] [(unsigned char)8]))))) ? ((((((+(-1850948520))) + (2147483647))) >> (((((unsigned long long int) (short)-28287)) - (18446744073709523303ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (15515057628922602316ULL)))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_10 [(signed char)0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((int) (signed char)0));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_4])) != (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((+(2202667910U))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))))))));
                            arr_22 [i_3] [i_2] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_3])))))));
                        }
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)186)) | (((/* implicit */int) (short)16027))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) <= (arr_8 [i_0] [i_0] [i_0])))))), (((((/* implicit */int) ((short) (unsigned short)46515))) % (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0]))))))));
    }
    var_27 = ((/* implicit */unsigned char) var_5);
}
