/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180932
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) : (max((var_2), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 3])) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) : (13429265939432197181ULL)));
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 - 2])) | (((/* implicit */int) arr_2 [i_0 + 1])))))));
            var_14 = ((/* implicit */int) 13429265939432197176ULL);
        }
    }
    var_15 += ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) var_6)))))) > (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (unsigned short)61324)), (11390157965995999471ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) (unsigned short)4212))))))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_17 = ((/* implicit */signed char) (-(((int) (signed char)92))));
            arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_3])) & (((/* implicit */int) ((short) arr_5 [i_2] [i_3])))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_18 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_3])) ? (arr_16 [i_4]) : (arr_16 [i_4]))) <= (((arr_16 [i_2]) & (arr_16 [i_5])))));
                        arr_19 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned short) (signed char)-65));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) ((int) arr_7 [i_2]));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_16 [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6])))))) ^ (((/* implicit */int) min((arr_2 [i_6]), (var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_6] [i_6])) >= (((/* implicit */int) (signed char)64)))))) : (min((arr_14 [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_5 [i_6] [i_6]))))));
        arr_22 [i_6] = ((/* implicit */int) 10008535910683739652ULL);
    }
}
