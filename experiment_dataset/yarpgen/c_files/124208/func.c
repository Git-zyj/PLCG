/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124208
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_2 [i_0]))));
        var_19 = arr_0 [i_0] [i_0];
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_0] [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */int) var_13);
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(arr_10 [i_0] [i_2 + 1] [i_3]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_22 &= ((/* implicit */unsigned int) ((unsigned char) arr_15 [i_4] [i_4] [i_4]));
            var_23 = ((/* implicit */int) min((var_23), (arr_12 [i_5])));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) 134217727U)))))));
        }
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((int) var_3)))));
        var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_16 [i_4]) : (arr_12 [(signed char)10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23401))))) : (((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))))))));
    }
    var_27 -= ((/* implicit */unsigned char) var_17);
}
