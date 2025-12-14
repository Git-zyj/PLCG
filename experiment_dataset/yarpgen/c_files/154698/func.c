/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154698
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
    var_11 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */int) ((short) var_1));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1]);
                            var_15 = ((/* implicit */unsigned long long int) min((((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))), (((((_Bool) 2807181336845435341ULL)) ? (var_7) : (((/* implicit */long long int) ((unsigned int) arr_11 [8ULL] [i_3] [i_2] [i_3])))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0])))))));
            }
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned int) arr_5 [(_Bool)1] [(_Bool)1] [i_1 + 1])), (((((/* implicit */_Bool) arr_13 [8LL] [i_1 + 1] [i_1 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((int) 15639562736864116275ULL))) : ((-(425612773U))))))))));
        }
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        arr_17 [i_5] [2LL] = (+(((/* implicit */int) max((arr_14 [i_5] [i_5]), (((/* implicit */unsigned short) arr_16 [i_5] [i_5]))))));
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_16 [i_5] [i_5]), (arr_16 [i_5] [i_5])))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 425612789U))))), (15639562736864116274ULL)))));
        arr_18 [i_5] = ((/* implicit */signed char) min((max((arr_15 [i_5]), (((/* implicit */unsigned int) var_8)))), (((((/* implicit */_Bool) var_7)) ? (arr_15 [i_5]) : (425612773U)))));
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) ((int) ((long long int) arr_16 [15U] [(signed char)1])));
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 18; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    {
                        arr_27 [i_5] [18U] [i_5] [i_8] |= ((/* implicit */unsigned char) ((unsigned long long int) ((arr_25 [i_6] [i_6 - 3] [i_6 - 1]) & (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                        var_19 = ((/* implicit */_Bool) (-(max(((+(425612773U))), (((/* implicit */unsigned int) max((var_3), (var_5))))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_7))));
                        var_21 = ((/* implicit */short) var_6);
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2983977030113710311ULL) : (max((((/* implicit */unsigned long long int) var_7)), (2807181336845435313ULL)))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) var_7))));
}
