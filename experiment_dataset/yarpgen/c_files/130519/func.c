/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130519
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) var_7);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_13))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0]))))) < (var_8)));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_25 [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) arr_16 [i_4]);
                        var_21 = (~(((/* implicit */int) ((var_2) == (((arr_18 [i_7]) | (((/* implicit */unsigned int) var_17))))))));
                        var_22 = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) ((var_14) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(signed char)10] [i_4])))))));
    }
    var_24 = ((/* implicit */_Bool) (-((+(((/* implicit */int) ((_Bool) var_12)))))));
}
