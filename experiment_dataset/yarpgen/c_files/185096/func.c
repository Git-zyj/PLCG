/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185096
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) | (var_12)))) ? (((((/* implicit */int) (unsigned short)15885)) | (-1536508638))) : (((/* implicit */int) ((var_14) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (var_16)))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (var_16))) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (var_11)))))) : (var_11)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) var_5);
        var_19 = ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)1928)));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_20 ^= (+(((/* implicit */int) arr_0 [i_1])));
        arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) arr_0 [i_1]))))))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            {
                var_21 = (+(((/* implicit */int) ((signed char) (short)-5))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    arr_18 [i_2] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */unsigned long long int) var_6)) * (var_12))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_17 [i_2 - 2] [i_3 - 1] [i_4] [i_4]))))));
                    arr_19 [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))), ((((+(var_13))) / (((/* implicit */unsigned long long int) ((int) (signed char)-74)))))));
                                arr_24 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [3ULL] [(signed char)11] = ((/* implicit */signed char) (((~((-(var_3))))) != (((long long int) (!((_Bool)1))))));
                                arr_25 [i_6] [i_3] [i_4] [i_5] [i_4] |= ((unsigned int) var_3);
                                arr_26 [i_6] [i_5] [i_4] [i_3 + 1] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 1] [i_4])) != (var_11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (short i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned char) 8628988473795877675ULL)))));
                                var_24 = ((/* implicit */_Bool) var_15);
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_3] [i_2] = (+((+(((((/* implicit */_Bool) (unsigned short)47464)) ? (3885377347241213132ULL) : (((/* implicit */unsigned long long int) 2587235299U)))))));
                }
            }
        } 
    } 
}
