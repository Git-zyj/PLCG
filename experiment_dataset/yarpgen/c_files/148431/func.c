/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148431
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)33))))) : (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3])))))))) < (((/* implicit */int) (short)-627))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)205))))) : (var_9))) / (((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned char)124))))) - (-7875574842139686931LL)))));
                            arr_16 [i_4] [i_2] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (signed char)-28);
                            var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)71)) ? (3798660314728689016LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38423)))))));
                            arr_17 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_16);
                        }
                        var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)6), (((/* implicit */unsigned short) (unsigned char)127))))) || ((!((_Bool)1)))));
                    }
                    var_22 = ((/* implicit */long long int) (signed char)-121);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (6400125536131832005LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526)))))) ? (((11880374375425119777ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) max((((/* implicit */short) var_14)), (min(((short)-31165), (((/* implicit */short) var_0))))))) : (((/* implicit */int) min(((signed char)124), (min((((/* implicit */signed char) var_0)), (var_4)))))))))));
    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((+(var_9)))))) % (8746201480653873612ULL)));
}
