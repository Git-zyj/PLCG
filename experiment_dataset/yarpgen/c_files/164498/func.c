/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164498
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max(((+(arr_3 [i_1 - 2] [i_1 - 1] [i_1]))), (((/* implicit */long long int) arr_1 [i_1]))));
                var_19 = ((/* implicit */int) min((arr_1 [i_1 - 2]), (((/* implicit */unsigned int) max((max((var_10), (arr_0 [i_0]))), (((/* implicit */unsigned char) var_16)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_20 = ((/* implicit */int) (+(var_7)));
        var_21 *= ((/* implicit */signed char) arr_0 [18LL]);
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_16)), (((((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2])) | (arr_2 [i_2 + 1]))) ^ (((/* implicit */unsigned long long int) (+(-1565955393)))))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3] [i_3]))));
        arr_9 [i_3] = ((/* implicit */signed char) (+(arr_7 [i_3] [i_3])));
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_18))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (arr_7 [i_3] [i_3]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) arr_12 [i_4])))) : ((+(((/* implicit */int) arr_12 [i_4])))))), (-189682369)));
        var_25 = ((/* implicit */int) ((long long int) ((int) arr_11 [i_4])));
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_14))))));
        arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) <= (2291617758U)))) == ((+(-1)))))) < (((((((/* implicit */long long int) var_0)) >= (var_7))) ? (arr_11 [i_4]) : (var_13)))));
        var_26 = ((/* implicit */long long int) ((_Bool) arr_11 [i_4]));
    }
    var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) var_11)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_28 = ((/* implicit */signed char) (+(min((((/* implicit */long long int) var_9)), (var_7)))));
}
