/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175447
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) (unsigned short)31045);
                                var_17 = ((/* implicit */unsigned int) arr_0 [i_1]);
                                arr_11 [i_0] [i_1] [i_1] [i_2] [(signed char)0] [i_4] [i_4] = ((/* implicit */short) min((var_6), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23461)) && (((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_10 [i_1] [i_1])))))))));
                                var_18 = ((/* implicit */int) (signed char)-52);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (+(((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_5 = 4; i_5 < 10; i_5 += 1) 
    {
        arr_14 [i_5] = ((/* implicit */signed char) var_10);
        var_20 = ((/* implicit */unsigned short) ((((0) / (((/* implicit */int) (signed char)-107)))) >> (((arr_3 [(signed char)6] [i_5] [(signed char)6]) - (18354507112424830365ULL)))));
        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_12))) && (((/* implicit */_Bool) (~(17))))));
        arr_15 [i_5] = ((/* implicit */unsigned short) (+((+(var_7)))));
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        arr_18 [i_6] = ((/* implicit */signed char) arr_17 [i_6]);
        arr_19 [i_6] [(unsigned char)14] = ((/* implicit */signed char) var_8);
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) var_13)))))));
}
