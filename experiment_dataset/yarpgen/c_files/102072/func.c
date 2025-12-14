/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102072
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0 - 1])))) : (((/* implicit */int) (unsigned short)27378)));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned int) (((~(1439683727U))) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) / (((/* implicit */int) var_8)))))));
                                var_17 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0 - 3] [i_1] [i_2 + 1] [i_3]))));
                                arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) (~(3479985034472615342ULL)));
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0 + 2] [i_2 + 1] [0U] [i_2] [i_2 - 1] [i_2]))));
                                arr_14 [i_0] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)1] [i_0 - 3])) : (((/* implicit */int) arr_8 [i_4] [i_1] [i_2] [i_1] [i_0]))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                            {
                                var_19 |= ((/* implicit */_Bool) ((unsigned int) var_8));
                                var_20 *= ((((/* implicit */int) (signed char)100)) >= (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0])));
                                var_21 = ((arr_12 [i_0 - 2] [i_0 + 2] [i_2] [i_2] [i_2 - 2] [i_0 + 2] [i_2 - 2]) ? (((/* implicit */int) var_0)) : (((int) -7948524834304235396LL)));
                            }
                        }
                    } 
                } 
                arr_18 [i_1] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0 - 3] [(_Bool)1] [i_0 - 2] [i_0 - 3])) : (((/* implicit */int) arr_4 [i_0 - 4] [(_Bool)1] [i_0 - 2] [i_0]))))), ((+(arr_15 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned short)16134))));
        var_22 &= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_6] [(unsigned char)14])) >= (((/* implicit */int) arr_20 [i_6] [i_6]))));
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [0] [i_6])) ? (arr_19 [12LL] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    }
    var_24 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 256)) ? (((/* implicit */int) var_11)) : (-350959234))))))));
}
