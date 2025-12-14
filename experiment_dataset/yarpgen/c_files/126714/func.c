/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126714
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_0 [i_0])))), (((arr_5 [i_0] [i_0] [i_0]) == (arr_5 [i_0] [(unsigned short)17] [i_2])))));
                    var_14 += ((/* implicit */unsigned int) ((int) (+(((((((/* implicit */int) var_5)) + (2147483647))) << (((606222550) - (606222550))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [7LL] [i_1])) ? (((/* implicit */int) ((((long long int) 508122882)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_6 [0LL] [i_1] [6LL])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_2 [8LL] [i_1] [i_2]) : (((/* implicit */long long int) arr_3 [i_0] [i_2]))))) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_7 [(short)1] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    arr_8 [i_1] [i_1] [i_0] [6] = ((/* implicit */long long int) max((min(((+(((/* implicit */int) (unsigned char)237)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [0ULL] [13] [3]))) < (arr_0 [i_0])))))), (((int) ((((/* implicit */long long int) 255)) == (-7150959081456216042LL))))));
                    var_16 = (+(max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~(min(((~(var_10))), (((((-1442902963) + (2147483647))) << (((var_4) - (2309469246911418130ULL)))))))));
}
