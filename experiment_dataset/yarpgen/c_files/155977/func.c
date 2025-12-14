/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155977
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
    var_16 = ((/* implicit */int) (+((+(var_6)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((unsigned short) arr_0 [i_0] [i_0])), (((/* implicit */unsigned short) (unsigned char)223)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_17 = ((/* implicit */short) ((signed char) 0ULL));
            arr_5 [i_0] = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -6772657037310716652LL)) : (6001791311845436600ULL))) << (((((((/* implicit */_Bool) var_1)) ? (arr_0 [10] [10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61702))))) - (18407433518642870224ULL)))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)5397))))) : (((/* implicit */int) max(((unsigned char)32), (((/* implicit */unsigned char) (signed char)-117)))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)23))))), (max((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5985328265294041346ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) : ((~(((/* implicit */int) var_14)))))))));
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) 2609419435U)), (max((var_10), (-6772657037310716652LL)))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_19 = ((/* implicit */short) min((min((((/* implicit */int) (unsigned char)223)), (((((/* implicit */int) (unsigned char)223)) % (((/* implicit */int) arr_9 [i_2])))))), (((/* implicit */int) min((arr_9 [i_2]), (((/* implicit */signed char) arr_10 [i_2])))))));
        var_20 += ((/* implicit */unsigned int) (_Bool)1);
        arr_11 [i_2] [i_2] &= max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), ((+(var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-221933979) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) var_1))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [(_Bool)1] [i_2]))) * (((unsigned int) arr_3 [i_2] [i_2] [i_2])))))));
    }
    var_22 = ((/* implicit */_Bool) var_10);
    var_23 = ((/* implicit */unsigned int) var_4);
}
