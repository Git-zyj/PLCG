/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175551
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) / (var_7)))))) ? (var_2) : ((+(((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 16; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (-(max((max((arr_6 [i_0] [i_1 - 3] [i_2] [i_3 - 1]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_6))))))))))));
                        var_11 = ((/* implicit */unsigned int) (+(max((((arr_0 [i_1]) / (((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned short)59421)) & ((-2147483647 - 1))))))));
                        var_12 = ((/* implicit */unsigned short) min(((-(min((((/* implicit */long long int) (unsigned short)1)), (var_7))))), (min((max((((/* implicit */long long int) (unsigned short)1)), (1275041363474512836LL))), (((/* implicit */long long int) arr_0 [i_1 - 1]))))));
                    }
                } 
            } 
            var_13 += ((/* implicit */short) (unsigned short)6067);
        }
        for (int i_4 = 4; i_4 < 16; i_4 += 4) /* same iter space */
        {
            var_14 += ((/* implicit */long long int) var_5);
            var_15 &= ((/* implicit */int) arr_12 [i_0]);
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_17 [i_5] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5])))))), ((-(((/* implicit */int) arr_16 [i_5] [i_5]))))));
        arr_18 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_16 [i_5] [i_5])) + (((/* implicit */int) arr_16 [i_5] [i_5]))))))) ? (((((/* implicit */_Bool) ((arr_17 [i_5] [i_5]) % (arr_17 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 1275041363474512836LL)) ? (arr_17 [i_5] [i_5]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)234)), (var_0))))))))));
        var_17 = ((/* implicit */long long int) (unsigned char)238);
    }
    var_18 = ((/* implicit */unsigned char) (+(var_2)));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_3))));
}
