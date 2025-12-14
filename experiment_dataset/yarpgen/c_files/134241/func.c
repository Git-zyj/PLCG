/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134241
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
    var_18 -= ((/* implicit */unsigned char) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_1 [i_0 + 3])) < (4774919225414146916ULL))) ? (((((/* implicit */_Bool) (signed char)79)) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) : ((-(((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_9);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
                                arr_16 [i_1] = (!(((/* implicit */_Bool) (~((-(((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((unsigned short) (unsigned char)0));
                    arr_17 [(_Bool)1] [i_2] [i_2] [i_1] = 4774919225414146905ULL;
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(2797416451U)))) | ((+((+(var_2)))))));
                }
            } 
        } 
        arr_18 [i_1] = ((/* implicit */_Bool) max(((-(arr_8 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
        arr_19 [8U] &= ((/* implicit */signed char) arr_10 [(signed char)2]);
        var_22 -= ((/* implicit */signed char) var_8);
    }
    for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_23 = ((/* implicit */short) (-(var_3)));
        var_24 = ((/* implicit */short) max((((arr_21 [i_6] [i_6]) ? (arr_1 [i_6]) : (((/* implicit */int) arr_21 [i_6] [i_6])))), ((+(((/* implicit */int) ((unsigned short) -7405033115933409981LL)))))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_7] [i_7])) != (((/* implicit */int) (signed char)0))));
        arr_25 [i_7] = ((/* implicit */unsigned short) arr_20 [i_7]);
    }
    var_25 = ((/* implicit */_Bool) var_15);
}
