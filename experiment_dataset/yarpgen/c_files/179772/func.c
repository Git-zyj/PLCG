/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179772
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
    var_12 |= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 2535219316942399337LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3697556057U))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ? ((~(((var_10) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_0))) / (var_0))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (_Bool)0);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-30875)))) <= (((/* implicit */int) min((((/* implicit */short) (unsigned char)24)), ((short)15894))))))), (arr_0 [i_0] [(_Bool)0])));
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((_Bool) arr_4 [(_Bool)1] [i_0])))));
            var_15 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5396428378760396305ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1]))) : (((var_1) | (arr_5 [i_0] [6U]))))) != (-3937468150354686298LL)));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) ((-1) | (((/* implicit */int) arr_7 [19ULL]))));
            arr_11 [i_0] [i_2] = ((/* implicit */short) min((((long long int) arr_8 [i_2] [i_0] [i_0])), (((/* implicit */long long int) max((max((((/* implicit */int) arr_4 [i_0] [18])), (1508866915))), (((/* implicit */int) arr_10 [i_2] [i_0])))))));
        }
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((short) var_6));
        var_18 ^= ((/* implicit */long long int) (+(arr_12 [i_3])));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [(short)15] [i_3])), (var_1)))) && (((/* implicit */_Bool) ((var_10) ? (arr_13 [(unsigned char)7] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) & (((((/* implicit */int) (short)2017)) * (((/* implicit */int) (short)-13863))))))) ? (arr_13 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((-652293308441550719LL) < (((long long int) (short)-23442))))))));
    }
    var_21 = ((/* implicit */short) ((unsigned char) ((max((((/* implicit */unsigned long long int) var_8)), (var_9))) ^ (var_6))));
    var_22 = ((/* implicit */signed char) ((long long int) ((_Bool) ((var_2) ? (-8737753832087862153LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46555)))))));
}
