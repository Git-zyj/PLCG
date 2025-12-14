/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103571
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 4; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4ULL)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76)))));
                        arr_11 [3] [3] [i_1] [i_3 + 4] = ((/* implicit */int) (-(10U)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_4 - 2] [i_5] [i_6] [i_0] = ((/* implicit */long long int) 1725928162355476645ULL);
                            arr_27 [i_7] [i_7] [i_5] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) (-(arr_23 [i_7] [i_6] [i_4 - 1] [i_4] [i_4])));
                        }
                    } 
                } 
            } 
            var_12 = ((/* implicit */signed char) ((int) ((unsigned short) (signed char)59)));
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-76)))))));
        }
    }
    var_14 = (~(((((/* implicit */unsigned int) var_5)) % ((+(215183142U))))));
    var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_0)))));
}
