/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116399
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((0ULL) > (((/* implicit */unsigned long long int) 1587021016))))));
        var_20 = arr_2 [i_0];
        var_21 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) var_16))))) ? (2147483647) : (((/* implicit */int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 4; i_3 < 16; i_3 += 3) 
            {
                arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5570478358601995948ULL)) ? (((/* implicit */int) (short)29298)) : (((/* implicit */int) (unsigned char)56))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_1 + 3] [i_2] [i_2])))) : (arr_4 [i_1 + 3] [i_2 + 1])));
                var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)78)) ? (arr_2 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            }
            var_23 += ((/* implicit */unsigned int) var_15);
            var_24 = ((/* implicit */short) arr_6 [i_2]);
        }
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(arr_5 [i_1 - 2]))))));
            arr_15 [i_1] [(_Bool)0] = ((/* implicit */unsigned char) arr_4 [i_4] [i_4]);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) / (4294967295U)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-78)))))));
        }
        var_27 = ((/* implicit */unsigned long long int) (-((+(3440552192322681291LL)))));
        arr_16 [i_1] [i_1] = (+(((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 2])));
    }
    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == ((+(9223372036854775807LL))))))));
    var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29267))) : (5570478358601995950ULL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15)))) ^ (((/* implicit */int) min(((signed char)91), ((signed char)-104))))));
    var_30 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) -1263305404)) || (((/* implicit */_Bool) -9059639430936688220LL))))), (((var_5) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-8767)) : (((/* implicit */int) var_4)))))))));
}
