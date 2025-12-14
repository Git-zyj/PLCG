/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141019
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-7732))))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7720)) ? (2147483647) : (((/* implicit */int) (short)-7752))));
        var_12 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7731))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (63ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535)))))));
        var_13 -= var_4;
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) (short)7712))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-4302), (((/* implicit */short) arr_0 [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)2)) ? (((((/* implicit */_Bool) 155642078)) ? (2849933631U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        var_16 &= ((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_3]);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_11 [i_1]) == (((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_0)))), ((((_Bool)1) ? (((/* implicit */int) (short)4312)) : (((/* implicit */int) arr_7 [i_3])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_18 = var_3;
                            arr_20 [i_4] [i_3] [i_2] [i_1] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4302))) != (15662435596323753190ULL)));
                        }
                        for (signed char i_6 = 1; i_6 < 7; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) (unsigned short)43339);
                            arr_25 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) < (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_14 [i_2] [i_2] [i_3])))));
                            var_20 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6 + 1]))) & (255ULL)))));
                        }
                    }
                    for (unsigned int i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)-4279))))) / (var_6)))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_1 [i_1])))) : ((+(((/* implicit */int) arr_12 [i_1] [i_3] [i_7 - 1])))));
                        arr_29 [i_1] [i_2] [i_3] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((-((-(arr_16 [i_7] [i_3] [i_3] [i_2] [i_1] [i_1])))))));
                    }
                    var_22 = ((/* implicit */int) min((min((((/* implicit */long long int) (short)127)), (((((/* implicit */long long int) ((/* implicit */int) (short)1023))) / (var_2))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-4308)))))))));
                    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_5)), (((unsigned short) (unsigned char)183))));
                    var_24 = arr_2 [i_1];
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((15662435596323753176ULL), (((/* implicit */unsigned long long int) var_9))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
}
