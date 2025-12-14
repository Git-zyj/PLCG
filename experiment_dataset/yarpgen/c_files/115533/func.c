/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115533
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
    var_13 = ((/* implicit */int) min((10866727822202948224ULL), (7580016251506603393ULL)));
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40623)) & (((/* implicit */int) ((short) var_4)))))) >= (((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_3))))) - (var_8)))));
    var_15 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */unsigned long long int) -2140247494687428366LL)) : (14877718022002085795ULL))))) ^ (((/* implicit */unsigned long long int) min((((3223242510U) << (((17047339454694985293ULL) - (17047339454694985286ULL))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) var_7);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (152362488U))), (((1071724761U) << (((7580016251506603386ULL) - (7580016251506603382ULL))))))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 1])) ? (1521613920) : (((/* implicit */int) (!(((/* implicit */_Bool) -9185206615235413116LL))))))) - (1521613902)))));
                        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0]))));
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_4]))) - (var_1))))))) ? (((((/* implicit */_Bool) ((signed char) arr_9 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 2]))) ? ((-(14877718022002085785ULL))) : (((/* implicit */unsigned long long int) 1245568638912173806LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))));
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((int) (~(6765881831753310375LL))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((!(((/* implicit */_Bool) min((arr_4 [i_2] [i_1] [i_2]), (((/* implicit */long long int) (_Bool)1))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_2] [i_1] [i_1] [i_1])), (var_1)))), (((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [i_2] [i_0 + 2])) ? (14877718022002085794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))))));
                    arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (short)-17852);
                }
            } 
        } 
    } 
}
