/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105779
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15714798525571963915ULL)))) ? (var_12) : (var_4)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_5)) : (var_12)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))) : (((/* implicit */unsigned long long int) 5959685918928832311LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 4294967281U))) ? (((/* implicit */long long int) ((int) var_2))) : (((((/* implicit */_Bool) 1509727342U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28))) : (-9002339698759812218LL))))))));
    var_18 += ((/* implicit */int) var_16);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_19 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 4])) ? (var_4) : (arr_0 [i_0 - 1] [i_0 - 3]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) (+(var_3)));
                    var_21 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-6023810948937915054LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(_Bool)1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) var_5)) ^ (((long long int) -6749674750595157111LL)))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) 7267110492444451364LL)) ? (1421925133U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_2])))))))) ? (((((/* implicit */_Bool) (unsigned short)15164)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_6 [(unsigned short)16] [i_2 + 1] [i_2 - 2]))) : ((+(arr_6 [22U] [i_1] [i_2 + 1])))));
                }
            } 
        } 
    }
}
