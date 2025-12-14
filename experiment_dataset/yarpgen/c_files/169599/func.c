/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169599
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((arr_2 [i_0 - 3]) > (((/* implicit */int) (unsigned char)255)))) ? (min((((/* implicit */int) arr_1 [i_0 + 1])), (arr_2 [i_0 - 1]))) : ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)16] [i_1] [(unsigned char)2] [i_1])))))))));
                    arr_10 [i_1] [i_1] [13ULL] [6ULL] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 - 3])))))) : (-602908367041610956LL)))));
                    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) arr_5 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -602908367041610961LL))))) : (((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 3]))))), (((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 - 2] [i_1] [i_2])) & (3837622796173257894ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_4 - 1]), (arr_17 [i_0] [i_4 - 1])))) && (((/* implicit */_Bool) max((arr_17 [i_0] [i_4 - 1]), (arr_17 [i_3] [i_4 - 1]))))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_3 + 1])) / ((+(arr_4 [i_4])))))) ? ((+(min((-602908367041610956LL), (((/* implicit */long long int) arr_3 [i_0 - 1])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((3969166865434506442ULL) >= (arr_15 [i_3]))))))))))));
                    var_24 ^= ((/* implicit */_Bool) arr_0 [(unsigned char)7] [i_3]);
                    var_25 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0]);
                }
            } 
        } 
    }
}
