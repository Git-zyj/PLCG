/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141137
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
    var_20 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1929939556485201383LL))))) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) (-(max((((/* implicit */int) (unsigned short)35759)), (1838321814))))))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
                    arr_8 [i_0 + 2] [i_0] [i_1] [i_2] = (short)30;
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2])), ((-(((/* implicit */int) arr_0 [i_0 - 3]))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)35753)) | (((/* implicit */int) (short)-8192)))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */int) arr_1 [i_3]);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_19 [i_4] [i_4] [i_5] |= ((unsigned int) ((((((/* implicit */_Bool) var_4)) ? (-1033194391) : (var_12))) / (((/* implicit */int) (short)40))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */_Bool) (short)8171);
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(4294967295U))))));
                                var_25 = ((/* implicit */unsigned short) (-(21LL)));
                            }
                        } 
                    } 
                    var_26 = ((unsigned long long int) ((((/* implicit */int) (short)8174)) <= (((/* implicit */int) var_19))));
                }
            } 
        } 
    }
}
