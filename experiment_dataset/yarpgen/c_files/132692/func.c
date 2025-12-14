/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132692
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
    var_19 = var_8;
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)121))))) : (var_10)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (arr_0 [i_0])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))))));
        var_21 = ((/* implicit */_Bool) ((((long long int) arr_1 [i_0])) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-95)) | (((/* implicit */int) (_Bool)1)))))))));
        var_22 = ((/* implicit */unsigned short) var_11);
        var_23 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)123)), (arr_4 [(unsigned char)7])))) ? (((7128732341206514510LL) * (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_17))))))), (((/* implicit */long long int) ((int) ((unsigned long long int) var_17))))));
        arr_6 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_4 [i_1])))) ? (((unsigned long long int) (signed char)127)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_3 [i_1] [(signed char)4])))) ? (-2889192916039536839LL) : (((/* implicit */long long int) arr_3 [i_1] [12LL])))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)127))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (~(arr_7 [i_2])));
    }
    var_25 = ((/* implicit */unsigned int) var_1);
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-19817)) == (((/* implicit */int) (_Bool)1))))) << (((0LL) << (((((/* implicit */int) (signed char)-103)) + (156)))))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))));
}
