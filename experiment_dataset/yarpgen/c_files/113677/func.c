/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113677
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2]))))) ? ((~(((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (short)29668)) : (((/* implicit */int) (unsigned char)112)))))) : (((/* implicit */int) var_5))));
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0 + 3]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((short) (-((+(((/* implicit */int) arr_2 [(signed char)5] [i_0])))))));
                            var_18 = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (short)10046)))));
                            var_19 = ((/* implicit */unsigned long long int) (-(min((2303499260U), (((/* implicit */unsigned int) ((-2147483638) + (((/* implicit */int) (unsigned char)110)))))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_1))));
            arr_13 [i_0] &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_0 [i_1] [i_1 - 1])) * (((/* implicit */int) arr_0 [i_0] [i_0])))));
        }
    }
    var_21 = ((/* implicit */unsigned int) (((~(var_7))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (min((((/* implicit */unsigned long long int) (signed char)-117)), (11114916443731466048ULL))) : (var_2)))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
}
