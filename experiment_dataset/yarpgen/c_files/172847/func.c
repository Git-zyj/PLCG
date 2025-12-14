/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172847
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((var_2) - (9012699014094990788LL))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((unsigned long long int) 9223372036854775804LL)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775804LL) != (9223372036854775804LL)))))));
        var_17 = ((/* implicit */unsigned long long int) (short)13464);
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-8)) > (((/* implicit */int) var_9))))) >> (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_6)))))));
                        arr_16 [9U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((var_2) == (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_13)))))))));
    }
    for (signed char i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned char) ((long long int) ((short) min((((/* implicit */short) var_5)), ((short)-30308)))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (9223372036854775800LL))) == (((/* implicit */long long int) ((((/* implicit */int) (signed char)-8)) % (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) ((long long int) var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 16; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((signed char) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_1)))))))));
                                arr_27 [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */unsigned char) min((((short) 8329191745504441907LL)), (((/* implicit */short) ((unsigned char) var_11)))));
                                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (0ULL)))))));
                            }
                        } 
                    } 
                    arr_28 [i_5] = ((/* implicit */long long int) ((max((-9223372036854775804LL), (((/* implicit */long long int) 0U)))) >= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-8401)) + (8411))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        for (long long int i_11 = 4; i_11 < 16; i_11 += 2) 
                        {
                            {
                                arr_34 [(unsigned char)6] [(unsigned char)6] [i_10] [i_7] [i_11 - 3] [i_10] [0ULL] &= ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (unsigned short)49500)))) & (((/* implicit */int) (signed char)73)))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-5994)), (min((((/* implicit */unsigned int) (unsigned char)219)), (var_13)))))), (var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) max(((unsigned char)206), (((/* implicit */unsigned char) var_6))));
}
