/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128016
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
    var_14 = ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
                        var_17 = ((/* implicit */_Bool) (-(var_2)));
                        var_18 = ((/* implicit */short) var_6);
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (var_5))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-106)) + (111)))));
                        var_21 = ((/* implicit */unsigned char) var_12);
                        var_22 = ((/* implicit */unsigned char) var_2);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_3))))) ? (((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_11))));
                    }
                    for (short i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) var_9);
                        var_25 = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (var_12));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (-(((/* implicit */int) max((var_10), (var_7))))));
                                arr_20 [i_0 - 1] [(_Bool)1] [i_0 - 1] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)121))))))) ^ (((12ULL) - (((/* implicit */unsigned long long int) -1))))));
                                var_27 = ((/* implicit */signed char) (((-(((/* implicit */int) var_10)))) == (((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) var_8);
                    var_29 = (+(((((/* implicit */_Bool) var_3)) ? (var_5) : (var_5))));
                }
            } 
        } 
    } 
}
