/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108876
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))) ? (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) (+(((unsigned int) -3674684981946080699LL))));
        var_19 = ((/* implicit */int) arr_1 [(signed char)8]);
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (+(((((arr_2 [i_1]) < (arr_2 [i_1]))) ? (((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))) : (((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_1])))))));
        arr_6 [(short)10] = ((/* implicit */unsigned char) 3674684981946080698LL);
        arr_7 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)42390))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)11238)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [(unsigned char)0]))));
        var_22 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_8 [i_2]))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 7; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    arr_16 [i_3] = ((/* implicit */signed char) arr_0 [i_3 + 2] [i_5 + 1]);
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned short) arr_12 [i_3 + 2] [i_4 - 1] [i_5 + 1])))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)46)) % (1773099039)))) * (0LL)));
                }
                arr_17 [i_3] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((short) arr_5 [i_3] [i_3 + 3]))) : ((+(arr_10 [i_3])))));
            }
        } 
    } 
}
