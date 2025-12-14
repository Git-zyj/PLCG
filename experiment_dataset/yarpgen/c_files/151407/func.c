/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151407
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
    var_19 = ((/* implicit */short) (signed char)68);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */int) arr_1 [i_1] [i_0]);
                var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_0]), (arr_1 [i_0] [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1]))))), (arr_3 [i_0] [i_1] [i_1]))))));
                arr_6 [(signed char)5] [i_0] = ((/* implicit */short) max((((/* implicit */int) var_18)), ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)68))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)68))))) : (arr_4 [i_0])))))));
                arr_7 [i_0] [4] [(unsigned char)9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1737177901)) + (12578620585651888428ULL)))) ? (var_16) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (2077551654U)))))), (((((arr_4 [i_1]) * (((/* implicit */unsigned long long int) 1574716001U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31284)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) (signed char)-105)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((unsigned char)3), (((/* implicit */unsigned char) (signed char)-93)))))));
    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_1))) / (var_6)));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_25 = ((/* implicit */short) ((((/* implicit */int) (signed char)-69)) < (((/* implicit */int) (signed char)-22))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) (signed char)92);
    }
}
