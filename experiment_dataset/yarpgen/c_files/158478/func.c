/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158478
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
    var_14 -= ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (short)-5794);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((+(((/* implicit */int) (short)24336)))) - (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [5ULL]))))) * (((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_10))))) - (var_7)))));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) min((arr_4 [i_2] [i_1]), (((/* implicit */short) arr_7 [(unsigned char)5] [i_3]))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 1930318365U))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_11)))))) << (((((/* implicit */int) ((short) (short)-5787))) + (5805)))));
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))) : (var_6)));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */_Bool) var_6);
                            var_22 = ((/* implicit */unsigned char) ((signed char) ((int) (unsigned short)47534)));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (min((((/* implicit */unsigned short) (short)5794)), (var_1))))))) - (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) + (max((1891452852961338540ULL), (((/* implicit */unsigned long long int) arr_6 [i_4] [i_0] [i_7]))))))));
                        }
                    } 
                } 
                var_24 &= ((/* implicit */unsigned char) (_Bool)0);
                var_25 = ((/* implicit */unsigned long long int) ((short) (((+(arr_8 [(unsigned char)5] [i_4] [i_4] [i_0]))) | (((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 1])))));
                var_26 = ((/* implicit */int) var_6);
            }
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((unsigned short) arr_21 [i_0] [i_0] [i_8])), (((/* implicit */unsigned short) ((signed char) var_13)))))) >> ((((+((((_Bool)1) ? (536870912) : (((/* implicit */int) var_13)))))) - (536870884)))));
            arr_23 [i_0] [i_8] = ((/* implicit */long long int) var_7);
        }
        arr_24 [i_0] = ((/* implicit */int) ((long long int) (~(((((/* implicit */int) var_11)) << (((var_6) - (17781086417365616344ULL))))))));
    }
}
