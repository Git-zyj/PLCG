/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179195
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -732340020)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_0 [i_0])))) : (max((1221798069), (((/* implicit */int) (signed char)-11)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) & (((long long int) arr_3 [i_1] [(_Bool)0])))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))))))));
        var_16 = arr_4 [i_1];
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (unsigned short)10933)) & (((/* implicit */int) (unsigned short)30505))))))));
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-99)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max(((unsigned char)168), (((/* implicit */unsigned char) (_Bool)1))))))) * (((/* implicit */int) var_9))));
    }
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (signed char)-11))));
    var_20 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) -1221798069);
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned long long int) (_Bool)1);
                            /* LoopSeq 1 */
                            for (short i_6 = 3; i_6 < 19; i_6 += 1) 
                            {
                                var_23 &= ((/* implicit */_Bool) var_12);
                                arr_24 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2] &= ((/* implicit */unsigned short) arr_15 [i_5] [i_5]);
                            }
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((arr_7 [i_3 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26419))) : (-4902717920735136353LL))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [9LL])) : (((/* implicit */int) var_1))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        arr_30 [i_2] [i_7] [i_7 - 3] [i_8 - 1] [i_8] = ((/* implicit */unsigned int) min((arr_17 [i_3] [i_3] [(signed char)18]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30505)) <= (((/* implicit */int) var_3)))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_34 [i_2] [16] [i_7] [i_7] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)167)), (min((arr_29 [i_2] [i_7] [i_2] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)65404))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_2] [(_Bool)1] [i_2])) ? (((/* implicit */int) (unsigned short)36675)) : (((/* implicit */int) arr_18 [i_2] [i_7] [i_7])))) * (((((/* implicit */_Bool) arr_29 [i_3] [i_7] [15ULL] [i_9])) ? (((/* implicit */int) arr_12 [i_9] [i_3] [i_7 - 1] [i_9])) : (((/* implicit */int) var_4))))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255)))))) : ((~(((/* implicit */int) var_2))))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned short) min((((short) var_0)), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_7 - 2] [i_3 - 1] [i_7])) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_7] [i_7] [i_7] [i_7]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2] [i_3] [14U] [i_7] [i_7])) ^ (((/* implicit */int) var_1))))))))));
                    arr_35 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (arr_15 [i_2] [i_7 - 2])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (unsigned short)123))))) || (((/* implicit */_Bool) var_3)))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 206069450305952387LL)) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) arr_33 [i_2] [i_2] [i_3] [i_7] [i_7] [i_7 - 2]))))))) ? (((((/* implicit */_Bool) arr_18 [i_7] [(unsigned short)14] [i_2])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-25))))) : (9219902364136884256ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
            }
        } 
    } 
}
